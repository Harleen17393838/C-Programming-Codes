#include <iostream>
using namespace std;
int main()
{
    int number1;
    int number2;
    int number3;
    cout<<"Enter ist number =";
    cin>>number1;
    cout<<"Enter second number =";
    cin>>number2;
    cout<<"Enter third number =";
    cin>>number3;

    if(number1>number2&&number1>number3)
    {
        cout<<"Number 1 is greatest number";
    }
    else if(number2>number3&&number2>number1)
    {
        cout<<"Number 2 is greatest number";
    }
    else if (number3>number1&&number3>number2)
    {
        cout<<"Number 3 is greatest number";
    }
}


