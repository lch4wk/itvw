// #include <thread>
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "mingw-std-threads/mingw.thread.h"

using namespace std;

void foo()
{
  cout << "Fooooo" << endl;
}

void bar(int x) {
  cout << "Barrrr" << x << endl ;
}


int main(int argc, char const *argv[]) {
  std::thread t1(foo);
  std::thread t2(bar, 100);
  std::cout << "main, foo and bar now execute concurrently...\n"; // synchronize threads
  std::cout << "sleep 1s\n";
  std::this_thread::sleep_for(std::chrono::seconds(1));
  std::cout << "join t1\n";
  t1.join(); // 等待 t1 執行緒結束
  std::cout << "join t2\n";
  t2.join(); // 等待 t2 執行緒結束

    std::cout << "foo and bar completed.\n";
  return 0;
}
