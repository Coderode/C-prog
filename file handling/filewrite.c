#include<stdio.h>
#include<string.h>
main()
{
    FILE *fp;
    int i;
    char s[]="hi this is sandeep and now i am going to start the basics of c\n";
    fp=fopen("text.txt","w");
    if(fp==NULL)
    {
        printf("file can not open\n");
        exit(1);
    }
    for(i=0; i<strlen(s); i++)
    fputc(s[i],fp);
    fclose(fp);
    getchar();

}
