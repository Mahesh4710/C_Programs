/*
3. Write a program to accept a 4 digit number and
a. Display face value of each decimal digit
b. Display place value of each decimal digit
c. Display no in reverse order by changing decimal place values
If user enters a 4 digit number 9361 output should be
a. 9 3 6 1
b. 9361 = 9 000 + 300 + 60 + 9
c. 1639

*/

#include<stdio.h>
int main()
 {
    int num,a,b,c,d;
    printf("Enter the Four Digit Num : ");
    scanf("%d",&num);
   int k=num;
    
    a=num/1000;
    num=num%1000;
    b=num/100;
    num=num%100;
    c=num/10;
    num=num%10;
    d=num;
    printf("\nFace values are : %d %d %d %d",a,b,c,d);

    printf("\nPlace values are : %d =%d + %d + %d + %d",k,a*1000,b*100,c*10,d);

    printf("\nReverse order is : %d %d %d %d",d,c,b,a);



//     //       9 3 6 1
//     int no , a,b,c,d;
//     printf("Enter the Four Digit Num : ");
//     scanf("%d",&no); // 9361
//     int k = no ;
//     a = no /1000;    // 9
//     no = no % 1000 ; // 361
//     b = no / 100 ;  // 3
//     no = no % 100 ; // 61
//     c = no / 10 ; // 6
//     no = no % 10  ; // 1
//     d = no ;   // 1

//     printf(" face value =  %d %d %d %d \n",a,b,c,d);

//     printf(" place value =  %d = %d + %d + %d + %d \n",k ,a * 1000 , b * 100 , c * 10 ,d);
//     //                     9361   9000 +300+ 61  + 1     9000        300       60   1 


    
//     printf(" rev =  %d %d %d %d \n",d,c,b,a);


   
    return 0;
}