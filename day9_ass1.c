/*
1. Write a menu driven program to accept a number and
a. Calculate sum of digits of integer
Input: 9362
Output: 9 + 3 + 6 + 2 = 20
b. Reverse the number
Input: 9362
Output: 2639
c. Check whether given number is numeric palindrome or not
Input: 9362
Output: 9362 is not a numeric palindrome
Input: 36963
Output: 36963 is a numeric palindrome
d. Check whether it is Armstrong no. (when sum of cube of all 
digits of equals the number
then the number is called as Armstrong number)
Example: 153
(1 * 1 * 1)+(5 * 5 * 5)+(3 * 3 * 3) = 1 + 125 + 27 = 153
Input: 936
Output: 936 is not an Armstrong number
Input: 153
Output: 153 is an Armstrong number
*/
#include<stdio.h>
enum menu{Exit,Sum,Reverse,palindrome,Armstrong};

int main(int argc, char const *argv[])
{
    int num;
    printf("Enter the no\n");
    scanf("%d",&num);
    int temp,rem,sum,rev,arm;

    int choice;
    enum menu{
        Exit,Sum=1,Reverse,palindrome,Armstrong
    }; 

    do{
        
        
        printf("\n1.Calculate sum of digits of integer\n2.Reverse of the no\n3.Check whether given number is numeric palindrome or not\n4.Check whether it is Armstrong no.\n Enter your choice : ");
        scanf("%d",&choice);
        
        switch (choice)
        {
        case Sum:
            temp=num;
            rem=0,sum=0;
            
            while (temp!=0)
            {
               rem=temp%10;
               printf("%d + ",rem);
               temp=temp/10;
                sum=sum+rem;
            }
            printf("\b\b\b = %d\n",sum);
            
            break;
        case Reverse:
            temp=num;
            rem=0,sum=0; 
            printf("\nReverse of the number is :");
            while (temp!=0)
            {
               rem=temp%10;
               printf(" %d ",rem);
               temp=temp/10;
                //sum=sum+rem;
            }  
            printf("\n");
            break;
        case palindrome:
            temp=num;
            rem=0,rev=0; 
            while (temp!=0)
            {
               rem=temp%10;
               rev=(rev*10)+rem;
               temp=temp/10;
                //sum=sum+rem;
            }
            if (rev==num)
                printf("\n%d is a pandrome number\n",num);
            else
                printf("\n%d is not a pandrome number\n",num);  

            break;
        case Armstrong:
            temp=num;
            rem=0,arm=0; 
            printf("\nReverse of the number is :");
            while (temp!=0)
            {
               rem=temp%10;
               arm=arm+(rem*rem*rem);
               temp=temp/10;
                //sum=sum+rem;
            } 
            if(arm==num)
                printf("\n%d is a Armstrong number.\n",num);
            else
                printf("\n%d is not a Armstrong number.\n",num);     
            break;    

        default:
            printf("Enter valid choice");
            break;
        }


    }while (choice!=0);
    
    
    return 0;
}
