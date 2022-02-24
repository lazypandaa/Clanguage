#include <stdio.h>
int main()
{
    int n,a;
    printf("Enter a Number: ");
    scanf("%d",&n);
    a=n%2;
    if (a==0)
        printf("%d is even",n);
    else
        printf("%d is odd",n);
    return 0;
}
