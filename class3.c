// class 23/09/2020 wednesday 1:45 to 2:30


//preprocessor-directive :- It is program which process our source code before compilation.it generates a object file
// after that linker links this object code file and object cide of program 
// 4 main types of 1. #include<> or #include"" 2. macros :- #define macroname sequence eg #define PI 3.14  3.  

// #undefine macroname
// conditional  compilation directive
// ----#if,#else,3else if #endif
//#if def and #ifn


#include<stdio.h>
#include<conio.h>


#define action(a,b) a##b+a*b
main()
{
	printf("%d",action(3,4));
}

//#define DUBUG 1
//
//int main()
//{
//	#ifdef DEBUG
//	      printf("degib is on \n");
//	      printf("hi freinds\n");
//	      
//	      
//	#else 
//	      
//}






