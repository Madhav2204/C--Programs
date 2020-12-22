#include<stdio.h>
void fun(int a,int b)   //function declaration
{
	//function definition
  a+=b;
  printf("a=%d b=%d",a,b);
}
int main()
{
	int x,y;
	printf("enter the value of x=");
	scanf("%d",&x);
	printf("enter the value of y=");
	scanf("%d",&y);
	fun(x,y);
	printf("x=%d y=%d",x,y);
	return 0;
}
