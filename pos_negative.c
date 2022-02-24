Write a c program to check weather the given number positive or not
#include <stdio.h>
int main()
{
    int a;
    printf("Enter a Number: ");
    scanf("%d",&a);
    if (a>0)
        printf("%d is positive",a);
    else if (a==0)
        printf("0 is Neither positive nor negative");
    else
        printf("%d is Negative",a);
       
    return 0;
}
