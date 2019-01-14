
#include<stdio.h>
#include<string.h>
main()
{
    FILE *fp;
    int i;
    char string[100];
    printf("enter the string to write in the file:\n");
    gets(string);
    fp=fopen("text.txt","w");
    if(fp==NULL)
    {
        printf("file can not open\n");
        exit(1);
    }
   fputs(string,fp);
   fclose(fp);
   getchar();
}
