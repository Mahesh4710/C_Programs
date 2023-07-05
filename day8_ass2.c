/*
2. Write a program to display number of days in the given month and 
year using switch case statement
*/
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int choice,month,year,fyear,repeat;

do{
    printf("What do you want to see? \n1.If you want to see Days in month press \'1\' \n2.If you want to see Days in Year press \'2\'\n Enter your chice : ");
    scanf("%d",&choice);

    switch (choice)
    {
    case 1:
        printf("Enter the month which days do you want to see : \n1.January \n2.February \n3.March \n4.April \n5.May \n6.June \n7.July \n8.August \n9.September \n10.October \n11.November \n12.December\n Enter your choice : ");
        scanf("%d",&month);
        switch (month)
        {
        case 1:
            printf("\nJanuary contains 31 days");
            break;
        case 2:
            printf("In february the days are depends on wheather the year is leap or not. \nSo please Enter the year to calcualte total days in February :");
            scanf("%d",&fyear);
            if ((fyear%4==0 && fyear%100!=0) || (fyear%400==0) )
            {
                printf("%d is a leap year and days in February %d is 29",fyear,fyear);
            }
            else{
                printf("%d is not a leap year and days in February %d is 28",fyear,fyear);

            }
            break;
        case 3:
            printf("\nMarch contains 31 days");
            break;
        case 4:
           printf("\nApril contains 30 days");
            break;
        case 5:
            printf("\nMay contains 31 days");
            break;
        case 6:
            printf("\nJune contains 30 days");
            break;
        case 7:
            printf("\nJuly contains 31 days");
            break;
        case 8:
            printf("\nAugast contains 31 days");
            break;
        case 9:
            printf("\nSeptmber contains 30 days");
            break;
        case 10:
            printf("\nOctomber contains 31 days");
            break;
        case 11:
            printf("\nNovember contains 30 days");
            break;
        case 12:
            printf("\nDecember contains 31 days");
            break;                        

        
        default:
            printf("\nEnter valid choice!");
            break;
        }
        
        break;
    case 2:
            printf("\nEnter a year to calculate its days :");
            scanf("%d",&fyear);
            if ((fyear%4==0 && fyear%100!=0) || (fyear%400==0))
            {
                printf("%d is Leap year and it contain 366 days",fyear);
                int i=1;

            }
            else{
                printf("%d contain 365 days.",fyear);

            }

        break;

    
    default:
            printf("\nEnter valid choice!");
    
        break;
    }
    printf("\nDo you want to see the days of another month or year.\n1.Press 1 if you want to continue.\n2.Press 2 for exit.\nEnter your choice : ");
    scanf("%d",repeat);
}while(repeat==2);

    return 0;
}
