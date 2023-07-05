/*
1. Write a program to Accept two numbers and
a. find its sum.
b. find its difference.
c. find its product.
Test the program using different integral data type signed/unsigned 
char/int/long.
First test the result using small values. Then test the same program using large 
values.
Observe the results.
*/
#include<stdio.h>
int main(int argc, char const *argv[])
{
    long int a,b;
    printf("Enter the two numbers : ");
    scanf("%ld%ld",&a,&b);

    printf("Sum of these two numbers = %ld",a+b);
    printf("\nProduct of these two numbers = %ld",a*b);
    
    return 0;
}
