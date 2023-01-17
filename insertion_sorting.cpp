#include <iostream>
using namespace std;
int main()
{
    int a[10],i,n,k,t,loc;
    cout<<"No. of elements =";
    cin>>n;

    if(n<=10)
    {
        for(i=0;i<n;i++)
        {
            cout<<"Array element ["<<i<<"] =";
            cin>>a[i];
        }
        {
            cout<<"Element to insert =";
            cin>>t;
            k=t;
            loc=1;
            a[loc-1]=k;
            for(i=0;i<n;i++)
                cout<<a[i]<<endl;
        }
    }

}

