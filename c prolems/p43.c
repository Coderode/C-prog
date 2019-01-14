//to find number of white spaces in a string
#include<stdio.h>
#include<conio.h>
int white_space(char*);
main()
{
    char str[30];//{"sandeep\tok this is\n\nok"};
    int count;
    printf("Enter a string:\n");
    gets(str);
    //puts(str);
    count=white_space(str);
    printf("there are %d white spaces in the string\n",count);
    getch();
}
int white_space(char *p)   //function with pointer
{
    int count=0,i;
    for(i=0; *(p+i)!='\0'; i++)
    {
        if(*(p+i)==' ')
            count++;
        if(*(p+i)=='\t')
            count++;
        if(*(p+i)=='\v')  //ctrl+k
            count++;
    }
    return count;
}

