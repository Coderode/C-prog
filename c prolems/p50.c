//program to rename a file
#include<stdio.h>
#include<conio.h>
main()
{
    int retn;
    char oldn[10],newn[10];
    start:
    printf("Enter the old name with extension:\n");
    gets(oldn);   //getting old name
    printf("Enter the new name with extension:\n");
    gets(newn);   //getting new name
    retn=rename(oldn,newn);  //renaming   return values 0 and -1
    if(retn==0)
        printf("File renamed successfully\n");
    else
        {
        printf("error! please enter entries again\n");
        goto start;
        }
        getch();
}
