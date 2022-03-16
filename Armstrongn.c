#include<stdio.h>
#include<math.h>
void main()
{
    int n,nd,powerr=0,r,x,s=0,a;
    
    printf("Enter n: ");
    scanf("%d",&n);
    nd=n;
    while (nd>0)
    {
        nd=nd/10;
        powerr++;//no of digits
    } 
//amstrong logic
    a=n;
    while(n>0) 
    { 
        r=n%10;
        s=s+pow(r,powerr);
        n=n/10;
    }
    if (a==s)
    printf("Amstrong number");
    else
    printf("Not an Amstrong number");
}
