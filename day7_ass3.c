/*
3. Write a program that will calculate the price for a quantity entered 
from the keyboard, given that the unit price is Rs.5 and there is a 
discount of 10 percent for quantities over 30 and a 15 percent 
discount for quantities over 50.
*/
#include<stdio.h>
int main(int argc, char const *argv[])
{
    float qt;
    double price;
    printf("Enter quantity that do you want :");
    scanf("%f",&qt);

    if (qt>30 && qt<=50)
    {

        price=(qt*5)*0.15;
        printf("Total price is : %.2f",price);
    }
    else if(qt>50){

        price=(qt*5)*0.30;
        printf("Total price is : %.2f",price);

    }
    else{
        price=(qt*5);
        printf("Total price is : %.2f",price);
    }
    
    return 0;
}
