// write a c program to check whether the given number is amstrong or not
#include<stdio.h>
void main()
{
    int n , sum=0,temp, rem;
    printf("Enter n: ");
    scanf("%d",&n);
    temp=n;
    do
    {
        rem=n%10;
        sum= sum+(rem*rem*rem);
        n=n/10;
    } while (n>0);
    if(temp==sum)
        printf("Amstrong");
    else
        printf("Not Amstrong");
}