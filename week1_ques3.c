
#include<stdio.h>
int main()
{
    int num;
    printf("Enter the numbers to be checked :");
    scanf("%d" ,&num);
    switch(num%2)
    {
    case 0:
        printf("the number is even  %d" , num);
        break;
    case 1:
        printf("the number is odd   %d" , num);
        break;
    }
    return 0;        
}
