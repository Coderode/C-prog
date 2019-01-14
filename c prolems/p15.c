//to find exponential of a number using
//e^x=1+x+x^2/2!+x^3/3!+.....
#include <stdio.h>
#include<math.h>
#include<conio.h>
int main()
{
    int i;
    float e=0,a,x,fact=1;
    printf("To find e^x enter the value of x:\n");
    scanf("%f",&x);
    for(i=1; i<=100; i++)
    {
        fact=fact*i;       //to find factorial of i
        a=pow(x,i)/fact;  //x+x^2/2!+...
        e=e+a;
    }
        e=1+e; //completing the final value
    printf("The value of e^%f is : %f",x,e);
    getch();
}
