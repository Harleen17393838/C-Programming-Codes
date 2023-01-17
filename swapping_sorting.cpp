#include <iostream>
using namespace std;
int main()
{
    int a[10],i,n,j;
    cout<<"No. of elements =";
    cin>>n;

    if(n<=10)
    {
        for(i=0;i<n;i++)
        {
            cout<<"Array element ["<<i<<"] =";
            cin>>a[i];
        }
        for(i=0;i<=n-1;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(a[i]>a[j])
                {
                    swap(a[i],a[j]);
                }
            }
        }
        cout<<"After sorting ="<<endl;
        for(i=0;i<n;i++)
        {
            cout<<a[i]<<endl;
        }
    }
}
