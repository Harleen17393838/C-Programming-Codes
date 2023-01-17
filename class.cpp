#include<iostream>
using namespace std;
class MyClass {
   unsigned int a:6=20;
};
int main() {
   cout << sizeof(MyClass);
}
