#include <iostream>
using namespace std;
class dost1

{

public:
    void output()
{
    cout<<"hello i am class dost 1"<<endl;
}
};
class dost2:dost1
{
public:
    void output()
    {
        dost1::output();
        cout<<"hello i am class dost 2"<<endl;
    }
};
int main()
{
    dost2 d2;
    d2.output();
}
