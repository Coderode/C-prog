//function to check number is perfect
#include<stdio.h>
#include<conio.h>
int isperfect(int); //function declaration
int main()
{
    int num,check,i;
    printf("Enter a number to check it is perfect number:");
    scanf("%d",&num);
    check=isperfect(num);
    //for printing factors of perfect number
    if(check==1)
    {
    printf("\n%d=",num);
    for(i=1; i<=num/2; i++)
    {
        if(num%i==0)
            printf("+%d",i);
    }
    }
    getch();
}
//function definition
int isperfect(int num)
{
    int i,sum=0,check;
    for(i=1; i<=num/2; i++)
    {
        if(num%i==0)
            sum=sum+i;     //summing of factors
    }
        if(sum==num)  //checking for perfect number
          {
        printf("%d is a perfect number.",num);
        check=1;
          }
        else
        {
            printf("%d is not a perfect number!!",num);
            check=0;
        }
        return check;

}
