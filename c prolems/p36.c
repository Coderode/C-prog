//calculation for 1 D array
#include<stdio.h>
#include<conio.h>
main()
{
    int a[30],b[30],c[30],r1,c1,r2,c2,i,prod,choice;
    while(1)
    {

    printf("\n1.To sum two linear matrices.\n");
    printf("2.To subtract two linear matrices.\n");
    printf("3.To multiply two linear matrices.\n");
    printf("4.Exit\n");
    printf("Select option:\n");
    scanf("%d",&choice);
    switch(choice)
    {
     //for addition
    case 1:
    printf("**both matrices must have same dimension for addition**\n");
    printf("enter the values of matrix 1:\n");
    printf("\ncolumn=");
    scanf("%d",&c1);
    for(i=0; i<c1; i++)  //values entering
    {
        printf("a(%d)=",i+1);
        scanf("%d",&a[i]);
    }
    printf("enter the values of matrix 2:\n");
    printf("columns=");
    scanf("%d",&c2);
    for(i=0; i<c2; i++)//values entering
    {
        printf("b(%d)=",i+1);
        scanf("%d",&b[i]);
    }
    if(c1!=c2)
    {printf("addition not possible!!");break;}
    printf("the sum of matrix1 and matrix2 is:\n");
    for(i=0; i<c1; i++)  //for finding sum
    {
        c[i]=a[i]+b[i];  //addition
        printf("%d\t",c[i]);
    }
    break;
    //for subtraction
    case 2:
    printf("**both matrices must have same dimension for subtraction**\n");
    printf("enter the values of matrix 1:\n");
    printf("\ncolumn=");
    scanf("%d",&c1);
    for(i=0; i<c1; i++)
    {
        printf("a(%d)=",i+1);
        scanf("%d",&a[i]);
    }
    printf("enter the values of matrix 2:\n");
    printf("columns=");
    scanf("%d",&c2);
    for(i=0; i<c2; i++)
    {
        printf("b(%d)=",i+1);
        scanf("%d",&b[i]);
    }
    if(c1!=c2)
    {printf("subtraction is not possible!!"); break;}
    printf("the subtraction of matrix1 and matrix2 is:\n");
    for(i=0; i<c1; i++)
    {
        c[i]=a[i]-b[i];  //subtraction
        printf("%d\t",c[i]);
    }
    break;
    //for multiplication
    case 3:
    printf("\n**for multiplication columns of matrix1==rows of matrix2**\n");
    printf("enter the values of matrix 1:\n");
    printf("row=");
    scanf("%d",&r1);
    printf("column=");
    scanf("%d",&c1);
    for(i=0; i<c1; i++)
    {
        printf("a(%d,%d)=",r1,i+1);
        scanf("%d",&a[i]);
    }
    printf("enter the values of matrix 2:\n");
    printf("rows=");
    scanf("%d",&r2);
    printf("columns=");
    scanf("%d",&c2);
    for(i=0; i<r2; i++)
    {
        printf("b(%d,%d)=",i+1,c2);
        scanf("%d",&b[i]);
    }
    prod=0;
    if(c1==r2)
    {
     for(i=0; i<c1; i++)
            prod=prod+a[i]*b[i];  //multiplication
    }
    else
    {printf("Multiplication is not possible!!"); break;}
    printf("product of mat1 and mat2 is :\n%d",prod);
    break;
    case 4:exit(0);

    default : printf("You entered wrong choice\n");
    }
    }


getch();
}
