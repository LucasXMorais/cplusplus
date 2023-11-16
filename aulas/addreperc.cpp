#include <iostream>
#include <typeinfo>

int main(){

  int x = 42;
  int& ref = x;
  //int& is the full typé, for a reference type

  std::cout << "x value:" << x << std::endl;
  std::cout << "x type:" << typeid(x).name() << std::endl;
  std::cout << "x addr:" << &x << std::endl;

  std::cout << "ref value:" << ref << std::endl;
  std::cout << "ref type:" << typeid(ref).name() << std::endl;
  std::cout << "ref addr:" << &ref << std::endl;

  // Mudando o valor de ref, x tambem muda 
  // isso pois a variável ref está no endereço de x
  ref = 84;

  std::cout << "x value:" << x << std::endl;
  std::cout << "x type:" << typeid(x).name() << std::endl;
  std::cout << "x addr:" << &x << std::endl;

  std::cout << "ref value:" << ref << std::endl;
  std::cout << "ref type:" << typeid(ref).name() << std::endl;
  std::cout << "ref addr:" << &ref << std::endl;

  return 0;

}
