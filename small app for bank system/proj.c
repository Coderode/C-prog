#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
void add_account();
void view();
void edit();
void transaction();
void erase();

struct Account
{
    int age;
    char name[30],Add[50],type[3],acc_no[10],Dob[11],phone[11];
    float balance;
}A;
FILE *fp;


int main()
{
  int opt;
  printf("-------------------Welcome to  bank system--------------------\n");
  while(1)
  {

      printf("\nmain menu\n");
      printf("1.add new account\n");
      printf("2.view all existing accounts\n");
      printf("3.edit in the existing accounts\n");
      printf("4.transactions\n");
      printf("5.delete account\n");
      printf("6.exit\n");
      printf("select option:\n");
      scanf("%d",&opt);
      switch(opt)
      {
          case 1:add_account();break;
          case 2:view();break;
          case 3:edit();break;
          case 4:transaction();break;
          case 5:erase();break;
          case 6:exit(0);
          default :printf("you entered wrong choice!!\n");
      }
  }
  getch();
}
void add_account()
{
  int i,n;
  char ch;

  fp=fopen("Bank_details.txt","ab");
  if(fp==NULL)
  {
      fp=fopen("Bank_details.txt","wb");
  }
  do
  {
  printf("How many accounts do you have to add:\n");
  scanf("%d",&n);
  for(i=1; i<=n; i++)
  {
    printf("Enter details:\n");
    printf("new account %d:\n",i);
    printf("Enter account number:\n");scanf("%s",A.acc_no);fflush(stdin);
    printf("Enter name:\n");gets(A.name);fflush(stdin);
    printf("Enter age:\n");scanf("%d",&A.age);
    printf("Enter DOB(dd/mm/yyyy):\n");scanf("%s",A.Dob);
    printf("Enter account type:\n");scanf("%s",A.type);
    printf("Enter phone no.:\n");scanf("%s",A.phone);fflush(stdin);
    printf("Enter postal address:\n");gets(A.Add);fflush(stdin);
    printf("Enter money to deposit 1st time:\n");scanf("%f",&A.balance);
    fwrite(&A,sizeof(A),1,fp);
  }
  printf("main menu press e                 to continue press c\n");
  fflush(stdin);
  scanf("%c",&ch);
  if(ch=='e')
  {
      fclose(fp);
    return;
  }
  }while(ch=='c');
  fclose(fp);
}
void view()
{
    int i=1;
    fp=fopen("Bank_details.txt","rb");
    if(fp==NULL)
    {
        printf("file does not exist!");
        exit(1);
    }
    printf("------------------------Welcome to view account details------------------------------\n");
    printf("-------------------------------------------------------------------------------------\n");
    printf("s.no.|accont number |Name            |acc type|phone no   |age|DOB     |Balance   |address\n");
    while(fread(&A,sizeof(A),1,fp)>0)
    {
        printf("%d    |%s        |%s  |%s    |%s |%d  |%s  |%f  |%s\n",i,A.acc_no,A.name,A.type,A.phone,A.age,A.Dob,A.balance,A.Add);
        i++;
    }
    fclose(fp);
}
void edit()
{
    char acc[10];
    int opt;
    fp=fopen("Bank_details.txt","rb+");
    if(fp==NULL)
    {
        printf("file does not exist!");
        exit(1);
    }
    printf("Enter account number to edit details:\n");
    fflush(stdin);
    gets(acc);
    rewind(fp);
    while(fread(&A,sizeof(A),1,fp)>0)
    {
        if(strcmp(acc,A.acc_no)==0)
        {
           printf("----------------------------------------Welcome to view account details------------------------------------\n");
    printf("-----------------------------------------------------------------------------------------------------------\n");
    printf("accont number     |Name               |acc type|phone no      |age|DOB      |Balance   |address\n");
     printf("%s    |%s         |%s    |%s           |%d  |%s   |%f  |%s",A.acc_no,A.name,A.type,A.phone,A.age,A.Dob,A.balance,A.Add);
     while(1)
     {
         printf("\nwhat to edit?\n");
         printf("1.account number\n");
         printf("2.name\n");
         printf("3.acc type\n");
         printf("4.phone no.\n");
         printf("5.age\n");
         printf("6.DOB\n");
         printf("7.Balance\n");
         printf("8.address\n");
         printf("9.main menu\n");
         printf("select option\n");
         scanf("%d",&opt);
         switch(opt)
         {
             case 1:printf("Enter account number:\n");scanf("%s",A.acc_no);break;
             case 2:printf("Enter name:\n");fflush(stdin);gets(A.name);break;
             case 3:printf("Enter account type:\n");scanf("%s",A.type);break;
             case 4:printf("Enter phone no.:\n");scanf("%s",A.phone);break;
             case 5:printf("Enter age:\n");scanf("%d",&A.age);break;
             case 6:printf("Enter DOB(dd/mm/yyyy):\n");scanf("%s",A.Dob); break;
             case 7:printf("Enter new Balance:\n");scanf("%f",&A.balance);break;
             case 8:printf("Enter postal address:\n");fflush(stdin);gets(A.Add);break;
             case 9:fclose(fp);return;
         }
     fseek(fp,-sizeof(A),SEEK_CUR);
     fwrite(&A,sizeof(A),1,fp);
     printf("edited succesfully\n");
     }
     break;
        }
    }
}
void transaction()
{
    int opt;
    float deposit,with;
    char acc[10];
    fp=fopen("Bank_details.txt","rb+");
    if(fp==NULL)
    {
        printf("file does not exist!");
        exit(1);
    }
    printf("-------------------Welcome to transaction details------------------------\n");


        printf("Enter account number for transaction:\n");fflush(stdin);
        gets(acc);
        while(fread(&A,sizeof(A),1,fp)>0)
        {
            if(strcmp(acc,A.acc_no)==0)
            {
                printf("acc no.      |name        |Balance   \n");
                printf("%s |%s   |%f\n",A.acc_no,A.name,A.balance);
                while(1)
                {
                printf("\n1.depsit money\n");
                printf("2.withdraw money\n");
                printf("3.view balance\n");
                printf("4.main menu\n");
                printf("select option:\n");fflush(stdin);
                scanf("%d",&opt);
                switch(opt)
                {
                case 1:
                    fflush(stdin);
                printf("Enter money to deposit:\n");scanf("%f",&deposit);
                A.balance=A.balance+deposit;
                printf("money deposit succesfully\n");
                break;
                case 2:
                printf("Enter money to withdraw:\n");fflush(stdin);scanf("%f",&with);
                A.balance=A.balance-with;
                printf("money withdrawn succesfully");
                break;
                case 3:fclose(fp);
                printf("acc no.      |name        |Balance   \n");
                printf("%s    |%s       |%f   ",A.acc_no,A.name,A.balance);
                break;
                case 4:fclose(fp);return;
                }
                fseek(fp,-sizeof(A),SEEK_CUR);
                fwrite(&A,sizeof(A),1,fp);
                }
                break;
            }

          }
}
void erase()
{
    FILE *ft;
    char acc[10],ch;
    do
    {
    fp=fopen("Bank_details.txt","rb");
    if(fp==NULL)
    {
        printf("file does not exist!");
        exit(1);
    }
    ft=fopen("temp.txt","wb");
    if(ft==NULL)
    {
        printf("file does not exist!");
        exit(1);
    }

    printf("to delete account:\n");fflush(stdin);
    printf("Enter account number:\n");fflush(stdin);
    gets(acc);
    rewind(fp);
    while(fread(&A,sizeof(A),1,fp)>0)
    {
        if(strcmp(acc,A.acc_no)!=0)
        {
         fwrite(&A,sizeof(A),1,ft);
        }
    }
    fclose(ft);
    fclose(fp);
    remove("Bank_details.txt");
    rename("temp.txt","Bank_details.txt");
    printf("account deleted succesfully\n");
    printf("delete another account? press   Y              main menu press e\n");
    fflush(stdin);
    scanf("%c",&ch);
    if(ch=='e')
        return;
    }while(ch=='Y');
}
