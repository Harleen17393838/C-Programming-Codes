#include <iostream>
using namespace std;
int rev(int);
int main()
{
    int num,n;
    cout<<"Enter a number =";
    cin>>num;
    cout<<"Reversed number ="<<rev(num);
}
rev(int num)
{
    int r=0,rem;
    while(num>0)
    {
        rem=num%10;
        num=num/10;
        r=r*10+rem;
    }
    return r;
}
