//to compare two strings using pointer
#include<stdio.h>
#include<conio.h>
void compare(char*,char*);
main()
{
    char str1[20],str2[20];
    printf("Enter string 1:\n");
    gets(str1);
    printf("Enter string 2:\n");
    gets(str2);
    compare(str1,str2); //passing address of strings
    getch();
}
void compare(char *x,char *y)  //function definition with address as input
{
int l1,l2,i;
for(l1=0; *(x+l1)!='\0'; l1++); //finding length of strings
for(l2=0; *(y+l2)!='\0'; l2++);
for(i=0; i<l1; i++)
{
    if(*(x+i)!=*(y+i))  //comparing
    break;
}
if(l1!=l2||i!=l1)
printf("strings are different!!");  //result
if(i==l1&&l1==l2)
printf("**strings are same**");  //result
}

