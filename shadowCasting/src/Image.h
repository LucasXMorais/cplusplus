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

  Image& grayscale_avg();
  Image& grayscale_lum();

  Image& colorMask(float r, float g, float b);

  Image& flipX();
  Image& flipY();

  Image& overlay(const Image& source, int x, int y);

  Image& crop(uint16_t cx, uint16_t cy, uint16_t cw, uint16_t ch);

};


