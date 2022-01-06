#include <iostream>
#include "mingw-std-threads/mingw.thread.h"

using namespace std;

//thread建立類別函數
class Counter{
public:
  void printCounter() {
    for(int i=0; i<100000; i++)
      cout << _cnt <<endl;
  }
  void addCnt(){
    for(int i=0; i<10000; i++){
      _cnt+=i;
    }
  }
  void start(){
    std::thread t2(&printCounter, this);
    std::thread t1(&Counter::addCnt, this);
    t2.join();

    t1.join();
  }
private:
  int _cnt;

};


int main(int argc, char const *argv[]) {
  Counter cnt;
  cnt.start();
  return 0;
}
