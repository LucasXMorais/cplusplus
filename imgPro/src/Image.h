#include <stdint.h>
#include <cstdio>

#define STEG_HEADER_SIZE sizeof(uint32_t) * 8

enum ImageType{
  PNG, JPG, BMP, TGA
};

struct Image {
  uint8_t* data = NULL;
  size_t size = 0;
  int w;
  int h;
  int channels;

  Image(const char* filename);
  Image(int w, int h, int channels);
  Image(const Image& img);
  ~Image();

  bool read(const char* filename);
  bool write(const char* filename);
  
  ImageType getFileType(const char* filename);

  Image& std_convolve_clamp_to_0(uint8_t channel, uint32_t ker_w, uint32_t ker_h, double ker[], uint32_t cr, uint32_t cc);
  Image& std_convolve_clamp_to_border(uint8_t channel, uint32_t ker_w, uint32_t ker_h, double ker[], uint32_t cr, uint32_t cc);
  Image& std_convolve_cyclic(uint8_t channel, uint32_t ker_w, uint32_t ker_h, double ker[], uint32_t cr, uint32_t cc);

  Image& grayscale_avg();
  Image& grayscale_lum();

  Image& diffmap(Image& img);
  Image& diffmap_scale(Image& img, uint8_t scl = 0);

  Image& colorMask(float r, float g, float b);

  Image& encodeMessage(const char* message);
  Image& decodeMessage(char* buffer, size_t* messageLength);

  Image& flipX();
  Image& flipY();

  Image& overlay(const Image& source, int x, int y);

  Image& crop(uint16_t cx, uint16_t cy, uint16_t cw, uint16_t ch);

};


