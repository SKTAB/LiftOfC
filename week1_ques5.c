#include<stdio.h>
int main()
{
    float r,d,c,area;
    printf("Enter the value for radius=  \n ");
    scanf("%f" ,&r);
    d=2*r;
    c=2*(22.0/7.0)*r;
    area=(22.0/7.0)*r*r;
    printf("the diameter of circle is  : %f \n" ,d);
    printf("the cicumference of the circle is  : %f  \n" ,c);
    printf("the area of circle is   :  %f  " ,area );
    return 0;
}
