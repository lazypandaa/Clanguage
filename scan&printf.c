#include<stdio.h>
#include<conio.h>

void main()
{
    int a,b,c,d;
    scanf("%3d%3d%3d",&a,&b,&c);// reads only 3 values
    scanf("%d",&d);
    printf("a=%05d\tb=%05d\tc=%05d\td=%05d",a,b,c,d);// %5d shows 5 values of the variable 
}
