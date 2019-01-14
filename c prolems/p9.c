//to check for palindrome for a number
#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
int main()
{
    int rev=0,temp,num;
    printf("Enter an integer:\n");
    scanf("%d",&num);
    temp=num;
    // for reversing number
        while(temp>0)
        {
                rev=rev*10;
                rev=rev+(temp%10); //taking last digit
                temp=temp/10;  //moving to the right digit of the number
        }
        if(rev==num) // chicking equal to original number or not
        {
            printf("%d is a palindrome number\n",num);
        }
        else
        {
            printf("%d is not a palindrome number\n",num);
        }
   getch();
}
