//to find how many digits in integer m are n's digit
#include <stdio.h>
#include <conio.h>

int main()
{
    int m,n,count=0,rev;
    printf("Enter a single digit n :\n");
    scanf("%d",&n);
    printf("Enter an integer  m:\n");
    scanf("%d",&m);
   while(m>0)
   {
       rev=m%10;  //find modulo
       if(rev==n)   //equating each digit of m to n from right to left of m
       {
           count++;
       }
       m=m/10;
   }
    printf("there are %d n(s) in integer m\n",count);
    getch();
}
