//4. Write a program to accept three integer numbers and find its average
#include<stdio.h>
int main(int argc, char const *argv[])
{
    /* code */
    
int a,b,c;
float avg;

printf("Enter the three numbers\n");

scanf("%d%d%d",&a,&b,&c);

avg=a+b+c/3;

printf("Average=%.2f",avg);


 return 0;
}
