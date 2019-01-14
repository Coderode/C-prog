
#include<stdio.h>
struct book
{
    int bookid;
    char title[20];
    float price;
};
void main()
{
    struct book b1;
    FILE *fp;
    fp=fopen("test.txt","ab");
    printf("Enter bookid,title and price:\n");
    scanf("%d",&b1.bookid);
    fflush(stdin);
    gets(b1.title);
    //fflush(stdin);
    scanf("%f",&b1.price);
    fwrite(&b1,sizeof(b1),1,fp);
    fclose(fp);
}
