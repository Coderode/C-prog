#include<stdio.h>
#include<conio.h>
#include<string.h>
void reverse_string(char [],int,int);
main()
{
    char arr[20];
    printf("Enter a string to reverse it:\n");
    gets(arr);
    reverse_string(arr,strlen(arr)-1,0);
    getch();
}
void reverse_string(char arr[],int l,int i)
{
    char ch;
    if(i>(l+i)/2)
    {puts(arr);
    return;}
    ch=arr[i];
    arr[i]=arr[l];
    arr[l]=ch;
    reverse_string(arr,l-1,i+1);
    return;
}
