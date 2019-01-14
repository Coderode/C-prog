//to convert number from one base to another base
//using recursion
#include<stdio.h>
#include<conio.h>
int power(int,int);
int converter(int [],int,int,int);
int converter2(int,int,int);
main()
{
    int base1,base2,i,j,dec;
    int string[20]={};
    char string2[20]={};
    printf("Enter a number with its base:\n");
    gets(string2);   //taking the actual input of number
    printf("base=\n");
    scanf("%d",&base1);
    //converting number in integer type using ascii codes of characters A=65 to F=70 and 0=48 to9=57
    for(i=0; string2[i]; i++)
        {
        string[i]=string2[i];
        if(string[i]>=48&&string[i]<=57)
            string[i]=string[i]-48;  //48-0=48
        if(string[i]>=65&&string[i]<=70)
        string[i]=string[i]-55;  //65-10=55
        }
 //checking for given base is ok or not
        for(j=0; j<i ; j++)
        {
            if(string[j]>=base1)
            {
                printf("Entered number is not in given base!!");
                exit(0);
            }
        }
        //entering second base to convert in
    printf("Enter the base to convert into:\n");
    scanf("%d",&base2);
    printf("this number in base %d is:",base2);
    if(base2==base1)
        {
        puts(string2);
        exit(0);
         }
         //for any base to decimal
    dec=converter(string,base1,i-1,0); //calling function   i-1=string length
    if(base2==10)
        printf("%d",dec);
        //for any base to other than decimal
    if(base2!=10)
     converter2(dec,base2,0);
     getch();
}
//for decimal
int converter(int string[],int base1,int i,int j)
{
  int dec;
    if(i<0)
        return 0;
    else
        return (string[i]*power(base1,j)+converter(string,base1,i-1,j+1));   //recursion
}
//for other than decimal
int converter2(int dec,int base2,int i)
{
    int arr[20];
    if(dec==0)
        return 0;
    else
        {
        arr[i]=dec%base2;
        converter2(dec/base2,base2,i+1); //recursion
        if(arr[i]>9)
           return printf("%c",(arr[i]+55));  //return is from back always so need not reverse the number
        else
           return printf("%d",arr[i]);
        }

}
//power function
int power(int base,int expo)
{
    int c,i;
    c=1;
  for(i=1; i<=expo; i++)
  {
      c=c*base;
  }
  return c;
}
