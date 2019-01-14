//to copy content of one file to another file
#include<stdio.h>
#include<string.h>
#include<conio.h>
void copy_content(FILE *,FILE *);
main()
{
    FILE *ifp,*ofp;     //file type pointers
    ifp=fopen("file1.txt","r"); //opening files
    ofp=fopen("file2.txt","w");
    if(ifp==NULL)
    {
        printf("file can not open file1\n");
        exit(1);
    }
    if(ofp==NULL)
    {
        printf("file can not open file2\n");
        exit(1);
    }
    copy_content(ifp,ofp); //calling function to copy content
    printf("copied successfully\nplease see the content in the file.");
    getch();
}
void copy_content(FILE *ifp,FILE *ofp)
{
    char chr;
    chr=fgetc(ifp);  //getting character from input file to character variable
    while(!feof(ifp))      // upto end of file
    {
    fputc(chr,ofp);    //writing to output file content of character variable
    chr=fgetc(ifp);    //getting next character in variable
    }
    fclose(ifp);      //closing files
    fclose(ofp);
}
