#include <stdio.h>
int main()
{
int i,j,n,k;
    printf("Enter the number of rows:\n");
    scanf("%d",&n);
    printf("\n\n\n");
    for(i=1; i<=n; i++)
    {
        k=0;
        for(j=1; j<=(n+i-1); j++)
        {
            if(j<=(n-i))
            printf("  ");
            else if(j>n)
            {
            k--;
            printf("%d ",k) ;
            }
            else
            {
            k++;
            printf("%d ",k);
            }
        }
        printf("\n");
    }
    getchar();
}
