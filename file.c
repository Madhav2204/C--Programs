#include<stdio.h>
#include<conio.h>

int main(){
    char Ch;
    int n;
    float f;
    char s[20];
    printf("Enter the value for string variable\n :");
    scanf("%s",s);
    printf("\nEntered value :%s", s );
    printf("Enter the value for integer variable \n :");
    scanf("%d",&n);
    printf("\nEntered value :%d", n );
    printf("Enter the value for character variable\n:");
    scanf("%c",&Ch);
    printf("\nEntered value :%c", Ch );
    printf("Enter the value for float variable \n:");
    scanf("%f",&f);
    printf("\nEntered value:%f", f );
    return 0;
}
