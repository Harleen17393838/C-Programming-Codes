#include <iostream>
using namespace std;
int sum(int,int); //prototype
int main()
{
    int a,b; int result;
    cout<<"Enter two variables =";
    cin>>a>>b;
    result=sum(a,b); //calling
    cout<<result;
}
int sum(int x,int y)
{
    return x+y; //definition
}
