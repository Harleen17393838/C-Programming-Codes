#include <iostream>
using namespace std;
int main()
{
    int no;
    cout<<"Enter a number =";
    cin>>no;

    if(no%90)
        cout<<"The number is divisible by 90";
    else
        cout<<"The number is not divisible by 90";
}
