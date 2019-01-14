//To find all prime factors of a number
#include <stdio.h>
#include<conio.h>
int main()
{
    int num,i,j,count;
    printf("Enter a number to find its prime factors:\n");
    scanf("%d",&num);
    printf("all prime divisors of %d are :\n",num);
    for(i=2; i<=num; i++)
    {
        //to find prime factors upto n
        count=2; //each prime number divided 2 times only  by 1 and itself
        for(j=2; j<=(i/2); j++)
        {
            if(i%j==0)
               {
                count++;
                break;
               }
        }
        //prime factors of n
        if(count==2)     //prime numbers less than n=i
        {
            if(num%i==0)   //number is divided by all primes less than n
               {
                printf("%d\n",i);
                while(num%i==0)
                {
                num=num/i;
                }  //reducing num
               }
        }

    }
    getch();
}
