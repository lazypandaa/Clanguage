//Write a c program to check whether the given number is prime or not
#include<stdio.h>
void main()
{
    int n,count=0,i=1;
    printf("Enter n: ");
    scanf("%d",&n);
    while (n>=i)
    {
        if(n%i==0)
            count++;
        i++;
    }
    if(count==2)        
        printf("Prime");
    else
        printf("Not Prime");

}