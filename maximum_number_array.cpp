#include <iostream>
using namespace std;
int main()
{
    int ar[]={10,20,30,40,50};
    int i;
    int max=ar[0];

    for(int i=0;i<=4;i++)
    {
        if(ar[i]>max)
            max=ar[i];
    }
    cout<<(max);
}

