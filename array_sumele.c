#include <stdio.h>

int main()
{

    int A[2][2]={1,2,3,4},Sum=0,n=2,i,j;
    int l = sizeof(A)/sizeof(A[0]);
    for(i=0;n>i;i++)   
        for(j=0;n>j;j++)
            Sum=Sum+A[i][j];        
    printf("Sum: %d\n",Sum);
    printf("Average: %d\t",Sum/l);
    return 0;
}