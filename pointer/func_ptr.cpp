#include <iostream>

using namespace std;

int ADD(int a, int b) { return a+b; }
int SUB(int a, int b) { return a-b; }
int MUL(int a, int b) { return a*b; }
int DIV(int a, int b) { return a/b; }
float FADD(float a, float b) { return a+b; }

template <class T>
T op_func(T a, T b, T (*func_pointer)(T,T)){
  return func_pointer(a,b);
}

int main(int argc, char const *argv[]) {
  int (*ADDfunc)(int, int) = ADD;
  int (*SUBfunc)(int, int) = SUB;
  int (*MULfunc)(int, int) = MUL;
  int (*DIVfunc)(int, int) = DIV;
  float (*fADDfunc)(float, float) = FADD;

  const int a=10, b=5;
  const float fa=10.5, fb=5.0;
  cout << "addfun: " << op_func(a,b, ADDfunc) << endl;
  cout << "subfun: " << op_func(a,b, SUBfunc) << endl;
  cout << "mulfun: " << op_func(a,b, MULfunc) << endl;
  cout << "divfun: " << op_func(a,b, DIVfunc) << endl;
  cout << "addfun(float): " << op_func(fa,fb, fADDfunc) << endl;
  return 0;
}
