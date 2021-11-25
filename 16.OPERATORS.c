//Write a c program to illustrate ARTHEMATIC and RELATIONAL OPERATORS
#include <stdio.h>

int main()
{
    int c,d,e,f;
    c=10==25!=35<20>30<=40>=0;
    d=10+20/30*7-8%10;
    e=10*5-6*4/7%2+9;
    f=5*(4+(6-7/3)%5);
    printf("RELATIONAL OPERATORS\n");
    printf("c=%d\n",c);
    printf("ARTHEMATIC OPERATORS\n");
    printf("d=%d\ne=%d\ne=%d\n",d,e,f);
    return 0;
}
