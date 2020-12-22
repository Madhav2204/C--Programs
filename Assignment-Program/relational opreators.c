#include <stdio.h>
#include <conio.h>
int main()
{
	int x, y, i;
	while(i<=4){
	printf("\nEnter to check wheather operands are 1. equal or not \n2. greater then or less then\n3.greater then equal too or less then equal too\n 4.too exit");
	scanf("%d", &i);
	printf("Enter the value of x=");
	scanf("%d", &x);
	printf("Enter the value of y=");
	scanf("%d", &y);
	switch (i)
	{
	case 1:
		if (x == y)
		{
			printf("Both the Entered operands are equal.");
		}
	    else if(x != y);
			{
				printf("Entered operands are not equal.");
			}
		break;
	case 2:
		if (x > y)
		{
			printf("x is greater then y");
		}
		else if(x < y);
			{
				printf("x is less then y");
			}
		break;
	case 3:
		if (x >= y)
		{
			printf("x is greater then or equal to y");
		}
		else if(x <= y); 
			{
				printf("x is less then or equal to y");
			}
			
	case 4:
		break;
	}
}
	getch();
}
