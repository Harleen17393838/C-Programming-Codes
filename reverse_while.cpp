#include <iostream>
using namespace std;
int main()
{
    int val,rem,rev=0;
    cout<<"Enter your value =";
    cin>>val;

    while(val>0)
    {
        rem=val%10;
        val=val/10;
        rev=rev*10+rem;
    }
     cout<<rev;
}
