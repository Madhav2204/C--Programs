#include<stdio.h>

void swap(int *i,int*j)
{
	int temp=*i;
	*i=*j;
	*j=temp;
}

int main(void)
{
	int a,b;
	printf("Enter the value of a=");
	scanf("%d",&a);
	printf("Enter the value of b=");
	scanf("%d",&b);
	swap(&a,&b);
	printf("a is %d and b is %d\n",a, b);
	return 0;
}
