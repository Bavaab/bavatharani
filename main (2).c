#include<stdio.h>
#include <string.h>
char name(char a);
char dept(char a);
char address(char a);
char main(void)
{
    char x[100];
    char y[100];
    char z[20];
    char display[100];
    int detail;
    
    printf("enter your details\n");
    printf("1-name\n 2-department\n 3-address\n");
     
    printf("enter the name:\n");
   
    scanf("%s",x);
       printf("enter the department:\n");
    scanf("%s",y);
       printf("enter the address of student:\n");
    scanf("%s",y);
    printf("enter a number what you want\n");
    scanf("%d\n",&detail);
    switch(detail)
    {
        case 1:
        display=name(x);
        printf("name of the student:%c\n",display);
        break;
        case 2:
        display=dept(y);
        printf("department of the student:%c\n",display);
        break;
        case 3:
        display=address(z);
        printf("address of the student:%c\n",display);
        break;
        default:
        printf("please enter valid one\n");
    }
    
return 0;
}
int name(char a)
{
    char name;
    name=a;
    return name;
}
int dept(char a)
{
    char dept;
    dept=a;
    return dept;
}
int address(char a)
{
    char address;
    address=a;
    return address;
}
