#include<stdio.h>
int main()
{
    int redgno;
    char name[55],branch[30],hobbies[250];
    printf("Enter your name: \n");
    scanf("%s",&name);
    printf("Enter your registration number: \n");
    scanf("%d",&redgno);
    printf("Enter your branch: \n ");
    scanf("%s",&branch);
    printf("Enter your hobbies: \n");
    scanf("%s",&hobbies);
    printf("Your name is : %s \n", name);
    printf("your registration number is : %d \n" ,redgno);
    printf("your branch is  :  %s \n" ,branch);
    printf("your hobbies are :  %s \n " ,hobbies);
    return 0;   
}

