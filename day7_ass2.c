/*2. Write a program to display number of days in the given year. Check 
condition for leap year. A year is a leap year if it is divisible by 4 but 
not by 100, except that years divisible by 400 are leap years.
a. Without using logical operators
b. Using logical operators
c. Conditional operator
*/
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int year;
    printf("Enter the year to display its number of days: ");
    scanf("%d",&year);

    int a=year%4;
    int b=year%100;
    int c=year%400;

    if ((a==0 && b!=0) || c==0)
    {
         printf("\nThis is leap year and no. of days in this year is 366 in this year");
       

    }
    
     else{
         printf("\nThis is not leap year no. of days in this year is 365 in this year");
    }
    
    return 0;
}
