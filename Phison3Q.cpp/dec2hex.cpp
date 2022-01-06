#include <iostream>
using namespace std;


int main(int argc, char const *argv[]) {

  char buf[80] = {};
  int value = 2545;
  int i=0;
  while(value > 0){
    int temp = 0;
    temp = value % 16;

    if(temp > 10)
      buf[i] = temp+55;   // 'A' = 10 = 65(ASCII), so +55 not +65
    else
      buf[i] = temp+48;   // '0' = 48(ASCII)
    i++;
    value /= 16;
  }

  for(int j = i-1; j>=0; j--){
    cout << buf[j] << ", ";
  }

  for(auto const & w :buf){
    cout << w << ", ";
  }
  cout << endl;
}
