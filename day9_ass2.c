/*
2. Using For loop & While loop
Write a program to display n terms of Fibonacci series
Input: 6
Output: 1, 1, 2, 3, 5, 8
*/
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n1=1,n2=1,num;
    printf("Enter range : ");
    scanf("%d",&num);
    int i=2;
    printf("\n%d %d",n1,n2);

    // while (i<num)
    // {
    //     int fibo=n1+n2;     //2 3 5
    //     printf(" %d",fibo);//2 3  5 
    //     n1=n2;           //2 3  5
    //     n2=fibo;             //1 2  3
    //     i++;
   // }
    for(i=2;i<num;i++){
        int fibo=n1+n2;
        printf(" %d",fibo);
        n1=n2;
        n2=fibo;
    }
    return 0;
}
