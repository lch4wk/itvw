#include <iostream>
#include "bar.h"
using namespace std;

int a = 10;
void printA() {
  std::cout << "BAR::printA()=  " << a << std::endl;
}

// (1)可用來計算函數被呼叫的次數
void countFunc(){
  static int counter=0;
  ++counter;
  cout << "'CountFunc' function has been called "
         << counter << " times" << endl;
}

// (2) 不同CPP檔案相同名稱之全域變數
static int age = 26;
void printAge_A(){
  cout << "BAR::printAge_A(): " << age << endl;
}

int A::num_of_instances = 0;
A::A() { ++num_of_instances; }
// (3) 計算類別被實作出instance的次數
int A::getNum(){ return num_of_instances; }

// (4) 提供其他.cpp無須實作即可使用class裡的靜態成員函數
void A::setNum(int x){ num_of_instances = x; }
