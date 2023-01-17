#include <iostream>
using namespace std;
int main()
{
    int num,n;
    long long fact=1;
    cout<<"Enter Number:";
    cin>>num;
    n=num;

    Top:
        if(num>0)
        {
            fact=fact*num;
            num--;
            goto Top;
        }
        cout<<"Factorial of "<<n<<" is ="<<fact;
        return 0;
}
