#include <iostream>
using namespace std;
int main()
{
    int ar[10],i,n,serval,loc,flag=0;
    cout<<"Enter array limit :";
    cin>>n;

    for(i=0;i<n;i++)
    {
        cout<<"Enter array element ["<<i<<"] =";
        cin>>ar[i];
    }
    cout<<"Enter searching value =";
    cin>>serval; //Linear search....

    for(i=0;i<n;i++)
    {
        if(ar[i]==serval)
   {
    loc=i;
    flag=1;
    break;
}}
if(flag==1)
    cout<<"Location Found ="<<loc;
else
    cout<<"Not Found";
}
