#include <stdio.h>

int main()
{
    int A[]={1,2,5,3,4},B[]={1,2,5,3,4},i ,j,n=5;
    for (i=0;n>i;i++) {
        if(A[0]>A[1])
            A[0]=A[1];
    }
    printf("Smallest element is: %d\n",A[0]);
    
    for (i=0;n>i;i++) {
        if(B[0]<B[i])
            B[0]=B[i];
    }
    printf("Biggest element is: %d",B[0]);
    return 0;
}