#include <iostream>
using namespace std;
int main()
{
int CGP;
cout<<"Enter your CGP value=";
cin>>CGP;

switch (CGP)
{
    case 9:
    cout<<"Excellent";
    break;

    case 8:
    cout<<"Very Good";
    break;

    case 7:
    cout <<"Good";
    break;

    case 6:
    cout<<"Average";
    break;

    default:
    cout<<" Work Hard";
    break;
}
}
