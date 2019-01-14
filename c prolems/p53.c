//inventory control
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
void add_prod();
void view();
void edit();
void buy();

struct inventory
{
    char pro_Id[20];
    char pro_name[20];
    int min_stock,present_stock;
    float price_pp;

};
int main()
{

int choice;
printf("-----Welcome to stock details-----\n");

   while(1)
   {
       printf("\nmain menu:\n");
   printf("1.to add new products in the stock\n");
   printf("2.to edit in the available products\n");
   printf("3.to view all available products in the stock\n");
   printf("4.to check to buy which product\n");
   printf("5.exit\n");
   printf("Select from above:\n");
   scanf("%d",&choice);
   switch(choice)
   {
       case 1:add_prod(); break;
       case 2:edit();break;
        case 3:view(); break;
       case 4:buy();break;
       case 5:exit(0);
       default :printf("you entered wrong choice please type again\n");

   }
   }

   getch();
}

void view()
{
    FILE *fp;
    struct inventory inv;
    int i=1;
    fp=fopen("inventory_control.txt","rb");
    if(fp==NULL)
    {
        printf("file does not exists");
        exit(1);
    }
    printf("-------------------------------- stock details---------------------------------\n");
    printf("-------------------------------------------------------------------------------\n");
    printf("S.no.|product Id  |product name    |minimum stock|present stock|price per piece\n");
    printf("-------------------------------------------------------------------------------\n");
   while(fread(&inv,sizeof(inv),1,fp)>0)
   {
   printf("%d.   |%s         |%s           |%d           |%d            |%f\n",i,inv.pro_Id,inv.pro_name,inv.min_stock,inv.present_stock,inv.price_pp);
    i++;
   }
   fclose(fp);
}

void add_prod()
{
    FILE *fp;
    struct inventory I;
    int n,i;
    fp=fopen("inventory_control.txt","ab");
    if(fp==NULL)
    {
        printf("file does not exists");
        exit(1);
    }
    printf("-----Welcome to stock details-----\n");
    printf("Enter number of product to add in stock:\n");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
   {
       printf("record %d:",i);
       printf("Enter details:\n");
       printf("product Id:\n");scanf("%s",&I.pro_Id);
       printf("product name:\n");scanf("%s",&I.pro_name);
       printf("min stock:\n");scanf("%d",&I.min_stock);
       printf("present stock:\n");scanf("%d",&I.present_stock);
       printf("price per piece:\n");scanf("%f",&I.price_pp);
       fwrite(&I,sizeof(I),1,fp);
   }
   fclose(fp);
}
void buy()
{
    FILE *fp;
    struct inventory I;
    int quantity,count=0,i;
    float price,total=0;
    char Id[20];
    fp=fopen("inventory_control.txt","rb+");
     if(fp==NULL)
    {
        printf("file does not exists");
        exit(2);
    }
    printf("Products which have to buy\n");
    while(fread(&I,sizeof(I),1,fp)==1)
    {
        if(I.present_stock<I.min_stock)
        {
            printf("Products which are less than min stock:\n");
            printf("-------------------------------------------------------------------------------\n");
      printf("product Id  |product name    |minimum stock|present stock|price per piece\n");
      printf("-------------------------------------------------------------------------------\n");
      printf("%s         |%s           |%d           |%d            |%f\n",I.pro_Id,I.pro_name,I.min_stock,I.present_stock,I.price_pp);
      count++;
        }
    }
    fclose(fp);
    if(count==0)
    {
        printf("minimum stock in fullfilled no need right now!!\n");
    }
    if(count!=0)
    {
    for(i=1; i<=count; i++)
    {
    printf("Order:%d\n",i);
    printf("Enter product Id:\n");scanf("%s",Id);
    printf("Enter  quantity:\n");scanf("%d",&quantity);
    printf("Enter price per quantity:\n");scanf("%f",&price);
    total=total+price*quantity;
    }
    printf("------------------total amount=%f\n",total);
    }
}
void edit()
{
    FILE *fp;
    struct inventory I;
    char Id[20];
    long int recsize;
    int ans;
    fp=fopen("inventory_control.txt","rb+");
     if(fp==NULL)
    {
        printf("file does not exists");
        exit(1);
    }
    recsize=sizeof(I);
    printf("Enter product Id for editing:");
    scanf("%s",Id);
    rewind(fp);
    while(fread(&I,recsize,1,fp)==1)
    {
    if(strcmp(Id,I.pro_Id)==0)
    {
      printf("-------------------------------------------------------------------------------\n");
      printf("product Id  |product name    |minimum stock|present stock|price per piece\n");
      printf("-------------------------------------------------------------------------------\n");
      printf("%s         |%s           |%d           |%d            |%f\n",I.pro_Id,I.pro_name,I.min_stock,I.present_stock,I.price_pp);
      while(1)
      {
      printf("what to edit:\n");
      printf("1.ID\n");
      printf("2.product name\n");
      printf("3.min stock\n");
      printf("4.present stock\n");
      printf("5.price\n");
      printf("6.main menu\n");
      printf("select option:\n");
      scanf("%d",&ans);
      switch(ans)
      {
          case 1:printf("Enter new Id:\n"); scanf("%s",&I.pro_Id[0]); break;
          case 2:printf("Enter new name:\n");scanf("%s",&I.pro_name[0]);break;
          case 3:printf("Enter min stock:\n");scanf("%d",&I.min_stock);break;
          case 4:printf("Enter present stock:\n");scanf("%d",&I.present_stock);break;
          case 5:printf("Enter new price:\n");scanf("%f",&I.price_pp);break;
          case 6:fclose(fp);return;
      }
     fseek(fp,-recsize,SEEK_CUR);
     fwrite(&I,recsize,1,fp);
      }
     break;
    }

    }
}
