#include <iostream>

int main(){

  // Scopes sao areas "exculsivas" - 
  // Como se fosse uma função, 
  // isso ajuda a limpar a memoria para variaveis que nao serao muito usadas
  {
  float PI = 3.141526;
  std::cout << PI << std::endl;
  }

  // Gera erro pois está fora do scope
  // std::cout << PI << std::endl;

  return 0;

}



