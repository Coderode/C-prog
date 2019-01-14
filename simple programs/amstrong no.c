#include<stdio.h>
int power(int,int);
int armstrong(int);
main()
{
    int num,sum;
    printf("Enter a number:\n");
    scanf("%d",&num);
    sum=armstrong(num);
    if(sum==num)
        printf("the given number is a armstrong number of order 3\n");//153,371etc
    else
        printf("the given number is not a armstrong number of order 3\n");
}
int armstrong(int num)
{
    if(num==0)
        return 0;
    else
    return (power(num%10,3)+armstrong(num/10));
}
//power function
int power(int a,int b)   //base,exp
{
    int c,i;
    c=1;
  for(i=1; i<=b; i++)
  {
      c=c*a;
  }
  return c;
}

