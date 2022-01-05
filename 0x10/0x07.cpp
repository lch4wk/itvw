#include <iostream>
using namespace std;
// 7.關鍵字const有什麼含意？ const意味著“Read-only”
/* 下面的聲明都是什麼意思？
(1) const int a;
(2) int const a;
(3) const int *a;
(4) int * const a;
(5) int const * a const;
*/
int main(int argc, char const *argv[]) {
  /*
  (1),(2) a是一個常數型整數
  (3) a是一個指向常數型整數的指標 (指標能改、整數不能改)
  (4) a是一個指向整數的常數型指標 (指標不能改、整數能改)
  (5) a是一個指向常數型整數的指標，且指標本身亦是常數型態。
  */
  int temp =10;
  const int a1 = 1;
  int const a2 = 2;
  const int *a3 = &a1; // const 修飾 int
  int* const a4 = &temp; // const 修飾 a4，且a4型態是int*
  const int* const a5 = &temp;

  cout << "a1= " << a1 << endl;
  cout << "a2= " << a2 << endl;
  cout << "a3= " << a3 << ", " << *a3 << endl;
  a3=&a2;
  cout << "a3= " << a3 << ", " << *a3 << endl;
  cout << "a4= " << a4 << ", " << *a4 << endl;
  *a4=40;
  cout << "a4= " << a4 << ", " << *a4 << endl;
  cout << "a5= " << a5 << ", " << *a5 << endl;


  return 0;
}
