// Write a  c program to print even number upto n
#include<stdio.h>
void main()
{
    int i=0,n;
    printf("Enter n: ");
    scanf("%d", &n);
    while(n>=i)
    {
        printf("%d\n",i);
        i= i+2;
    }
}