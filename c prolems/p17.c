//function to return smallest of three integers
#include<stdio.h>
#include<conio.h>
int smallest(int,int,int); //function declaration
int main()
{
    int num1,num2,num3,min;
    printf("Enter three integers:\n");
    scanf("%d%d%d",&num1,&num2,&num3);
    min=smallest(num1,num2,num3);
    printf("The smallest of three integers is :\n%d",min);
    getch();
}
//function definition
int smallest(int num1,int num2,int num3)
{
int min;
    min=num1<num2? (num1<num3? num1:num3) : (num2<num3?num2:num3 );
return min;

}
