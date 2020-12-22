#include<stdio.h>
#include<string.h>

int main()
{
	char str[20];
	printf("enter the name-");
	scanf("%s",&str[0]);
	printf(&str[0]);
	return 0;
}


























//int main()
//{
//	char str[20];
//	printf("Enter the name-");
//	scanf("%s",str);
//	printf("%s",str);
//	getch();
//	
//}
//que.1 why we don't use & when using string and taking input
//que2. why we use gets and puts in scanf


// handling 2-d array of string


//int main()
//{
//	char s[3][10];
//	int i;
//	
//	printf("enter the tyhree string");
//	for(i<0;i<=2;i++)
//	gets(&s[i][0]);
//	for(i=0;i<=2;i++)
//	printf("%S\n",&s[i][0]);
//	getch();
//}
