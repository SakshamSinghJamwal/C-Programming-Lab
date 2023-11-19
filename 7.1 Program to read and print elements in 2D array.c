#include<stdio.h>
 void main()
 {
     int arr[3][3], i, j;  
     printf("Enter 9 elements for array: ");
     for(int i=0;i<3;i++)
     {
         for(int j=0;j<3;j++)
         {
             scanf("%d", &arr[i][j]);
         }
    
     }
   printf("2D array is: \n");
   for(int i=0;i<3;i++)
     {
         for(int j=0;j<3;j++)
         {
             printf("%d ", arr[i][j]);
         }
    printf("\n");
    }
}