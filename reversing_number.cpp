#include <iostream>
using namespace std;
int main()
{
    int val=123;

    int rem1,rem2,rev;

    rem1=val%10;
    val=val/10;

    rem2=val%10;
    val=val/10;

    rev=rem1*100+rem2*10+val;
    cout<<rev;
}
