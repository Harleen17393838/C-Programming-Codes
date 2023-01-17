#include <iostream>
using namespace std;
int main()
{
    int principal;
    float rate;
    int time;
    float interest=(principal*rate*time)/100;

    cout<<"Enter your principal =";
    cin>>principal;
    cout<<"Enter your rate =";
    cin>>rate;
    cout<<"Enter your time =";
    cin>>time;

    cout<<"principal ="<<principal;
    cout<<"\nrate ="<<rate;
    cout<<"\ntime ="<<time;
    cout<<"\ninterest ="<<(principal*rate*time)/100<<"%";
}
