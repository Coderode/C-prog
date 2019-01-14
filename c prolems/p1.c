//to find first number is multiple of second number
#include <stdio.h>
#include<conio.h>
int main()
{
    int a,b,x;
    printf("Enter two integers:\n1.");
    scanf("%d",&a);
    printf("\n2.");
    scanf("%d",&b);
    if(a%b==0)  //checking multiple
    {
        printf("Here first number is multiple of second number\n");
        x=a/b;
        printf("%d * %d = %d\n",b,x,a);
    }
    else
        {
            printf("NO ,first number is not multiple of second");
    }
    getch();
}
