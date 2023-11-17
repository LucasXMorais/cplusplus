#include "Image.h"
#include <iostream>

int main(int argc, char** argv){
  Image test("img.png");
  /* test.write("new.png"); */
  /* Image copy = test; */
  /* for(int i = 0; i < copy.w*copy.channels; i++){ */
  /*   copy.data[i] = 255; */
  /* } */
  /* copy.write("copy.png"); */
  /* Image blank(100,100,3); */
  /* blank.write("blank.jpg"); */

  /* Image gray_avg = test; */
  /* gray_avg.grayscale_avg(); */
  /* gray_avg.write("gray_avg.png"); */
  /**/
  /* Image gray_lum = test; */
  /* gray_lum.grayscale_lum(); */
  /* gray_lum.write("gray_lum.png"); */

  /* Image redImg = test; */
  /* redImg.colorMask(1,0,0); */
  /* redImg.write("red.png"); */
  /* /* redImg.write("./results/red.png"); */
  /**/
  /* Image greenImg = test; */
  /* greenImg.colorMask(0,1,0); */
  /* greenImg.write("green.png"); */
  /**/
  /* Image blueImg = test; */
  /* blueImg.colorMask(0,0,1); */
  /* blueImg.write("blue.png"); */

  /* Image sharp = test; */
  /* sharp.sharp(); */
  /* sharp.write("sharp.png"); */

  test.encodeMessage("Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua.");
  test.write("secret.png");

  char buffer[256] = {0};
  size_t len = 0;
  test.decodeMessage(buffer, &len);

  printf("Message: %s (%zu)\n", buffer, len);

  return 0;
}








