//to generate pay slip of employee using file
#include<stdio.h>
#include<conio.h>
struct pay_slip
{
   char id[10],name[20],date[20];
   int basic,da,hra,others,earn,pf,esi,tax,tds,ded,net;
};
main()
{
    FILE *fp;
    char ans;
    int i,n;
    struct pay_slip s1;
    while(1)
    {
    printf("Please give informations to generate pay slip for employee\n");
    printf("Enter number of employees to generae pay slip:\n");
    scanf("%d",&n);
    fflush(stdin);
    for(i=1; i<=n; i++)
    {
    //getting entries
    printf("\nRecord%d\n",i);
    printf("\nenter the empoyee id:\n");
    gets(s1.id);
    printf("enter the empoyee name:\n");
    gets(s1.name);
    //for earnings
    printf("enter earnings details:\n");
    printf("basic:");
    fflush(stdin);
    scanf("%d",&s1.basic);
    printf("DA:");
    scanf("%d",&s1.da);
    printf("HRA:");
    scanf("%d",&s1.hra);
    printf("others:");
    scanf("%d",&s1.others);
    s1.earn=s1.basic+s1.da+s1.hra+s1.others;   //total earnings
    printf("\ntotal earning=%d\n",s1.earn);
    //for deduction
    printf("Enter deduction details:\n");
    printf("P.F.:");
    scanf("%d",&s1.pf);
    printf("ESI:");
    scanf("%d",&s1.esi);
    printf("taxes:");
    scanf("%d",&s1.tax);
    printf("TDS:");
    scanf("%d",&s1.tds);
    fflush(stdin);
    s1.ded=s1.pf+s1.esi+s1.tax+s1.tds;  //total deduction
    printf("\ntotal deduction=%d\n",s1.ded);
    s1.net=s1.earn-s1.ded;          //net payment
    printf("\nnet payment=%d\n",s1.net);
    printf("enter date(dd/mm/yyyy):\n");
    gets(s1.date);


    fp=fopen("payslip.txt","a");  //opening file in append mode
    if(fp==NULL)
    {
        printf("file not found");
        exit(1);
    }
    //printing in file
   fputs("\t\tTHE ROYAL TEXTILE COMPANY\n\t\tshalimar bagh new delhi\n\n",fp);  //company name
   fprintf(fp,"Employee Name: %s\n",s1.name);
   fprintf(fp,"Employee ID: %s\n",s1.id);
   fprintf(fp,"Date: %s",s1.date);
   fputs("\nEarnings:\t\t\t\t\tDeductions:\n",fp);
   fprintf(fp,"Basic:%d\t\t\t\tP.F.:%d\n",s1.basic,s1.pf);
   fprintf(fp,"DA:%d\t\t\t\t\tESI:%d\n",s1.da,s1.esi);
   fprintf(fp,"HRA:%d\t\t\t\t\tTAXES:%d\n",s1.hra,s1.tax);
   fprintf(fp,"ohther:%d\t\t\t\t\tTDS:%d\n",s1.others,s1.tds);
   fprintf(fp,"total earning:%d\t\t\t\ttotal deduction:%d\n",s1.earn,s1.ded);
   fprintf(fp,"\nNet payment:%d\n\n",s1.net);
   fprintf(fp,"----------------------------------------------------------------------------------------\n");
   fclose(fp);
    }
    printf("pay slip created successfully in the text file!\n");
    printf("do you want to contine?(Y/N):\n");    //if want to repeat
    scanf("%c",&ans);
    if(ans=='N')
    break;
    }

   getch();
}
