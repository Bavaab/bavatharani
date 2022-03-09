#include <stdio.h>
#include <string.h>
int add(int a,int b);
int sub(int a,int b);
int multi(int a,int b);
int divide(int a,int b);

int main()
{
 int x,y,z,ans,calc;
 
 
 printf("1-add\n 2-sub\n 3-multi\n 4-divide\n");
 printf("Enter two values =\n");
 while(5)
 {
    scanf("%d%d",&x,&y);
    printf("pls enter what do you want with your values\n");
    scanf("%d",&calc);
 
    switch(calc)
    {
        case 1: 
        ans=add(x,y);
        printf("your ans of add is= %d\n",ans);
        break;
        case 2: 
        ans=sub(x,y);
        printf("your ans of sub is= %d\n",ans);
        break;
        case 3: 
        ans=multi(x,y);
         printf("your ans of multi is= %d\n",ans);
         break;
        case 4: 
        ans=divide(x,y);
         printf("your ans of divide is= %d \n",ans);
         break;
         default:
         printf("enter correct operator");
    }
 }
    return 0;
}

int add(int a,int b)
{
    int add=0;
   add=a+b;
   return add;
    
}
int sub(int a,int b)
{
    int sub=0;
   sub=a-b;
   return sub;
    
}
int multi(int a,int b)
{
    int multi=1;
   multi=a*b;
   return multi;
}
int divide(int a,int b)
{
    int divide=1;
   divide=a/b;
   return divide;
 }

