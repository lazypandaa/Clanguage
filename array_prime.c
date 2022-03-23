#include <stdio.h>

int main()
{
    int B[]={1,2,5,3,4,6},i,count=0,n=5,x=1;
    for(i=0;n>i;i++)
    {
        {
            for(;B[i]>=x;x++)
            // while(B[i]>=x)
            // if(B[i]%x==0)
                count++;
            // x++;
        }
        if (count==2)
        printf("%d",B[i]);
    }
    return 0;
}