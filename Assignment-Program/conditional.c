#include<stdio.h>
#include<conio.h>
int main()
{
int num;
printf("Enter the Number : ");
scanf("%d",&num);
int flag = ((num%2==0)?0:1);
if(flag==0)
printf("\nEven");
else
printf("\nOdd");
}
