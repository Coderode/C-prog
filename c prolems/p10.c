//to find dicimal ,octal and hex equivalent of a binary number
#include <stdio.h>
#include <conio.h>
int power(int,int);

int main()
{
    int temp,bin,rev,i=0,dec=0,oct=0,hex[15],j;   //rev=reverse last digit
   // char hex2[10]={};
    printf("Enter a binary number:\n");
    scanf("%d",&bin);
    //for decimal
    temp=bin;
    while(temp>0)
    {
        rev=temp%10;
        temp=temp/10;
        if(rev!=0&&rev!=1)
        {
            printf("\nyou did not entered a binary number!!\n");
            exit(0);
        }
        dec=dec+rev*power(2,i);
        i=i+1;
    }
    printf("\ndecimal equivalent of binary number %d is: %d\n",bin,dec);
    //for octal
    temp=dec;
    i=0;
    while(temp>0)
    {
           rev=temp%8;
           oct=oct+rev*power(10,i);
           i=i+1;
           temp=temp/8;
    }

    printf("\noctal equivalent of binary number %d is : %d\n",bin,oct);

 /* //for hexadecimal
    temp=dec;
    i=0;
    while(temp>0)
    {
    rev=temp%16;
    if(rev>9)
    {
    if(rev==10)
        hex2[i]='A';
    if(rev==11)
        hex2[i]='B';
    if(rev==12)
        hex2[i]='C';
    if(rev==13)
        hex2[i]='D';
    if(rev==14)
        hex2[i]='E';
    if(rev==15)
        hex2[i]='F';
    }
    else
    {
     hex1[i]=rev;
    }
        i=i+1;
        temp=temp/16;
    }
    printf("\nhexadecimal equivalent  of %d is:",bin);
    for(j=i; j>=0; j--)
    {
        if(hex2[j])
        printf("%c",hex2[j]);
        if(hex1[j])
        printf("%d",hex1[j]);

    }
    */

//hexadecimal 2
temp=dec;
i=0;
while(temp)
{
rev=temp%16;
hex[i]=rev;
i=i+1;
temp=temp/16;
}
printf("\nhexadecimal equivalent  of %d is:",bin);
for(j=i-1; j>=0; j--)
{
if(hex[j]<=9)
printf("%d",hex[j]);
else
{
switch(hex[j])
{
case 10 : printf("A"); break;
case 11 : printf("B"); break;
case 12 : printf("C"); break;
case 13 : printf("D"); break;
case 14 : printf("E"); break;
case 15 : printf("F"); break;
}
}
}

getch();
}


//power function
int power(int base,int expo)
{
    int c,i;
    c=1;
  for(i=1; i<=expo; i++)
  {
      c=c*base;
  }
  return c;
}





