#include <iostream>
using namespace std;
/*
Q2: 給一個int a[20]已排序的陣列，
請寫一個function(a, size, b)能依照參數b(b = 0~4)
分別印出該區間的數字，且不包含a陣列內的元素，例如：
　b = 0, 印出0~99
　b = 1, 印出100~199
*/

void foo(int* a, int size, int b){
  int i = b*100;
  // switch (b) {
  //   case 0:break;
  //   case 1: {i = 100;break;}
  //   case 2: {i = 200;break;}
  //   case 3: {i = 300;break;}
  //   case 4: {i = 400;break;}
  //   default:
  //     cout << "b out of bounder." << endl;
  //     break;
  // }
  int count = (b+1)*100;
  for (i; i < count; i++) {
    if(i%10==0)
      cout << endl;
    if(i == *a){
      a++;
      continue;
    }
    cout << i << ", ";
  }
}

int main(int argc, char const *argv[]) {
  int a[3]={2,4,7};
  int b=0;
  int (*ptr)[3] = &a;
  foo(*ptr, 10, b);
  return 0;
}
