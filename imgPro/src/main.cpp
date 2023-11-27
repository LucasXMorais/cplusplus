#include "Image.h"
#include <iostream>

int main(int argc, char** argv){
  Image test("imgs/img.png");

  /* test.write("new.png"); */
  /* Image copy = test; */
  /* for(int i = 0; i < copy.w*copy.channels; i++){ */
  /*   copy.data[i] = 255; */
  /* } */
  /* copy.write("copy.png"); */
  /* Image blank(100,100,3); */
  /* blank.write("blank.jpg"); */

  /* //Gassuian Blur */
  /* double Gker[] = {1/16.0, 2/16.0, 1/16.0, */
  /*                 2/16.0, 4/16.0, 2/16.0, */
  /*                 1/16.0, 2/16.0, 1/16.0}; */
  /* //Emboss Blur */
  /* double Eker[] = {-2/9.0, -1/9.0,   0.0, */
  /*                  -1/9.0,  1/9.0, 1/9.0, */
  /*                     0.0,  1/9.0, 2/9.0}; */
  /* Image t0 = test; */
  /* Image t1 = test; */
  /* Image t2 = test; */
  /* Image t3 = test; */
  /* Image t4 = test; */
  /* Image t5 = test; */
  // Clamping to 0
  /* t0.std_convolve_clamp_to_0(0, 3, 3, Gker, 1, 1); */
  /* t0.std_convolve_clamp_to_0(1, 3, 3, Gker, 1, 1); */
  /* t0.std_convolve_clamp_to_0(2, 3, 3, Gker, 1, 1); */
  /* t0.write("results/GaussianBlurred.png"); */
  /* t1.std_convolve_clamp_to_0(0, 3, 3, Eker, 1, 1); */
  /* t1.std_convolve_clamp_to_0(1, 3, 3, Eker, 1, 1); */
  /* t1.std_convolve_clamp_to_0(2, 3, 3, Eker, 1, 1); */
  /* t1.write("results/EmbossBlurred.png"); */
  // Clamping to border
  /* t2.std_convolve_clamp_to_border(0, 3, 3, Gker, 1, 1); */
  /* t2.std_convolve_clamp_to_border(1, 3, 3, Gker, 1, 1); */
  /* t2.std_convolve_clamp_to_border(2, 3, 3, Gker, 1, 1); */
  /* t2.write("results/GaussianBlurredBorder.png"); */
  /* t3.std_convolve_clamp_to_border(0, 3, 3, Eker, 1, 1); */
  /* t3.std_convolve_clamp_to_border(1, 3, 3, Eker, 1, 1); */
  /* t3.std_convolve_clamp_to_border(2, 3, 3, Eker, 1, 1); */
  /* t3.write("results/EmbossBlurredBorder.png"); */
  // Clamping Cyclic
  /* t4.std_convolve_cyclic(0, 3, 3, Gker, 1, 1); */
  /* t4.std_convolve_cyclic(1, 3, 3, Gker, 1, 1); */
  /* t4.std_convolve_cyclic(2, 3, 3, Gker, 1, 1); */
  /* t4.write("results/GaussianBlurredCyclic.png"); */
  /* t5.std_convolve_cyclic(0, 3, 3, Eker, 1, 1); */
  /* t5.std_convolve_cyclic(1, 3, 3, Eker, 1, 1); */
  /* t5.std_convolve_cyclic(2, 3, 3, Eker, 1, 1); */
  /* t5.write("results/EmbossBlurredCyclic.png"); */
  //Differences
  /* Image diff = t0; */
  /* diff.diffmap_scale(t2); */
  /* diff.write("results/diff.png"); */

  /* Image gray_avg = test; */
  /* gray_avg.grayscale_avg(); */
  /* gray_avg.write("gray_avg.png"); */
  /**/
  /* Image gray_lum = test; */
  /* gray_lum.grayscale_lum(); */
  /* gray_lum.write("gray_lum.png"); */

  /* Image test2("imgs/img.png"); */
  /* Image test3("imgs/img2.jpg"); */
  /**/
  /* Image diff = test2; */
  /* diff.diffmap(test3); */
  /* diff.write("results/diff.jpg"); */
  /**/
  /* Image diffScale = test2; */
  /* diffScale.diffmap_scale(test3); */
  /* diffScale.write("results/diffScale.jpg"); */

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

  /* test.encodeMessage("Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua."); */
  /* test.write("secret.png"); */
  /**/
  /* char buffer[256] = {0}; */
  /* size_t len = 0; */
  /* test.decodeMessage(buffer, &len); */
  /**/
  /* printf("Message: %s (%zu)\n", buffer, len); */

  /* test.flipX(); */
  /* test.write("results/flipX.png"); */
  /* test.flipY(); */
  /* test.write("results/flipY.png"); */

  /* Image over("imgs/img4.png"); */
  /* Image overOver("imgs/img5.png"); */
  /* over.overlay(overOver, 20, 20); */
  /* over.write("results/overlay.png"); */

  test.crop(500, 500, 3000, 600);
  test.write("results/crop.png");

  return 0;

}








