#include <iostream>
using namespace std;
int main()
{
    int num1,num2,a;
    cout<<"Enter ist number ="; //input for ist number
    cin>>num1;
    cout<<"Enter second number ="; //input for second number
    cin>>num2;
    cout<<"Choice =\n1 = ADD\n2 = SUBSTRACT\n3 = MULTIPLY\n4 = DIVISION\n"; //for selecting choice

    do
    {
        switch(a)
            {
            case 1:
                cout<<num1+num2;
                break;
            case 2:
                cout<<num1-num2;
                break;
            case 3:
                cout<<num1*num2;
                break;
            case 4:
                cout<<num1/num2;
                break;
            }
            cout<<"\nEnter Your Choice ="; //for input of choice
            cin>>a;
    }
    while (a<=4);
}
