#include <stdio.h>
#include<conio.h>
int main()
{
    int i,j,n,k;
    printf("Enter the number of rows:\n");
    scanf("%d",&n);
    printf("\n\n");
    for(i=1; i<=n; i++)
    {
        k=i;
        for(j=1; j<=(n+i-1); j++)
        {
            if(j<=(n-i))
            printf("  ");
            else if(j>=n)
            {
            printf("%d ",k) ;
            k++;
            }
            else
            {
            printf("%d ",k);
            k--;
            }
        }
        printf("\n");
    }
    getch();
}
