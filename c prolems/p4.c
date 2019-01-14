//to find decimal octal and hex equivalent of a character
#include <stdio.h>
#include<conio.h>
int main()
{
    char a;
    printf("Enter a character : \n");
    scanf("%s",&a);
    printf("decimal equivalent of a is:%d\n",a);
    printf("octal equivalent of a is:%o\n",a);
    printf("hexadecimal equivalent of a is:%x\n",a);
    getch();
}
