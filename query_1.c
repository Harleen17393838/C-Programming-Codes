#include <stdio.h>
int main()
{
int a=10,b=30,*p,s=0;

p=&a;
a++;
(*p)++;
s=a+b+*p;

printf("%d\n",s);
return 0;
}
