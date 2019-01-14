
#include<stdio.h>
#include<string.h>
main()
{
    FILE *fp;
    int i;
    char string[100];
    printf("enter the string to write in the file:\n");
    gets(string);
    fp=fopen("text.txt","a");
    if(fp==NULL)
    {
        printf("file can not open\n");
        exit(1);
    }
    for(i=0; i<strlen(string); i++)
    fputc(string[i],fp);
    fclose(fp);
    getchar();

}
