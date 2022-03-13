//write a c program to print n natural number
#include <stdio.h>

int main()
{
    int n,i=1;
    printf("Enter n: ");
    scanf("%d",&n);
    while (n>=i)
    {
        printf("%d\n",i);
        i++;
    }
    return 0;
}
