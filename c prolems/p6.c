// to find gross salary of each employees
#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
int main()
{
    int a,n,i,c,fix,choose;
    float gross,total;
    while(1){
    printf("choose the operation:\n");
    printf("1.To find grossPay for last week\n");
    printf("2.exit\n");
    scanf("%d",&choose);
    switch(choose)
    {
    case 1 :
    printf("Enter number of employees:\n");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        printf("\nEnter working hours of employee %d of last week:\n",i);
        scanf("%d",&a);
        if(a>=40)
        {
            printf("Enter hourly rate of this employee:");
            scanf("%d",&c);
            fix=40*c;    //fix salary

            gross=(a-40)*c*3/2;    //gross salary
            printf("gross rate is \n%d /hr\n",c*3/2);
            total=fix+gross;
            printf("gross salary is Rs.%f\n",gross);
            printf("total salary is Rs.%f\n\n\n",total);
        }
        else
        {
            printf("Enter hourly rate of this employee:");
            scanf("%d",&c);
            fix=a*c;
            gross=0;
            total=fix;
            printf("gross salary is Rs.%f\n",gross);
            printf("total salary is Rs.%f\n\n\n",total);

        }

    };
    break;
    case 2: exit(0);
    default : printf("invalid choice!!\n");
    }
    }
    getch();
}
