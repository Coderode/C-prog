//recursion function to find nth term of fibonacci series
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int fibonacci(int); //function declaration
int main()
{
    int num,fib,i;
    printf("Enter the term number of fibonacci series:\n");
    scanf("%d",&num);
    /*for(i=1; i<=num; i++)
    {fib=fibonacci(i); //function calling
    printf("%d ",fib);}*/
    fib=fibonacci(num);
    printf("the %dth term of fibonacci series is:%d",num,fib);
    getch();
}
int fibonacci(int n)
{
    if(n==0||n<0)
        {printf("No value");
         exit(0);}
    if(n==1||n==2)
        return 1;   //initial value   f(1)=1   f(2)=1
        if(n>2)
        return (fibonacci(n-1)+fibonacci(n-2));   //recursion relation f(n)=f(n-1)+f(n-2)
}
