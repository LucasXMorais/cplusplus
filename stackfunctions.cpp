#include <iostream>

void SetValue(int arg){
  std::cout << "SetValue:\targ is initially: " << arg << std::endl;
  std::cout << "arg's addr: " << &arg << std::endl;
  arg = 9999;
  std::cout << "SetValue:\targ at the end is: " << arg << std::endl;
  std::cout << "arg's addr: " << &arg << std::endl;
}

int main(){

  int x = 42;
  std::cout << "x's value: " << x << std::endl;
  std::cout << "x's addr: " << &x << std::endl;
  std::cout << "" << std::endl;
  //Chamando a função
  std::cout << "Mudando o valor de x" << std::endl;
  std::cout << "" << std::endl;
  SetValue(x);
  std::cout << "" << std::endl;
  std::cout << "x's value: " << x << std::endl;
  std::cout << "x's addr: " << &x << std::endl;
  // Isso não muda o valor de x
  // Pois passamos o valor de x, um cópia de x
  // tanto que arg tem um addr diferente de x

  return 0;

}
