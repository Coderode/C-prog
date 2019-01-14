//to print spiral matrix
#include<stdio.h>
#include<conio.h>
main()
{
    int m[6][6]={},j,k,c,r;
    int top,left,bot,right,dir=0,i,l=0;
    printf("Enter the dim of matrix:\n");
    printf("rows=");
    scanf("%d",&r);
    printf("columns=");
    scanf("%d",&c);
    top=0;  //top most row
    left=0;  //left most col
    bot=r-1; //bottom most row
    right=c-1;//right most col
    while(top<=bot&&left<=right)
    {
        if(dir==0)  //left to right
        {
            for(i=left; i<=right; i++)
            {
            l++;
            m[top][i]=l;  //accessing values to matrix (increment)
            }
                top++;
        }
        else if(dir==1)  //top to bottom
        {
            for(i=top; i<=bot; i++)
            {
            l++;
            m[i][right]=l;
            }
            right--;
        }
        else if(dir==2)  //right to left
        {
            for(i=right; i>=left; i--)
            {
            l++;
            m[bot][i]=l;
            }
            bot--;
        }
        else if(dir==3)  //bottom to top
        {
            for(i=bot; i>=top; i--)
            {
                l++;
            m[i][left]=l;
            }
            left++;
        }
        dir=(dir+1)%4;  //to change the direction again and again
    }
    printf("Spiral matrix:\n");  //printing values
    for(k=0; k<r; k++)
    {
        for(j=0; j<c; j++)
        printf("%d\t",m[k][j]);
    printf("\n");
    }
getch();
}
