//recursion to find string length
#include<stdio.h>
#include<conio.h>
int strlength(char [],int);//function declaration
int main()
{
    int length;
    char string[30];
    printf("Enter a string:");
    gets(string);
    length=strlength(string,0);//function call
    printf("The length of the entered string is:%d\n",length);
    getch();

}
//function to find string length
int strlength(char str[],int len)
{
   if(str[len]=='\0')//checking each character of string with null character
    return len;
   else
    return (strlength(str,len+1));//returning complete string as it is
}
