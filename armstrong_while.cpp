#include <iostream>
using namespace std;
int main()
{
    int num,rem,result=0,samenum;
    cout<<"Enter a number =";
    cin>>num;

    samenum=num;
    while(num>0)
    {
        rem=num%10;
        result+=rem*rem*rem;
        num=num/10;
    }
    if(samenum==result)
        cout<<"Armstrong number";
    else
        cout<<"Not armstrong number";
}
