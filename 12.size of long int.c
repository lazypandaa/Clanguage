#include<stdio.h>
#include<conio.h>
//write a c program to check the ranges of short int and unsigned short int
void main()

{
    long int a1=2147483647,a2=2147483648,a3=2147483649;
    unsigned long int b1=4294967295,b2=4294967296,b3=-1;
    // clrscr();
    printf("a1=%ld\t a2=%ld\t a4=%ld", a1,a2,a3);    //  %d should be used for signed int
    printf("\nb1=%lu\t b2=%lu\t b3=%lu", b1,b2,b3);   // %u should be used for unsigned int

    // getch();

}
