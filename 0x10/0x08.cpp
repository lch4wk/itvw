// #include <thread>
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "mingw-std-threads/mingw.thread.h"

using namespace std;

// 8. 關鍵字volatile有什麼含意？並給出三個不同的例子。
int shareData=0;

void randz(){
  for(int i=0; i<20; i++){
    srand( time(NULL) );
    shareData = rand();
  }
}

void foo()
{
  cout << "Fooooo" << endl;
}


int main(int argc, char const *argv[]) {
  cout << shareData << std::endl;
  std::thread first (foo);
  first.join();
  std::cout << "th1" << std::endl;

  return 0;
}
