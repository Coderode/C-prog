

#include<stdio.h>
#include<string.h>
main()
{
    FILE *fp;
    int i;
    char chr;
    fp=fopen("text.txt","r+");
    if(fp==NULL)
    {
        printf("file can not open\n");
        exit(1);
    }
    chr=fgetc(fp);
    while(!feof(fp))
    {
    printf("%c",chr);
    chr=fgetc(fp);
    }
    fclose(fp);
    getchar();

}
