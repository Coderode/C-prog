//function to check number is prime or not
#include<stdio.h>
#include<conio.h>
int isprime(int); //function declaration
int main()
{
 int num,i,find;
 printf("Enter a number to check if it is prime\n");
 scanf("%d",&num);
 find=isprime(num);//function calling
 if(find==1)
    printf("%d is a prime number",num);
 else
    printf("%d is not a prime number",num);
 //for printing prime numbers b/w 1 and 10000
 printf("\n\nPrime numbers lying between 1 and 10000:\n");
 for(i=1; i<=10000; i++)
 {
    find=isprime(i);
 if(find==1)
   printf("%d\t",i);
 }
  getch();
}
//function definition
int isprime(int number)
{
    int i,check;
    for(i=2; i<=number/2; i++)
        if(number%i==0)
            break;
        //for finding factors of number
    if(i==number/2+1) //checking for prime
    check=1;
    else
    check=0;
    return check;

}
