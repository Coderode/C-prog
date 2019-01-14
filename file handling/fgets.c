

#include<stdio.h>
#include<string.h>
main()
{
    FILE *fp;
    int i;
    char str[10];
    fp=fopen("text.txt","r");
    if(fp==NULL)
    {
        printf("file not found!\n");
        exit(1);
    }
    while(fgets(str,10,fp)!=NULL)
    {
    printf("%s",str);
    }
    fclose(fp);
    getchar();

}

