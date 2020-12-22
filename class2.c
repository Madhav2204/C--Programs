//class of 22/09, re[placed lecture of ankit sir by garima mam (1:45 to 2:30 pm)

//error handling
//fopen():- c lbrary function FILE *fopen(const char *filename .const char *mode) opens the filename pointed 
// errno is a global variable and placed in header file #include<errno.h> and returns no of error in program  


#include<stdio.h>
#include<errno.h>
#include<string.h>

//int main()
//{
//	FILE *fp;
//	
//	fp=fopen("sample.txt","r");
//	printf("value of errno:%d\n",errno);
//	printf("the error message is:%s\n",strerror(errno));  // strerror() used
//	perror("message from perror");
//	
//	return 0;
//	
//}


int main()
{
	FILE *fp;
	
	fp=fopen("sample.txt","a");
	printf("value of errno:%d\n",errno);
	printf("the error message is:%s\n",strerror(errno));  // strerror() used
	perror("message from perror");
	
	return 0;
	
}

//int main()
//{
//	FILE *fp;
//	
//	fp=fopen("sample.txt","b");
//	printf("value of errno:%d\n",errno);
//	printf("the error message is:%s\n",strerror(errno));  // strerror() used
//	perror("message from perror");
//	
//	return 0;
//	
//}



//to learn-----    fprintf()-used to print with format 

//devide by zero error

/////////also to be included in lab so do ity before this thrusday


//#include<stdio.h>
//#include<stdlib.h>
//
//main()
//{
//	int devidend=20;
//	int divisor =0;
//	int quotient;
//	
//	if(divisor==0)
//	{
//		fprintf(stderr,"divisor by zero!exiting...\n");
//		
//	}
//	
//	quotient=dividend/divisor;
//	fprintf(strerr,"value of quotient!exiting:%d\n",quotient);
//	
//}

//
