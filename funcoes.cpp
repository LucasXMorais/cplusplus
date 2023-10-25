#include <iostream>

// Forward declaration
// Podemos declarar uma funcao 'fantasma' antes dela ser declarada no programa para compilar
// caso queira criar a funcao depois dela ser chamada
int add(int,int);
// "auto" automaticamente pega o tipo do retorno
/* auto addAuto(float a, float b) -> float; */

//Recursion in cpp
int countdown(int n){
  // 1. Base case
  if(n==0){
    std::cout << "0... THE END" << std::endl;
    return 0;
  }

  //Recursive Case
  std::cout << n << std::endl;
  return countdown(n-1);
}

void print(void){
    std::cout << "Hello Function" << std::endl;
}

int main(){

  /* int x = add(2,3); */
  /* std::cout << add(2,3) << std::endl; */
  /* std::cout << add(2.f,3.f) << std::endl; */
  /* std::cout << auto addAuto(float a, float b) -> float << std::endl; */

  countdown(5);
  // Se o valor for muito grande pode dar erro de 'stackoverflow'
  // Ou seja, tem que tomar cuidado com recursao de funçoes
  countdown(5000000);

  /* print(); */

  return 0;

}

// C++ consegue diferenciar uma função da outra
// baseado no tipo declarado, mesmo tendo o mesmo nome
int add(int a, int b){
  std::cout << "int add(int,int)" << std::endl;
  return a+b;

}
float add(float a, float b){
  std::cout << "float add(float,float)" << std::endl;
  return a+b;

}
