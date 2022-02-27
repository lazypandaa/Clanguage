#include<stdio.h>

void main()
{

    float percentage;
    int s1,s2,s3,s4,s5,s6,total;
    printf("enter 6-subjects marks: \n");
    scanf("%d%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5,&s6);
    total= s1+s2+s3+s4+s5+s6; 
    printf("total=%d\n",total);
    percentage=(float)total/6;
    printf("percentage=%f \n", percentage); 
    
    if(percentage > 80)
        printf("DISTINCTION");
    else if(percentage>75)
        printf("1st CLASS");
    else if(percentage>60)
        printf("2nd CLASS");
    else if(percentage>35)
        printf("3rd CLASS");
    else
        printf("Fail");
    
}
