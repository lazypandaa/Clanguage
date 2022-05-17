#include <stdio.h>

int main()
{
    int A[10][10],B[10][10],C[10][10],i,j,k,n,m,p,q;
    printf("Enter dimensions of 1st matrix: ");
    scanf("%d%d",&m,&n);
    printf("Enter dimensions of 2nd matrix: ");
    scanf("%d%d",&p,&q);
    if(n==p)
    {
        
        printf("Enter elements of 1st matrix: ");
        for(i=0;i<m;i++)
        for(j=0;j<n;j++)
        {
            scanf("%d",&A[i][j]);
        }
    
        printf("Enter elements of 2nd matrix: ");
        for(i=0;i<p;i++)
        for(j=0;j<q;j++)
        {
            scanf("%d",&B[i][j]);
        }

        for(i=0;i<m;i++)
        for(j=0;j<q;j++)
        {
            C[i][j]=0;
            for(k=0;k<n;k++)
                C[i][j]+= A[i][k]*B[k][j];
        }
    
        {
            printf("The Resultant matrix is\n");
            for(i=0;i<m;i++)
            {
            for(j=0;j<q;j++)
            {
                printf("%d\t",C[i][j]);
            }
            printf("\n");
            }
        }
        
    }
    else
    printf("matrix multiplication is not possible\n");
    return 0;
}
