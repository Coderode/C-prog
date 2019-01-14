#include <stdio.h>
int main()
{
    int i,j,n;
    printf("Enter the number of rows:\n");
    scanf("%d",&n);
    printf("\n\n");
    pattern1(n,1);
    getchar();
}
void pattern1(int n,int i)
{
    int j;
    if(i>n)
    return;
    for(j=n-i; j<n; j++)
    {
        printf("* ");
    }
    printf("\n");
    pattern1(n,i+1);
    return;
}
