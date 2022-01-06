#include <iostream>
using namespace std;
// 6.關鍵字static的作用是什麼？

// (1)
void count() {
    static int counter = 0;
    counter++;
    cout << "(1) counter = " << counter << endl;
}

// (2)
class Object {
public:
    Object() {
        ++counter;
        cout << "(2) counter = " << counter << endl;
    }
    static int getCounter() { return counter; }
private:
    static int counter;
};

int Object::counter = 0; // initializing the static in


int main(int argc, char const *argv[]) {
  // cout << "6.關鍵字static的作用是什麼？" << endl;
  /*
  // cout << "這個簡單的問題很少有人能回答完全。在C語言中，關鍵字static有三個明顯的作用︰\
  //           a.在函數本體內(in Function Block)，一個被宣告為靜態的變數，在這一函數被呼叫過\
  //             程中維持其值不變。\
  //           b.在一個Block(ie. {...} )內 (但在函數體外)，一個被宣告為靜態的變數可以被Block\
  //             內所有的函數存取， 但不能被Block外的其它函數存取。它是一個本地的全局變量。\
  //           c.在Block內，一個被聲明為靜態的函數，只可被這一Block內的其它函數呼叫。也就是\
  //             這個函數被限制在宣告它的Block的本地範圍內使用。大多數應試者能正確回答第一部分\
  //             ，一部分能正確回答第二部分，同是很少的人能懂得第三部分。這是一個應試者的嚴重\
  //             的缺點，因為他顯然不懂得本地化資料和程式碼範圍的好處和重要性。" << endl;
  */
/*
static 4種用法
(1) C/C++ 中 static 放在區域變數之前
(2) C/C++ 中 static 放在全域變數之前
(3) C++ 中 static 放在 class 的 member variable 之前
(4) C++ 中 static 放在 class 的 member function 之前
*/
  /* (1) static 放在區域變數之前(該變數宣告在某個函式中)表示該變數離開該作用域(scope)
         後記憶體還保留著直到程式結束為止，在程式開始時就配置好記憶體，執行到這一行才進行實體化， */
  count();
  count();
  count();

  /* (2) static 放在全域變數之前(該變數不是宣告在某個函式中)
         是表示在 c/cpp 檔裡該變數無法被其他 c/cpp 檔用 extern 來使用。 */

  /* (3) static 放在 class 的 member variable 之前，稱為靜態成員變數 (static member variable)，
         靜態成員變數是不屬於任何一個實體 (instance)，即所有class產生的實體皆可共享這個變數， */
 Object obj1;
 Object obj2;
 Object obj3;

 /* (4) static 放在 class 的 member function 之前，稱為靜態成員函式 (static member function)，
 靜態成員函式是不屬於任何一個實體 (instance)，即不需要任何實體就可以呼叫該類別的成員函式，*/
 // 若getCounter沒有宣告成static則會編譯失敗
 cout << "(4) " << Object::getCounter() << endl; //有static的成員函數可以不用實體就呼叫
 Object obj4;
 cout << "(4) " << Object::getCounter() << endl;
 cout << "(4) " << obj4.getCounter() << endl;


  return 0;
}
