#include <iostream>
using namespace std;
int main()
{
    int no;
    cout<<"Enter a number =";
    cin>>no;

    switch(no%2)
    {
    case 0:
    cout<<"The number is even";
    break;

    default:
    cout<<"The number is odd";
    }
}
