#include <iostream>
using namespace std;
int main()
{
    char a;
    int num1,num2;

    cout<<"Choice of sign between two numbers:\n+\n-\n*\n/\n:";
    cin>>a;
    cout<<"Enter two numbers :";
    cin>>num1>>num2;

    switch(a)
    {
    case '+':
        cout<<"num1+num2 ="<<num1+num2;
        break;
    case '-':
        cout<<"num1-num2 ="<<num1-num2;
        break;
    case '*':
        cout<<"num1*num2 ="<<num1*num2;
        break;
    case '/':
        cout<<"num1/num2 ="<<num1/num2;
        break;
    default:
        cout<<"error";
        break;
    }
    return 0;
}
