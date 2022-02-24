#include <stdio.h>
int main()
{
    int a;
    printf("Enter a Number: ");
    scanf("%d",&a);
    if (a<0)
        a=-(a);
        printf("The absolute is %d",a);
    else
        printf("The absolute is %d",a);
    return 0;
}
