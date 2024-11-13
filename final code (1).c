#include <stdio.h>
int main()
{
     int ch;
     int i ,j, r ,c ,a[50][50], b[50][50],s[50][50];
     int k,r1,c1,r2,c2,sum,p[50][50];
     int m[r1][c1],n[r2][c2];
     printf("1.addition\n2.Subtraction\n3.multiplication");
     printf("\nOperation choice:-");
     scanf("%d",&ch);
     switch(ch)
     {
       case 1:printf("addition operation starts:-\n");
       {
            printf("enter no. of rows in both matrices:-");
            scanf("%d",&r);        
            printf("enter no. of column in both matrices:-");
            scanf("%d",&c);
            printf("First matrix\n");
            printf("enter value in aaray:-\n" ); 
            for(i=0; i<r; i++)
            {
              for (j=0;j<c;j++)
              {
                 scanf ("%d", &a[i][j]);
              }
            } 
            printf("\n");
            printf("print first aaray:-\n");
            for (i=0; i<r;i++)
            {
             printf("\n");
             for (j=0; j<c;j++)
             {
              printf(" %d", a[i][j]);
             }
             printf("\n");
            } 
            printf("\n");
            printf("second matrix:-\n");    
            printf("enter value in aaray:-\n" );  
            for(i=0; i<r; i++)
            {
              for (j=0;j<c;j++)
              {
                 scanf (" %d", &b[i][j]);
              }
            }     
            printf("print second aaray:-\n");
            for (i=0; i<r;i++)
            {
             printf("\n");
             for (j=0; j<c;j++)
             {
              printf(" %d", b[i][j]);
             }
             printf("\n");
            }
            for (i=0; i<r;i++)
            {
             for (j=0; j<c;j++)
             {
               s[i][j]=a[i][j]+b[i][j];
             }
             printf("\n");
            }
            printf("sum of matrix:-\n"); 
            for (i=0; i<r;i++)
            {
             printf("\n");
             for (j=0; j<c;j++)
             {
              printf(" %d", s[i][j]);
             }
             printf("\n");
            } 
       }     
       case 2:printf("subtraction operation start:-\n");
          {
                    printf("enter no. of rows in both matrices:-");
                    scanf("%d",&r);
                    printf("enter no. of column in both matrices:-");
                    scanf("%d",&c);
                    printf("First matrix\n");
                    printf("enter value in aaray:-\n" ); 
                    for(i=0; i<r; i++)
                    {
                         for (j=0;j<c;j++)
                        {
                             scanf ("%d", &a[i][j]);
                        }
                    } 
                    printf("\n");
                    printf("print first aaray:-\n");
                   for (i=0; i<r;i++)
                   {
                       printf("\n");
                       for (j=0; j<c;j++)
                      {
                        printf(" %d", a[i][j]);
                      }
                       printf("\n");
                   } 
                   printf("\n");
                   printf("second matrix:-\n");    
                   printf("enter value in aaray:-\n" );  
                   for(i=0; i<r; i++)
                  {
                      for (j=0;j<c;j++)
                     {
                          scanf (" %d", &b[i][j]);
                     }
                  }     
                  printf("print second aaray:-\n");
                  for (i=0; i<r;i++)
                  {
                    printf("\n");
                    for (j=0; j<c;j++)
                   {
                      printf(" %d", b[i][j]);
                   }
                   printf("\n");
                  }
                  for (i=0; i<r;i++)
                  {
                   for (j=0; j<c;j++)
                   {
                    s[i][j]=a[i][j]-b[i][j];
                   }
                   printf("\n");
                  }
                 printf("subtraction of matrix:-\n"); 
                 for (i=0; i<r;i++)
                {
                   printf("\n");
                   for (j=0; j<c;j++)
                   {
                      printf(" %d", s[i][j]);
                   }
                   printf("\n");
                 } 
          }
          break ;     
       case 3:printf("multiplication operation start:-\n");
        {
              printf("No of rows in first matrix:-");
              scanf("%d",&r1);
              printf("\nNo of columns in first matrix:-");
              scanf("%d",&c1);
              printf("\nNo of rows in second matrix:-");
              scanf("%d",&r2);
              printf("\nNo of columns in second matrix:-");
              scanf("%d",&c2);
             //entering values in first matrix
             printf("\nEnter Elements in First  Matrix:-\n");
             for(i=0;i<r1;i++)
             {
                 for(j=0;j<c1;j++)
                 {
                    printf("Element [%d,%d] :",i+1,j+1);
                   scanf("%d",&m[i][j]);
                 }
             }
            //entering values in second matrix 
            printf("\nEnter Elements in Second  Matrix:-\n");
            for(i=0;i<r2;i++)
            {
              for(j=0;j<c2;j++)
              {
               printf("Element [%d,%d] :",i+1,j+1);
               scanf("%d",&n[i][j]);
              }
            }
           //Display the matrix
           printf("\nFirst Matrix:-\n");
           for(i=0;i<r1;i++)
           {
             printf("\n");
             for(j=0;j<c1;j++)
            {
                printf("% 3d",m[i][j]);
            }
           }
           printf("\n");
           printf("\nSecond Matrix:-\n");
           for(i=0;i<r2;i++)
          {
             printf("\n");
             for(j=0;j<c2;j++)
             {
               printf("% 3d",n[i][j]);
             }
          }
          printf("\n");
         //loop which operates the multiplication method
         printf("\nMultiplication of two Matrix:-\n");
         for(i=0;i<r1;i++)
         {
            for(j=0;j<c2;j++)
            {
              sum=0;
              for(k=0;k<c1;k++)
              {
                sum=sum+m[i][k]*n[k][j];
                p[i][j]=sum;  
              }
            }
         }    
         for(i=0;i<r1;i++)
         {
           printf("\n");
           for(j=0;j<c2;j++)
           {
              printf("% 3d",p[i][j]);
           }
         }
        }
        break  ;
       default : printf("\n!!wrong choice!!\n!!try again later!!"); 
     }  
 return 0;      
}     