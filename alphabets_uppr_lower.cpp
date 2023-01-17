#include <iostream>
using namespace std;
int main()
{
    char a;
    int i;
    for(i=1;i<=3;i++)
    {
    cout<<"\nEnter your Value =";
    cin>>a;
    if(a>63 && a<91)
        cout<<"Your entered Value is of upper case";
    else if(a>96 && a<123)
        cout<<"Your entered Value is of lower case";
    else
        cout<<"Your entered Value is a number";
}}
