#include <iostream>
using namespace std;

struct ListStruct{
    unsigned int DataH;
    unsigned int DataL;
    ListStruct* NextPtr;
};
struct ListStruct la[3];
// #define NULL 0xFFFF
unsigned int ListHead = 0;

void foo(unsigned int a, unsigned int b){
  // for()
}

int main(int argc, char const *argv[]) {
  la[0].DataH = 111;  la[0].DataL = 222;
  la[1].DataH = 333;  la[1].DataH = 444;
  la[2].DataH = 555;  la[2].DataH = 666;
  for(unsigned int i=0; i<2; i++){
    la[i].NextPtr = la[i+1];
    // cout << la[i].NextPtr << endl;
  }
  la[2].NextPtr = NULL;
  return 0;
}
