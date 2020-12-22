#include <stdio.h>
#include<conio.h>
void main()
{
  int a[50][50],b[50][50],c[50][50],i,j,n;
  
       printf("\n\nSubtraction of two Matrices :\n");
       printf("------------------------------\n");  
        printf("Input the size of the square matrix (less than 5): ");
       scanf("%d", &n); 
  
    /* Stored values into the array*/
       printf("Input elements in the first matrix :\n");
       for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
	           printf("element - [%d],[%d] : ",i,j);
	           scanf("%d",&a[i][j]);
            }
        }   
  
       printf("Input elements in the second matrix :\n");
       for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
	           printf("element - [%d],[%d] : ",i,j);
	           scanf("%d",&b[i][j]);
            }
        }    
   printf("\nThe First matrix is :\n");
  for(i=0;i<n;i++)
    {
      printf("\n");
      for(j=0;j<n;j++)
           printf("%d\t",a[i][j]);
    }
  
  printf("\nThe Second matrix is :\n");
  for(i=0;i<n;i++)
    {
      printf("\n");
      for(j=0;j<n;j++)
      printf("%d\t",b[i][j]);
    }
/* calculate the subtraction of the matrix */   
   for(i=0;i<n;i++)
       for(j=0;j<n;j++)
            c[i][j]=a[i][j]-b[i][j];
   printf("\nThe Subtraction of two matrix is : \n");
   for(i=0;i<n;i++){
       printf("\n");
       for(j=0;j<n;j++)
            printf("%d\t",c[i][j]);
   }
   printf("\n\n");
}

