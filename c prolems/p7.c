//to determine the winner of sales contest for 10 employees
#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
int main()
{
    int w=0,i,j,k,l,n;
    printf("Enter number of employees:");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        printf("\n\nEnter employee no.:");
        scanf("%d",&j);
        printf("Enter sales unit of employee %d:",j);
        scanf("%d",&k);
        if(k>w) //finding maximum
      {
        w=k;
        l=j;
      }
    }
printf("\n\nThe winner of sales contest is : employee %d",l);
    getch();
}
