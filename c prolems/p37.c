//to find inverse of a matrix
#include<stdio.h>
#include<conio.h>
main()
{
    float a[3][3],c[3][3],det;
    int i,j;
    printf("Enter the values of matrix to find its inverse(3*3 matrix)\n");
    printf("Enter the values:\n");
    for(i=0; i<3; i++)
        for(j=0; j<3; j++)
    {
        printf("a(%d,%d)=",i+1,j+1); //entering values
        scanf("%f",&a[i][j]);

    }

    c[0][0]=a[1][1]*a[2][2]-a[2][1]*a[1][2];  //for cofactors
    c[1][0]=a[0][1]*a[2][2]-a[2][1]*a[0][2];
    c[2][0]=a[0][1]*a[1][2]-a[1][1]*a[0][2];
    c[0][1]=a[1][0]*a[2][2]-a[2][0]*a[1][2];
    c[1][1]=a[0][0]*a[2][2]-a[2][0]*a[0][2];
    c[2][1]=a[0][0]*a[1][2]-a[1][0]*a[0][2];
    c[0][2]=a[1][0]*a[2][1]-a[1][1]*a[2][0];
    c[1][2]=a[0][0]*a[2][1]-a[2][0]*a[0][1];
    c[2][2]=a[0][0]*a[1][1]-a[0][1]*a[1][0];
    det=a[0][0]*c[0][0]-a[0][1]*c[0][1]+a[0][2]*c[0][2];  //determinant
    printf("Inverse is:\n");
    for(i=0; i<3; i++)
    {
    for(j=0; j<3; j++)
    {
        if((i+j)%2==0)
        printf("%f\t",c[j][i]/det);  //transposed of matrix a
        else
        printf("%f\t",-(c[j][i]/det));
    }
    printf("\n");
    }
    getch();
}
