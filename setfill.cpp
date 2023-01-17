#include <iostream>
#include <ios>
#include <iomanip>
using namespace std;
int main()
{
    //Initializing the integer
    int num=50;

    cout<<"Before setting the fill char:\n"<<setw(10);
    cout<<num<<endl;

    //using setfill()
    cout<<"Setting the fill char setfill to * :\n"<<setfill('*')<<setw(10);
    cout<<num<<endl;
    return 0;
}
