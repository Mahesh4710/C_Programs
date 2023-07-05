/*2. Write a program to convert temperature in Celsius to Fahrenheit 
and vice versa.
 Formula for conversion is
 ºC = 5/9 x (ºF - 32)*/

#include<stdio.h>

int main(int argc, char const *argv[])
{
    float Ctemp,Ftemp;
    printf("Enter the temp in Fahrenheit");
    scanf("%f",&Ftemp);
    Ctemp = 5/9.0f * (Ftemp - 32.0f);

    printf("The temp in Celcious is : %lf ",Ctemp);


    return 0;
}
