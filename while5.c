// write a c program to find the sum of squares of natural numbers
#include<stdio.h>
void main()
{
    int n, i=1,ss=0;
    printf("Enter n: ");
    scanf("%d",&n);
    while(n>=i)
    {    
        ss =ss+(i*i);
        i++;
    }
    printf("%d",ss);
}