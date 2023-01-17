#include <iostream>
using namespace std;
int main()
{
    int ar[]={10,20,30,40,50};

    for(int i=0;i<=4;i++)
        cout<<"Address ="<<(&ar[i])<<"  Value ="<<ar[i]<<endl;
}
