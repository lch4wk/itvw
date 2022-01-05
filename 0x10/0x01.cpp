#include <iostream>


// 1.用預處理指令#define 聲明一個常數，用以表示1年中有多少秒 (忽略閏年問題)
#define SECS_PER_YEAR (60*60*24*365)

int main(){
  std::cout << "SECS_PER_YEAR: " << SECS_PER_YEAR << std::endl;
  return 0;
}
