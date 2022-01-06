#ifndef BAR_H
#define BAR_H

/*
我們增加了一個變數 a，在 bar.h 檔中有 extern int a，
我們很清楚的告訴了會 include bar.h 的人，
這個模組裡面有一個 int a 變數可以用，
但是這個變數的宣告並不在此，
而是有某個 include 了 bar.h 的人會去做宣告，
這個工作在這裡我們讓 bar.cpp 做。
*/
extern int a;
void printA();

class A{
public:
  A();
  int getNum();
  static void setNum(int x);
  static int num_of_instances;
};

#endif
