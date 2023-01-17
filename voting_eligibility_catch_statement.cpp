#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int age;
    cout<<"Enter age for voting(18 to 120) :";
    cin>>age;
    try
    {
        if(age>0 && age<18)
            throw 0;
        else if(age>120)
            throw 'v';
        else if (age<0)
            throw 2.8;
        cout<<"Eligible for voting";
    }
    catch(int i)
    {
        cout<<"Exception : Valid age but not eligible for voting";
    }
    catch(...) //To catch all unhandled exceptions
    {
        cout<<"Exception : Invalid age for voting";
    }
}
