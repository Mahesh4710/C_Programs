/*
1. Write a program to accept a point in Cartesian co-ordinate system 
and decide the quadrant in which the point lies. Also check for 
special cases point lies on ± x axis, ± y axis, and origin

*/
#include<stdio.h>
int main(int argc, char const *argv[])
{
    float x,y;
    printf("Enter the \'X\' Co-ordinate :");
    scanf("%f",&x);

    printf("Enter the \'Y\' Co-ordinate :");
    scanf("%f",&y);

    if (x>0 && y>0)
    {
        printf("\nThe point lies in 1st Quadrant");

    }
    else if (x<0 && y>0)
    {
        printf("\nThe point lies in 2nd Quadrant");
        
    }
    else if (x<0 && y<0)
    {
        printf("\nThe point lies in 3rd Quadrant");
        
    }
    else if (x>0 && y<0)
    {
        printf("\nThe point lies in 4rth Quadrant");
        
    }
    else if (x=0 && y>0)
    {
        printf("\nThe point lies on positive \'Y\' axis ");
        
    }
    else if (x=0 && y<0)
    {
        printf("\nThe point lies on negative \'Y\' axis ");
        
    }
    else if (y=0 && x>0)
    {
        printf("\nThe point lies on positive \'X\' axis ");
        
    }
    else if (y=0 && x<0)
    {
        printf("\nThe point lies on negative \'X\' axis ");
        
    }
    else
    {
        printf("\nThe point lies at origin ");
    }

    return 0;
}

