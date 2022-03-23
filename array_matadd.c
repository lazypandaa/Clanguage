#include <stdio.h>

int main()
{
    printf("Addtion\n");
    int A[2][2]={1,2,3,4},B[2][2]={1,1,1,1},C[2][2],n=2,i,j;
    for(i=0;n>i;i++)
    {   for(j=0;n>j;j++)
            {
                C[i][j]=A[i][j]+B[i][j];
                printf("%d\t",C[i][j]);
            }
        printf("\n");
    }
    printf("Subtraction\n");
        for(i=0;n>i;i++)
    {   for(j=0;n>j;j++)
            {
                C[i][j]=A[i][j]-B[i][j];
                printf("%d\t",C[i][j]);
            }
        printf("\n");
    }
    return 0;
}
