#include <iostream>
using namespace std;
// 2.寫一個“標準”巨集MIN ，這個巨集輸入兩個參數並返回較小的一個。
#define MIN(A,B) ((A) < (B) ? (A) : (B))

int main() {
  cout << MIN(10,100) << endl;
  return 0;
}
