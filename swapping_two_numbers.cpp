#include <iostream>
using namespace std;
int main()
{
    int a=10;
    int b=20;

    cout<<"Value of a Before swap ="<<a;
    cout<<"\nValue of b Before swap ="<<b;

    a=a+b;
    b=a-b;
    a=a-b;

    cout<<"\nValue of a After swap ="<<a;
    cout<<"\nValue of b After swap ="<<b;
    }
