#include<stdio.h>
#include<conio.h>
int main()
{
	int p,q,r,i;
	while(i<=5)
	{
	printf("enter 1.for Addition 2. for Substraction 3.for multiplication 4. for division 5.for modular division");
	scanf("%d",&i);
	printf("enter the value of p=");
	scanf("%d",&p);
	printf("enter the value of q=");
	scanf("%d",&q);
	switch(i)
	{
		case 1:
			r=p+q;
			printf("r=%d\n",r);
			break;
		case 2:
			r=p-q;
			printf("r=%d\n",r);
			break;
		case 3:
			r=p*q;
			printf("r=%d\n",r);
			break;
		case 4:
			r=p/q;
            printf("r=%d\n",r);
			break;
		case 5:
		    r=p%q;
			printf("r=%d\n",r);
			break;
		case 6:		
			printf("you entered wrong choice!");
			break;
			
	}
}

	
    getch();
}
