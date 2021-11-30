#include <iostream>
#include "9.1.h"
using namespace std;
int main() {
fun1();
shape *s[2];
s[0]=new triangle;
s[1]=new rect;
for (auto i:s){
  cout<<typeid(*i).name()<<endl;
(*i).get_data();
(*i).display();
}



  std::cout << "Hello World!\n";
} 