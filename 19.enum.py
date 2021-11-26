#include <stdio.h> 
int main() 
{ 
    int total_days,i; 
    enum days{monday,tuesday,wednesday,thursday,friday,saturday,sunday}; 
    enum days first, last; 
    first=monday; 
    last =sunday; 
    total_days= first+last; 
    printf("Total Days: %d",total_days+1);
    
// to print index of items in days 
    printf("\nValues: ");
    for (i= monday;
        i<= sunday;
        i++)
    printf("%d\t",i);
    return 0;
}
