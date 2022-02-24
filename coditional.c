#include <stdio.h>  
int main()  
{  
    int age;
    printf("Enter your age: ");  
    scanf("%d",&age);
    (age>=18)? printf("eligible for driving") : printf("not eligible for driving");
    return 0;  
}
