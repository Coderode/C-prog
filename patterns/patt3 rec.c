#include <stdio.h>
#include<conio.h>
void pattern2(int,int);
 main()
{
   int i,j,n,k;
    printf("Enter the number of rows:\n");
    scanf("%d",&n);
    printf("\n\n");
    pattern2(n,1);
    getch();
}
void pattern2(int n,int i)
{
    int j,k=0;
    if(i>n)
        return;
    for(j=1; j<=(2*i-1); j++)
    {
        if(j>i)
        {
            k--;
            printf("%d ",k);
        }
        else
        {
            k++;
            printf("%d ",k);
        }
    }
    printf("\n");
    pattern2(n,i+1);

}




