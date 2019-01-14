#include<stdio.h>
main()
{
    int a[10][10],b[10][10],c[10][10]={},r1,r2,c1,c2,choice,i,j,k;
    while(1)
    {
    printf("\n\nchoose the operation to perform \n");
    printf("1.product of two matrices\n");
    printf("2.sum of two matrices\n");
    printf("3.exit\n");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1 :
        printf("attention! \nfor product of two matrices column of matrix 1=row of matrix 2\n");
    printf("enter the number of rows and columns of first matrix\n");
    scanf("%d%d",&r1,&c1);
    printf("enter the number of rows and columns of second matrix\n");
    scanf("%d%d",&r2,&c2);
    if(c1==r2)
    {
        printf("Enter the values of matrix 1:\n");
      for(i=0; i<r1; i++)
          for(j=0; j<c1; j++)
          {
            printf("mat1(%d%d):",i+1,j+1);
              scanf("%d",&a[i][j]);
          }
          printf("enter the values of matrix 2:\n");
          for(i=0; i<r2; i++)
            for(j=0; j<c2; j++)
          {
              printf("mat2(%d%d):",i+1,j+1);
              scanf("%d",&b[i][j]);
          }
          printf("the product mat1*mat2 is:\n");
          for(i=0; i<r1; i++)
            {
            for(j=0; j<c2; j++)
                {
            for(k=0; k<c1; k++)
            {
            c[i][j]=c[i][j]+a[i][k]*b[k][j];
          }
          printf("%d\t",c[i][j]);
                }
            printf("\n");
            }

    }
    else
    {
        printf("product is not possible!!\n");
        continue;
    }
    break;
    case 2 :
         printf("attention! \nfor addition of two matrices both have same dimensions\n");
    printf("enter the number of rows and columns of first matrix\n");
    scanf("%d%d",&r1,&c1);
    printf("enter the number of rows and columns of second matrix\n");
    scanf("%d%d",&r2,&c2);
        if(r1==r2&&c1==c2)
        {
           printf("Enter the values of matrix 1:\n");
      for(i=0; i<r1; i++)
          for(j=0; j<c1; j++)
          {
            printf("mat1(%d%d):",i+1,j+1);
              scanf("%d",&a[i][j]);
          }
          printf("enter the values of matrix 2:\n");
          for(i=0; i<r2; i++)
            for(j=0; j<c2; j++)
          {
              printf("mat2(%d%d):",i+1,j+1);
              scanf("%d",&b[i][j]);
          }

           printf("the sum of  mat1+mat2 is:\n");
          for(i=0; i<r1; i++)
            {
            for(j=0; j<c1; j++)
            {
            c[i][j]=a[i][j]+b[i][j];
            printf("%d\t",c[i][j]);
          }
            printf("\n");
            }

    }
    else
    {
        printf("sum is not possible!!\n");
        continue;
    }
    break;
    case 3 :exit(0);
    default :printf("you entered wrong choice!!\n");
        }
}
getchar();

}
