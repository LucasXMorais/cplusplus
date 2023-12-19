#include "Image.h"
#include <iostream>
#include <cstdlib>
#include <math.h>

#define PI 3.14159265

typedef struct {
  float x;
  float y;
} vetor2D;

int main(int argc, char** argv){
  
  // Iniciando o gerador de numeros aleatorios com uma seed pseudo-aleatoria
  srand((unsigned) time(NULL));

  Image heightMap(100,100,3);
  const int mapSize = heightMap.size;

  // Gerando um grid 2d que de vetores 2d normalizados aleatorios
  vetor2D grid[(heightMap.w+1)*(heightMap.h+1)];
  for (int i = 0; i < heightMap.w*heightMap.h; i++){
  /* for (int i = 0; i < 10; i++){ */
    // Gerando um angulo aleatorio de 0 a 360 e converte para radiano
    float randomAngle = ((float)(rand() % 360)) * PI / 180;
    grid[i].x = cos(randomAngle);
    grid[i].y = sin(randomAngle);
  }

  return 0;

}








