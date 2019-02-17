#include<stdio.h>
void main()
{
    int array1[20][20], array2[20][20];
    int r1, r2, c1, c2, sum[20][20], i, j;
    printf("Type the number of rows and columns of first matrix respectively");
    scanf("%d %d",&r1,&c1);
    printf("Type the number of rows and columns of second matrix respectively");
    scanf("%d %d",&r2,&c2);
    if(r1!=r2 || c1!=c2)
           printf("Matrix additon not possible");
      
    else
       { 
       // For inputting values in 1st mat
           for(i=0;i<r1;i++)
            {   
                for(j=0;j<c1;j++)
               {
                printf("Element for 1st matrix at[%d][%d]",i,j);
                scanf("%d",&array1[i][j]);
               }
                
            }
            // For printing values of 1st mat
            printf("1st matrix is \n");
            for(i=0;i<r1;i++)
            {   
                for(j=0;j<c1;j++)
               {
                
                 printf("%d \t",array1[i][j]);
                
               }
               printf("\n");
            }

           //For inputting values in 2nd mat 
           for(i=0;i<r2;i++)
            { 
                for(j=0;j<c2;j++)
                {
                printf("Element for 2nd matrix at[%d][%d]",i,j);
                scanf("%d",&array2[i][j]);
               
                }
              
            }
            
            // For printing values of 2nd mat
            printf("2nd matrix is \n");
           for(i=0;i<r2;i++)
            {   
                for(j=0;j<c2;j++)
               {
                
                 printf("%d \t",array2[i][j]);
                
               }
               printf("\n");
            }
             // For adding two matrices
             printf("The addition of matrix is \n");
              for(i=0;i<r2;i++)
            { 
                for(j=0;j<c2;j++)
                {
                sum[i][j]=array1[i][j]+array2[i][j];
                printf("%d \t",sum[i][j]);
                }
                
                printf("\n");   
            }
            
             
       }
    
}
