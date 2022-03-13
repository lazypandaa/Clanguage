// write a c program to check whether the given number is prime of not using do while
#include<stdio.h>
void main()
{
    int n,i=1,count=0;
    printf("Enter n: ");
    scanf("%d",&n);
    do
    {
        if(n%i==0)
            count++;
        i++;
    } while (n>=i);
    count==2?printf("Prime"):printf("Not prime");
}