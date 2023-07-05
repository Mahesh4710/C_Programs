/*
1. Write a program to accept a 5 digit number and check whether it is 
a numeric palindrome. (If reversed number is same as entered 
number it is called palindrome).
*/
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int num,a,b,c,d,e;
    printf("Enter a 5 digit number to check it is palindrone or not :");
    scanf("%d",&num);   //12321

    a=num/10000;    //1
    num=num%10000;  
    b=num/1000;     //2
    num=num%1000;
    c=num/100;      //3
    num=num%100;
    d=num/10;       //2
    num=num%10;
    e=num;          //1

    if(a==e && b==d){
        printf("\nThe number you have entered is palindrone.");
    }
    else{
        printf("\nThe number you have entered is palindrone, please try again!");
    }
    return 0;
}
