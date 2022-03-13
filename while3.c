// Write a c progrm to print odd numbers upto n
#include<stdio.h>
void main()
{
    int n,i=1;
    printf("Enter n: ");
    scanf("%d",&n);
    while(n>i)
    {
        printf("%d\n",i);
        i = i+2;
    }
}