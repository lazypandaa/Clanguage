#include <stdio.h>

int main()
{
    float a,b,c;
    int x;
    printf("Enter a and b values: ");
    scanf("%f%f",&a,&b);
    printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. All\n");
    printf("Enter Your Choice(1-4): ");
    scanf("%d",&x);
    switch(x)
    {
        case 1:c=a+b;
            printf("%f",c);
            break;
            
        case 2:c=a-b;
            printf("%f",c);
            break;
            
        case 3:c=a*b;
            printf("%f",c);
            break;
            
        case 4:c=a/b;
            printf("%f",c);
            break;
        
        case 5:
            c=a+b;
            printf("%f\n",c);
            c=a-b;
            printf("%f\n",c);
            c=a*b;
            printf("%f\n",c);
            c=a/b;
            printf("%f\n",c);
            break;
        
        default:printf("Incorrect input");
    }
    return 0;
}
