//function to find frequency of each character in a string using pointer
#include<stdio.h>
#include<conio.h>
void frequency(char*);
main()
{
    char str[30];
    printf("Enter string;\n");
    gets(str);
    frequency(str);
    getch();
}
void frequency(char *p)  //function definition
{
   int count,l,i,j;
   for(l=0; *(p+l)!='\0'; l++);  //finding length of string

   for(i=0; i<l; i++)
   {
   if(*(p+i)!='\0')   //not to repeat again same char
   {
   count=1;
    for(j=i+1; j<l; j++)
     {
       if(*(p+j)==*(p+i))
       {
           count++;
           *(p+j)='\0';  // not to repeat again same char
       }

     }
   printf("\n%c is %d times",*(p+i),count);
    }
   }
}
