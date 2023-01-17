#include <iostream>
using namespace std;
int main()
{
    char alphabet;
    cout<<"Enter an alphabet =";
    cin>>alphabet;

    if(alphabet=='a'||alphabet=='e'||alphabet=='i'||alphabet=='o'||alphabet=='u')
        cout<<"Vowels";
    else
        cout<<"Consonants";
}
