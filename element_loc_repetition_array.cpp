#include <iostream>
using namespace std;
int main()
{
    int a[10],i,n,val,j=0,chk=0,flag=0;
    cout<<"Enter array limit =";
    cin>>n;

    if(n<=10)
    {
        for(i=0;i<n;i++)
        {
            cout<<"Enter array element ["<<i<<"} =";
            cin>>a[i];
        }
        cout<<endl;
        cout<<"Enter searching value =";
        cin>>val;

        for(i=0;i<n;i++)
        {
            if(a[i]==val)
            {
                a[j]=i;
                j++;
                chk++;
                flag++;
            }
        }
        cout<<endl;
        if(chk>=0)
        {
            cout<<"No found at location ";
            n=chk;
        for(i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl<<"\n No of times element found :"<<flag;
        }
        else
        {
            cout<<"Not found";
        }
    }
    else
        cout<<"Overlimit";

}
