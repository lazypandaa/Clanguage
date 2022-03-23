#include <stdio.h>

int main()
{
    int A[2][3]={1,2,5,-3,4,10},B[2][3]={1,2,5,-3,4,10},i ,j,n=5;
    for (i=0;2>i;i++) 
        for(j=0;3>j;j++)
        {
        if(A[0][0]>A[i][j])
            A[0][0]=A[i][j];
    }
    printf("Smallest element is: %d\n",A[0][0]);
    
    for (i=0;2>i;i++) 
        for(j=0;3>j;j++)
        {
        if(B[0][0]<B[i][j])
            B[0][0]=B[i][j];
        }
    printf("Biggest element is: %d",B[0][0]);
    return 0;
}