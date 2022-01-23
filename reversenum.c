#include <stdio.h>

int main()
{
    int n,reverse=0,r;
    printf("Enter number: ");
    scanf("%d",&n);
    while(n>0) 
    { 
        r=n%10;
        reverse=reverse*10+r;
        n=n/10;
    }
    printf("reverse number: %d",reverse);
    return 0;
}
