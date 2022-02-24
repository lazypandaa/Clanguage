#include<stdio.h>
void main()
{
    int a,n,s=0,r;
    scanf("%d",&n);
    a=n;
    while(n>0)
        r=n%10;
        s=s+(r*r*r);
        n=(n/10);
    if (a==s)
        printf("%d is Amstrong Number",a);
    else
        printf("%d is Not Amstrong Number",a);
}
