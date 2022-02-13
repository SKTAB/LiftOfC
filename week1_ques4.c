
#include<stdio.h>
int main()
{
    int num1,num2,n,sum,sub,prod;
    float div;
    printf("1.ADDITION(+)  \n  2.SUBTRACTION(-)   \n  3.MULTIPLICATION(*)  \n   4.DIVISION(/) \n");
    printf("CHOOSE THE ARITHMETIC OPERATION TO BE DONE:");
    scanf("%d",&n);
    printf("Enter two numbers num1 and num2= ");
    scanf("%d %d" ,&num1,&num2);
    switch(n)
    {
        case 1:
            sum=num1+num2;
            printf("the sum of the two numbers is  : %d " ,sum);
            break;
        case 2:
            sub=num1-num2;
            printf("the difference of the two numbers is : %d  " ,sub);
            break;
        case 3:
            prod=num1*num2;
            printf("the product of the numbers is  : %d  " ,prod);
            break;
        case 4:
            div=num1/(float)num2;
            printf("the division of the numbers is  : %f " ,div);
            break;
        default:
            printf("please choose from the available options ");

    }
    return 0;
}
