//to count number of keywords in a c program
#include<stdio.h>
#include<string.h>
#include<conio.h>
main()
{
    FILE *fp;  //file pointer
    char chr,str[50],prog[10];
    int  count,j;

   char keyword[32][10]={"auto","double","int","struct","break","else","long",
       "switch","case","enum","register","typedef","char",
       "extern","return","union","const","float","short",
       "unsigned","continue","for","signed","void","default",
       "goto","sizeof","voltile","do","if","static","while"} ;  //32 keywords of c
       printf("Enter program name with extension:\n");
       gets(prog);  //getting program name
       fflush(stdin);
       fp=fopen(prog,"r");  //opening file in read mode
       fscanf(fp,"%s",&str[0]);  //getting string from file in string str
       //printf("%s ",str);
       count=0;
       while(!feof(fp))  // repeat upto end of file
       {

            for(j=0; j<32; j++)  //compare to all keywords
            {
                if(!strcmp(str,keyword[j]))   //if strings are equal it return 0
                {
                    count++;  //count increase by 1 if equal
                }
            }
            for(j=0; str[j]!='\0'; j++)   //empty the sting to take next string from file
            str[j]='\0';
            fscanf(fp,"%s",&str[0]);  //taking next string in str
           // printf("%s ",str);
        }
       fclose(fp);
       printf("number of keywords in the c program %s is: %d",prog,count);
       getch();
}
