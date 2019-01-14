//recursive function to find gcd of two numbers
#include<stdio.h>
#include<conio.h>
int gcd(int,int); //function declaration
main()
{
    int num1,num2,ans;
    printf("Enter two integers to find their gcd:\n");
    scanf("%d%d",&num1,&num2);
    ans=gcd(num1,num2); //function call
    printf("GCD of %d and %d is: %d",num1,num2,ans);
    getch();
}
//function definition
int gcd(int num1,int num2)
{
    if(num2%num1==0)
        return num1; //stopping condition
    if(num1%num2==0)
        return num2; //stopping condition
    if(num2>num1)
        return(gcd(num1,num2%num1)); //recursion
    if(num1>num2)
        return (gcd(num2,num1%num2)); //recursion
}
