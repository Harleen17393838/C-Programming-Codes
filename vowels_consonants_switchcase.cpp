#include <iostream>
using namespace std;
int main()
{
    char alphabet;
    cout<<"Enter an alphabet =";
    cin>>alphabet;

    switch(alphabet=='a'||alphabet=='e'||alphabet=='i'||alphabet=='o'||alphabet=='u')
    {
    case 1:
    cout<<"The number is vowel";
    break;

    default:
    cout<<"The number is consonant";
    }
}
