//21. Wtite a c program to find Addition and Subtraction using all sections of structure of c program

#include <stdio.h>
#define a 10
#define b 20
#define pf printf

int result;
int add(int x, int y)
{
    return x+y;
}
int sub(int x, int y)
{
    return x-y;
}
void main()
{
    result = add(a,b);
    pf("Addition: %d\n",result);
    result = sub(a,b);
    printf("Subtraction: %d\n",result);
}
