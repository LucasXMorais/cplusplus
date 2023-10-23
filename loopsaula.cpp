#include <iostream>
#include <array>
#include <algorithm>

int main(){

  int arr[] = {1,3,5};
  std::array<int,3> arr2{2,4,6};
  std::cout << std::endl;

  for(int i=0; i<3; i++){
    std::cout << arr[i] << std::endl;
  }
  std::cout << std::endl;
  // range-based for loops
  for(int i=0; i<arr2.size(); i++){
    std::cout << arr2[i] << std::endl;
  }
  std::cout << std::endl;
  /* for(int element: arr2){ */
  // Auto pode ser usado caso nao saiba o tipo 
  for(auto element: arr2){
    std::cout << element << std::endl;
  }

  std::cout << std::endl;

  // WHILE
  int count = 3;
  while(count > 0){
    std::cout << count << std::endl;
    count--;
  }

  std::cout << std::endl;
  count = 3;
  do{
  std::cout << count << std::endl;
    count--;
  } while(count > 0);

  std::cout << std::endl;

  std::array<int,3> myArray;
  std::fill(std::begin(myArray),std::end(myArray),1);

  for(int element : myArray) {
    std::cout << element << std::endl;
  }

  return 0;

}



