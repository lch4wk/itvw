#include <iostream>
#include "bar.cpp"
#include "foo.cpp"

int main(int argc, char const *argv[]) {
  // extern 'a'
  printA();
  std::cout << "MAIN::printA()=  " << a << std::endl;
  a=50;
  std::cout << "MAIN::printA()=  " << a << std::endl;
  printA();

  // static 4種
  // (1) static 出現在 variable 之前，且該 variable 宣告在某個 function 之中
  // (2) static 出現在 variable 之前，且該 variable 並不是宣告在某個 function 中
  // (3) 靜態成員變數：static 出現在 class 的 member variable 之前
  // (4) 靜態成員函數：static 出現在 class 的 member function 之前
  cout << endl;

  // type(1)
  cout << "\n--type(1)--" << endl;
  countFunc();
  countFunc();
  countFunc();

  // type(2)
  cout << "\n--type(2)--" << endl;
  printAge_A();
  printAge_B();


  // type(3)
  cout << "\n--type(3)--" << endl;
  A a1;
  cout << "a1 # of Instance: " <<  a1.getNum() << endl;
  A a2;
  cout << "a2 # of Instance: " <<  a1.getNum() << endl;
  A a3;
  cout << "a3 # of Instance: " <<  a1.getNum() << endl;
  a3.num_of_instances++;
  cout << "a1.getNum() return  " <<  a1.getNum() << endl;

  // type(4)
  cout << "\n--type(4)--" << endl;
  A::setNum(80);
  cout << "a1.getNum() return  " <<  a1.getNum() << endl;


  return 0;
}
