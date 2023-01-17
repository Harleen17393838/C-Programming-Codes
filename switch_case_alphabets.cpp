#include <iostream>
using namespace std;
int main()
{
char alphabet;
cout<<"Enter an alphabet =";
cin>>alphabet;

switch(alphabet)
{
case 'a':
case 'e':
case 'i':
case 'o':
case 'u':
case 'A':
case 'E':
case 'I':
case 'O':
case 'U':
    cout<<"The number is a vowel";
    break;

default:
    cout<<"The number is a consonant";

}
}
