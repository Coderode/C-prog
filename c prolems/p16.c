// to find terms of fibonacci series
// 1 1 2 3 5 8 13 21 ....
#include <stdio.h>
#include <conio.h>

int main()
{
    int f1=1,f2=1,f3,i,n;
    printf("Enter number of terms to find of fibonacci series N:\n");
    scanf("%d",&n);
    printf("first %d numbers of  fibonacci series are :\n",n);
    printf("%d  %d  ",f1,f2); //printing initial two values
    for(i=1; i<=(n-2); i++)
    {
            f3=f1+f2; //next value
            f1=f2;    //f1 assigning to f2
            f2=f3;     //f2 assigning to f3
        printf("%d  ",f3);
    }

    getch();
}
