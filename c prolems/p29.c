//recursion to find a word is palindrome or not
#include<stdio.h>
#include<conio.h>
int palindrome(char [],int,int); //declaration
main()
{
    char arr[30];
    int l;
    printf("Enter a word to check if it is palindrome:\n");
    gets(arr);
    for(l=0; arr[l]; l++); //finding length of string
    palindrome(arr,0,l-1); //function call
    getch();
}
//function
int palindrome(char arr[],int i,int l)
{

    if(i<=(i+l)/2)
    {
    if(arr[i]!=arr[l])  //comparing initial and last characters
     {
       return (printf("this word is not a palindome\n"));
     }
    else
       return(palindrome(arr,i+1,l-1));  //recursion
    }
    else
       return (printf("this word is a palindrome\n"));//stopping condition
}
