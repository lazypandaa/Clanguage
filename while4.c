// write a program to find sum of n natural number
#include<stdio.h>
void main()
{
    int  n, i=1,sum=0;
    printf("Enter n: ");
    scanf("%d",&n);
    while (n>=i)
    {
        sum=sum+i;
        i++;
    }
    printf("%d",sum);

}
