#include<stdio.h>
#include<math.h>
void main()
{
    int n,nd,powerr=0,r,s=0,a;//nd,a are temp variables 
    nd=n;
    printf("Enter n: ");
    scanf("%d",&n);
    while (nd>0)
    {
        nd=nd/10;
        powerr++;//no of digits
    }   
//armstrong logic
    a=n;
    while(n>0) 
    { 
        r=n%10;
        s=s+pow(r,powerr);
        n=n/10;
    }
    if (a==s)
    printf("Armstrong number");
    else
    printf("Not an Armstrong number");
}
