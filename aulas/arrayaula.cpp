#include <iostream>
#include <numeric> 
#include <iterator>
#include <array>

int main(){

  //int ids[100]; // Array  com 100 itens. Tamanho definido ao escrever o código [RAW ARRAY]
  std::array<int,100> ids; // Array do std com 100 itens. [STD ARRAY] 

  ids[0] = 123;
  std::cout << ids[0] << std::endl;
  std::cout << sizeof(ids[0]) << std::endl;

  for (int i = 0; i < 100; i++ ){
    ids[i] = i;
    std::cout << ids[i] << std::endl;
  }

  // Função iota
  // funcao da biblioteca std que faz basicamente o memso loop de cima,
  // sendo que o ultimo parametro é o valor inicial
  std::iota(std::begin(ids), std::end(ids), 10);
  for (int i = 0; i < 100; i++ ){
    std::cout << ids[i] << std::endl;
  }

  return 0;

}

