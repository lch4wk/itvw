#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
  int a;  // (An integer)
  int *ptr_a;  // (A pointer to an integer)
  int **ptr_ptr_a; // (A pointer to a pointer to an integer)
  int arr[10];  // (An array of 10 integers)
  int *arr_of_ptr[10];  // (An array of 10 pointers to integers)
  int (*ptr_to_arr)[10];  // (A pointer to an array of 10 integers)
  int (*fun)(int);  // (A pointer to a function that takes an integer as an argument and returns an integer)
  int (*ptr_fun[10])(int);  // (An array of ten pointers to functions that take an integer argument and return an integer)

  char* ptr = "Hello";
  cout << "string is \"HELLO\"" <<endl;
  cout << "*ptr++ grouped as  *(ptr++)"<< endl;
  cout << "*++ptr grouped as *(++ptr)\n" << endl;
  cout << "++*ptr grouped as ++(*ptr)\n" << ++(*ptr) << endl;
  cout << "*ptr => 'H', 'H'+1 => 'I'" << endl;



  return 0;
}
