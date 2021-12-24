//27. Write a c program to illustrate the inputting interger data a long with differnet widths 
#include <stdio.h>

int main()
{
    int a,b,c,d,e,f;
    printf("Enter values: ");
    scanf("%d%3d%4d%2d",&a,&b,&c,&d);
    printf("\n%d\t%d\t%d\t%d\t",a,b,c,d);
    scanf("%2d",&e);
    printf("\nf=%d",f);
    return 0;
}
