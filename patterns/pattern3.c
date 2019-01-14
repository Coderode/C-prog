#include <stdio.h>
#include<conio.h>
 main()
{
   int i,j,n,k;
    printf("Enter the number of rows:\n");
    scanf("%d",&n);
    printf("\n\n");
    for(i=1; i<=n; i++)
    {
        k=0;
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
    }
    getch();
}



