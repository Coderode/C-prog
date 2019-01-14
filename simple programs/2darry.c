#include<stdio.h>
main()
{
    int a[5][5],*b[5],**d,r,c,i,j;
    printf("Enter the values for the matrix:\n");
    printf("row=\n");
    scanf("%d",&r);
    printf("col=\n");
    scanf("%d",&c);
    printf("Enter the values:\n");
    //simple
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            printf("a(%d,%d)=",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            printf("%d\t",a[i][j]);
         }
    printf("\n");
    }
    printf("for matrix b:\n");
    //pointer to arry
    for(i=0; i<r; i++)
        b[i]=(int *)malloc(2*c);
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            printf("b(%d,%d)=",i+1,j+1);
            scanf("%d",b[i]+j);
        }
    }
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            printf("%d\t",*(b[i]+j));
         }
    printf("\n");
    }
    //pointer to pointer
    printf("for matrix d:\n");
    d=(int **)malloc(r*2);
    for(i=0; i<r; i++)
    d[i]=(int *)malloc(2*c);
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            printf("d(%d,%d)=",i+1,j+1);
            scanf("%d",&d[i][j]);
        }
    }
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            printf("%d\t",*(*(d+i)+j));
        }
    printf("\n");
    }

}
