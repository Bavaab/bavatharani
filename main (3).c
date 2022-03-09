#include<stdio.h>
#include<conio.h>
void cel();
void main()
{
 cel();   
}
void cel()
{
    char details[100];
    int display,mark,rollno,b=1;
    while(2)
    {
    printf("enter the name:\n");
    scanf("%s",details);
    printf("enter the rollno:\n");
    scanf("%d",&rollno);
    printf("enter mark:\n");
    scanf("%d",&mark);
    printf("u want detail pls enter 1:\n");
    scanf("%d",&display);
    switch(display)
    {
case 1:
    printf("the students details are\n: name:%s\nrollno:%d\nmark:%d\n",details,rollno,mark);
    break;
    default:
        printf("error");
    }
    } 
}