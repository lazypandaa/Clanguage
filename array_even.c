#include <stdio.h>

int main()
{
    printf("Even no in 1d array: ");
    int B[]={1,2,5,3,4},i ,j,n=5;
    for(i=0;n>i;i++)
        {
            if(B[i]%2==0)
            printf("%d\t",B[i]);
        }

    printf("\nEven no in 2d array: ");
    int A[2][3]={1,2,5,3,4,6};
    for(i=0;2>i;i++)
    for(j=0;3>j;j++)
        {
            if(A[i][j]%2==0)
            printf("%d\t",A[i][j]);
        }
    return 0;
}