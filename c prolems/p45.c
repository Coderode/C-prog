//word equivalent of an amount
#include<stdio.h>
#include<conio.h>
void word_equivalent(int *,int *,int);
main()
{
    int d[4];
    char digit[4],ask;
    int p[4],i,j,l;
    start:
    printf("Enter amount(max 4 digit):\n");
    gets(digit); //amount in char form
    for(l=0; digit[l]!='\0'; l++);
    for(i=0; i<l; i++)
    d[i]=digit[i]-48; //amount in int form e.g. 1=49-48
    j=l-1;
    i=0;
    while(j>=0)
    {
        p[i]=j;  //power of each digit
        j--;
        i++;
    }
    word_equivalent(p,d,l);  //passing arguments
    printf("\n\ndo you want to continue?(Y or N)\n\n");
    scanf("%c",&ask);
    if(ask=='N')
    exit(0);
    fflush(stdin);
    goto start;
    getch();
}
void word_equivalent(int *p,int *d,int n)
{
    char char2[10][10]={"ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen"};
    char char1[9][7]={"one","two","three","four","five","six","seven","eight","nine"};
    char char3[10][10]={"twenty","thirty","fourty","fifty","sixty","senventy","eighty","ninty","hundred","thousand"};
    int i;
    printf("Word equivalent is:\n");

     for(i=0; i<n; i++)
     {
    if(*(p+i)==3&&(*(d+i)>0))  //for base thousand
    {
        printf("%s %s ",char1+(*(d+i)-1),char3+9);
    }

    else if(*(p+i)==2&&(*(d+i)>0))  //for base hundred
    {
        printf("%s %s ",char1+(*(d+i)-1),char3+8);
    }
    else if(*(p+i)==1&&(*(d+i))==1)   //for base 10 and 1
    {
        if(*(d+i+1)>=0&& (*(d+i+1))<=9) //for 10-19
        {
            printf("%s ",char2+(*(d+i+1)));
        }

    }
    else if(*(p+i)==1&&(*(d+i))>1)  //for base 10 and 1 (>=20)
    {
        if(*(d+i+1)==0)
        printf("%s ",char3+(*(d+i)-2)); //for multiple of 10
        else
        printf("%s %s ",char3+(*(d+i)-2),char1+(*(d+i+1)-1)); //not in multiple of 10
    }
    else if(n==1)  //for single digit only
    {
        printf("%s ",char1+(*(d+i)-1));
    }

    }

}



