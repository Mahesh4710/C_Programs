/*
3. Write a program to accept Employee Id , Department No, 
Designation from user and display output with reference to following 
tables.(Use switch case)
DeptNo Dept Name DsgnCode Designation
10 Marketing ‘M’ Manager
20 Management ‘S’ Supervisor
30 Sales ‘s’ Security Officer
40 Designing ‘C’ Clerk
Example:
If input given is
Employee Id : 101
Dept No : 30
Designation Code : M
Then output should be:
Employee with employee id 101 is working in "Sales" 
department as “Manager"
*/
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int empid,depno;
    char desg;
    printf("Enter your Employee-Id\n");
    scanf("%d",&empid);

    printf("Enter your  Department No from : 10 20 30 40\n");
    scanf("%d",&depno);


    printf("Enter your Designation from : M S s C\n");
    scanf("%*c%c",&desg);

    switch (depno)
    {
    case 10:
        if (desg=='M')
        {
           printf("\nEmployee with employee id %d is working in \"Marketing\" department as \"Manager\"",empid);
        }
        else if (desg=='S')
        {
           printf("\nEmployee with employee id %d is working in \"Marketing\" department as \"Supervisor\"",empid);
        }
        else if (desg=='s')
        {
           printf("\nEmployee with employee id %d is working in \"Marketing\" department as \"Security Officer\"",empid);
        }
        else if (desg=='C')
        {

           printf("\nEmployee with employee id %d is working in \"Marketing\" department as \"Clerk\"",empid);
        }
        else{
            printf("\nEmployee with employee id %d is working in \"Marketing\" department Plese check your designation",empid);
        }

        break;

    case 20:
        if (desg=='M')
        {
           printf("\nEmployee with employee id %d is working in \"Management\" department as \"Manager\"",empid);
        }
        else if (desg=='S')
        {
           printf("\nEmployee with employee id %d is working in \"Management\" department as \"Supervisor\"",empid);
        }
        else if (desg=='s')
        {
           printf("\nEmployee with employee id %d is working in \"Management\" department as \"Security Officer\"",empid);
        }
        else if (desg=='C')
        {

           printf("\nEmployee with employee id %d is working in \"Management\" department as \"Clerk\"",empid);
        }
        else{
            printf("\nEmployee with employee id %d is working in \"Management\" department Plese check your designation",empid);
        }
        break;
    case 30:
        if (desg=='M')
        {
           printf("\nEmployee with employee id %d is working in \"Sales\" department as \"Manager\"",empid);
        }
        else if (desg=='S')
        {
           printf("\nEmployee with employee id %d is working in \"Sales\" department as \"Supervisor\"",empid);
        }
        else if (desg=='s')
        {
           printf("\nEmployee with employee id %d is working in \"Sales\" department as \"Security Officer\"",empid);
        }
        else if (desg=='C')
        {

           printf("\nEmployee with employee id %d is working in \"Sales\" department as \"Clerk\"",empid);
        }
        else{
            printf("\nEmployee with employee id %d is working in \"Sales\" department Plese check your designation",empid);
        }
        break;  
        
    case 40:
        if (desg=='M')
        {
           printf("\nEmployee with employee id %d is working in \"Designing\" department as \"Manager\"",empid);
        }
        else if (desg=='S')
        {
           printf("\nEmployee with employee id %d is working in \"Designing\" department as \"Supervisor\"",empid);
        }
        else if (desg=='s')
        {
           printf("\nEmployee with employee id %d is working in \"Designing\" department as \"Security Officer\"",empid);
        }
        else if (desg=='C')
        {

           printf("\nEmployee with employee id %d is working in \"Designing\" department as \"Clerk\"",empid);
        }
        else{
            printf("\nEmployee with employee id %d is working in \"Designing\" department Plese check your designation",empid);
        }
        break;      
    
    default:
    printf("\nPlease check your department");

        break;
    }
    return 0;
}
