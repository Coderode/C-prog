#include<stdio.h>
#include<conio.h>
int C(int,int); //nCr function
int fact(int); //factorial function
int main()
{
    int n,r,nCr,line,i,j,k;
    printf("Enter the value of n and r to find nCr:\nn=");
    scanf("%d",&n);
    printf("\nr=");
    scanf("%d",&r);
    if(r>n)
        printf("not possible!!");
    else
    {
        nCr=C(n,r);
    printf("%dC%d =%d",n,r,nCr);
    }
    //for pascal triangle
    printf("\nPascal sries:");
    printf("\nEnter number of rows to print:\n");
    scanf("%d",&line);
    for(i=1; i<=line; i++)
    {
        k=1;
        r=0;
        for(j=1; j<=2*line-1; j++)
        {
            if(j>=line+1-i && j<=line-1+i &&k)
            {
                printf("%d   ",C(i-1,r));
                k=0; r++;
            }
            else
            {
                printf("    ");
                k=1;
            }
        }
        printf("\n");
    }
    getch();
}
//to find nCr
int C(int n, int r)
{
    int nCr;
    nCr=fact(n)/(fact(r)*fact(n-r)); //calculation
    return nCr;
}
//to find factorial
int fact(int n)
{
    if(n==0)
        return 1;
    if(n>0)
    return (n*fact(n-1));  //recursion relation to find factorial fact(n)=n*fact(n-1)
}
