#include <iostream>
using namespace std;
int main()
{
    int num1;
    cout<<"Enter a number =";
    cin>>num1;
    int a;
    cout<<"Enter multiplier =";
    cin>>a;

    tables:
        if(a<=10)
        {
            cout<<num1<<"*"<<a<<"=";
            cout<<num1*a<<endl;
            a++;
            goto tables;
        }
}
