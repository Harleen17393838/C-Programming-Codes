#include <iostream>
using namespace std;
int main()
{
    int CGP;
    cout<<"Enter CGP value =";
    cin>>CGP;

    if(CGP==10)
    cout<<"Excellent";
    if(CGP==9)
    cout<<"Very Good";
    if(CGP==8)
    cout<<"Good";
    if(CGP==7)
    cout<<"Average";
    else if (CGP<=7)
    cout<<"Work Hard";
}
