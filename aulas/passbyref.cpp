#include <iostream>
#include <typeinfo>
#include <vector>
#include <algorithm>

void passByValue(int arg){
  std::cout << "args address is : " << &arg << std::endl;
  arg = 1;
}

void passByRef(int &alias){
  std::cout << "alias address is : " << &alias << std::endl;
  alias = 2;
}

void refTesting(){

  int x = 42;
  int &ref = x;
  //int& is the full typé, for a reference type

  std::cout << "x value:" << x << std::endl;
  std::cout << "x type:" << typeid(x).name() << std::endl;
  std::cout << "x addr:" << &x << std::endl;

  std::cout << "ref value:" << ref << std::endl;
  std::cout << "ref type:" << typeid(ref).name() << std::endl;
  std::cout << "ref addr:" << &ref << std::endl;

  std::cout << "MUDANDO O VALOR DE X" << std::endl;
  std::cout << "    ref = 84;" << std::endl;
  // Mudando o valor de ref, x tambem muda 
  // isso pois a variável ref está no endereço de x
  ref = 84;

  std::cout << "x value:" << x << std::endl;
  std::cout << "x type:" << typeid(x).name() << std::endl;
  std::cout << "x addr:" << &x << std::endl;

  std::cout << "ref value:" << ref << std::endl;
  std::cout << "ref type:" << typeid(ref).name() << std::endl;
  std::cout << "ref addr:" << &ref << std::endl;

  std::cout << "MUDANDO O VALOR DE X" << std::endl;
  std::cout << "    passByValue(x);" << std::endl;
  passByValue(x);
  // Isso não altera o valor de uma referência pois foi 
  // passado apenas o valor da variável para o argumento

  std::cout << "x value:" << x << std::endl;
  std::cout << "x type:" << typeid(x).name() << std::endl;
  std::cout << "x addr:" << &x << std::endl;

  std::cout << "ref value:" << ref << std::endl;
  std::cout << "ref type:" << typeid(ref).name() << std::endl;
  std::cout << "ref addr:" << &ref << std::endl;

  std::cout << "MUDANDO O VALOR DE X" << std::endl;
  std::cout << "    passByRef(x);" << std::endl;
  passByRef(x);
  // Agora o valor é alterado pois foi passado o endereço
  // na memória para a fuinção que faz a operação no endereço e não no valor

  std::cout << "x value:" << x << std::endl;
  std::cout << "x type:" << typeid(x).name() << std::endl;
  std::cout << "x addr:" << &x << std::endl;

  std::cout << "ref value:" << ref << std::endl;
  std::cout << "ref type:" << typeid(ref).name() << std::endl;
  std::cout << "ref addr:" << &ref << std::endl;
}

void passVectorByValue(std::vector<int> arg){
  std::cout << "args address is : " << &arg << std::endl;
  arg[0] = 2;
}

void passVectorByRef(std::vector<int> &alias){
  std::cout << "alias address is : " << &alias << std::endl;
  alias[0] = 3;
}

void vectorsRefTest(){

  std::vector<int> x(100000000);
  /* x.reserve(1000); */
  std::fill(std::begin(x),std::end(x),1);

  std::cout << x[0] << std::endl;

  passVectorByValue(x);
  std::cout << x[0] << std::endl;
  passVectorByRef(x);
  std::cout << x[0] << std::endl;
  //Quando rodamos o programa com time ./prog
  //Ao rodar apenas com o passbyref, nota-se que o 
  //tempo necessário é menor.
}

int main(){

  /* refTesting(); */

  vectorsRefTest();

  return 0;

}
