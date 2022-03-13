// Write a c progrm to check whether the given number is plindrone or not
#include<stdio.h>
void main()
{
    int n, rem, rev=0, temp;
    printf("Enter n: ");
    scanf("%d",&n);
    temp=n;
    while (n>0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    if(temp==rev)
        printf("Palindrome");
    else
        printf("Not Palindrome");
}