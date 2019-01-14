#include<stdio.h>
#include<string.h>
#include<malloc.h>
 struct std
{
    int *age;
    char *sname,*roll;

};
//typedef struct student std;
int main()
{
int i;
struct std *s[2];
 for(i=0; i<2; i++)
 {
 s[i]=(struct std*)malloc(22);
 }
 for(i=0; i<2; i++)
 {
    scanf("%s",&s[i].sname);
    scanf("%s",s[i].roll);
    scanf("%d",s[i].age);
 }
 for(i=0; i<2; i++)
 {
     printf("%s\n%s\n%d",(s+i)->sname,(s+i)->roll,(s+i)->age);
 }

}
