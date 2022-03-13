// Write a c program to count the number of digits
#include<stdio.h>
void main()
{
    int n, count=0;
    printf("Enter n: ");
    scanf("%d",&n);
    do
    {
        n=n/10;
        count++;
    } while (n>0);
    printf("%d",count);
    
}