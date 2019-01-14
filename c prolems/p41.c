//function to find string length using pointer
#include<stdio.h>
#include<conio.h>
int string_length(char*);   //function definition
main()
{
    char str[20];
    int length;
    printf("Enter a string:\n");
    gets(str);
    length=string_length(str); //calling function
    printf("Length of string is:%d",length);
    getch();
}
int string_length(char *p)    //function with pointer
{
    int l;
    for(l=0; *(p+l)!='\0'; l++);   //to find length
    return l;
}
