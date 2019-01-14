//function to reverse a number
#include<stdio.h>
#include<conio.h>
int reverse(int);
int main()
{
    int num,rev;
    printf("Enter a number to find its reverse:");
    scanf("%d",&num);
    rev=reverse(num);
    printf("Number with its reversed digits  is:%d\n",rev);

    getch();
}
//function
int reverse(int number)
{
    int temp,rev=0;
    temp=number;
    //for reversing the number
    while(temp)
    {
        rev=rev*10;
        rev=rev+temp%10;
        temp=temp/10;
    }
    return rev;
}
