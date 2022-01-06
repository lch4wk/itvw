#include <iostream>
using namespace std;
/*
Q1: 給一個int a[20]已排序的陣列，請寫一個function(a, size)
能印出0~500的數字，且不包含a陣列內的元素，
請用最少的時間和空間複雜度完成。
*/

void func(int* a) {
  for(int i=0; i<=10; i++){
    if(*a == i){
      a++;
      continue;
    }
    cout << i <<  ", " ;
  }
  cout << endl;
}

int main(int argc, char const *argv[]) {
  int arr[3] ={2,4,7};
  int (*ptr)[3] = &arr;
  cout << sizeof(ptr) << endl;
  cout << sizeof(*ptr) << endl;
  cout << **ptr << endl;
  ptr++;
  cout << *(*ptr+1) << endl;
  ptr++;
  cout << *(*ptr+2) << endl;
  func(*ptr);

  return 0;
}
