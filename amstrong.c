#include <stdio.h>

int main()
{
    int n,r,s=0,a;
    printf("Enter number: ");
    scanf("%d",&n);
    a=n;
    while(n>0) 
    { 
        r=n%10;
        s=s+(r*r*r);
        n=n/10;
    }
    if (a==s)
    printf("Amstrong number");
    else
    printf("Not an Amstrong number");
    return 0;
}
