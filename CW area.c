#include<stdio.h>
#define pi 3.14
float area(float r);
void main()
{
    float result;
    result=area(15.5);
    printf("area=%f",result);
}
float area(float r)
{
return pi*r*r;
}
