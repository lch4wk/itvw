#include <iostream>
using namespace std;
/*
5.用變數a給出下面的定義：
a) (An integer)
b) (A pointer to an integer)
c) (A pointer to a pointer to an integer)
d) (An array of 10 integers)
e) (An array of 10 pointers to integers)
f) (A pointer to an array of 10 integers)
g) (A pointer to a function that takes an integer as an argument and returns an integer)
h) (An array of ten pointers to functions that take an integer argument and return an integer)
*/

int ADD(int a, int b){
  return a+b;
}
int addfun(int a, int b, int(*func_ptr)(int, int)){
  return func_ptr(a,b);
}

int main(int argc, char const *argv[]) {
  int a;
  int *ptr_a;
  int **ptr_ptr_a;
  int arr[10];
  int *arr_of_ptr[10];
  int (*ptr_to_arr)[10];
  int (*fun)(int);
  int (*ptr_fun[10])(int);

  int (*test_func_ptr)(int, int) = ADD;
  cout << addfun(10,20, test_func_ptr) << endl;
  // cout << addfun(10,20, ADD) << endl;

  return 0;
}
