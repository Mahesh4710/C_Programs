//1. Write a program to accept three digit number and find sum of all
//its digits.
#include<stdio.h>

int main(int argc, char const *argv[])
{
    int num,a,b,c;
    printf("Enter the 3 digit number of your choice : ");
    scanf("%d",&num);

    a=num/100;
    num=num%100;
    b=num/10;
    num=num%10;
    int sum=a+b+num;
    printf("\nSum of its all digit is : %d",sum);

    return 0;
}
