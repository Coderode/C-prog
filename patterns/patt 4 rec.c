
#include <stdio.h>
int main()
{
int n;
    printf("Enter the number of rows:\n");
    scanf("%d",&n);
    printf("\n\n\n");
    pattern(n,1);
    getch();
}
void pattern(int n,int i)
{
    int k,j;
    if(i>n)
        return;
        k=0;
    for(j=1; j<=(n+i-1); j++)
       {
        if(j<=(n-i))
            printf("    ");
            else if(j>n)
            {
            k--;
            printf("%d   ",k) ;
            }
            else
            {
            k++;
            printf("%d   ",k);
            }
        }
        printf("\n");
        pattern(n,i+1);
        return;
}
