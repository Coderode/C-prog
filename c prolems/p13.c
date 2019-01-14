//Encryption and decryption of 4 digit  data
#include <stdio.h>
#include <conio.h>
//int power(int,int);
int main()
{
    int num,rev,count,temp,enc,dec;
    int code1,code2,code3,code4,choice;
    while(1) //for repeating whole process
    {
    printf("\n1.Encryption of data\n");
    printf("2.decryption of encrypted data to original form\n");
    printf("3.exit\n");
    printf("\nSelect the operation:\n");
    scanf("%d",&choice);
    switch(choice)  //choice for encryption and decryption
    {
    case 1:

    //Encryption
    printf("Enter a 4 digit integer:\n");
    scanf("%d",&num);
    temp=num;
    count=0;
        while(count<=3)
        {
            rev=temp%10;  //taking last digit

            enc=(rev+7)%10;   //encoding

            if(count==0)      //storing to temporary files
                code4=enc;
            if(count==1)
                code3=enc;
            if(count==2)
                code2=enc;
            if(count==3)
                code1=enc;
            count++;
            temp=temp/10;


        }
         if(count>4||count<4){
        printf("interrupted!!it is not a 4 digit number!!\n");
        }
       if(count==4)
        printf("Encrypted data is %d%d%d%d\n",code3,code4,code1,code2);
        break;
        //decryption
    case 2:
        printf("Enter the 4 digit encrypted digit:\n");
        scanf("%d",&num);
        count=0;
        temp=num;
        while(temp>0)
        {
            rev=temp%10;
            dec=(rev+3)%10; //rev+10-7
            if(count==0)
                code2=dec;
            if(count==1)
                code1=dec;
            if(count==2)
                code4=dec;
            if(count==3)
                code3=dec;
            count++;
            temp=temp/10;
        }
        if(count>4||count<4){
        printf("interrupted!!it is not a 4 digit number!!\n");
        }
       if(count==4)
        printf("Decrypted (original) data is %d%d%d%d\n",code1,code2,code3,code4);
        break;

     case 3: exit(0);
     default : printf("\nInvalid choice!!\n");
    }
    }
getch();
}

/*
//power function
int power(int a,int b)
{
    int c,i;
    c=1;
  for(i=1; i<=b; i++)
  {
      c=c*a;
  }
  return c;
}*/
