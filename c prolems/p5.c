//to find total salary of salesperson's
#include <stdio.h>
#include<conio.h>
int main()
{
    int n,i,fix,w;
    float extra,total,gross,a;

    printf("Number of salesperson :\n");
    scanf("%d",&n);
    fix=1000;
    printf("fixed salary of each salesperson is: Rs %d /week.\n\n",fix);
    printf("\ntotal earning=fixed salary+ a percentage of gross sales\n\n");
    printf("Enter week number:\n");
    scanf("%d",&w);
    printf("\nEnter gross sales of each salesperson :\n\n");
    for(i=1; i<=n; i++)
    {
        printf("person %d. Rs ",i);
        scanf("%f",&gross);
        printf("percentage of gross sales of this salesman is:");
        scanf("%f",&a);
        extra=(a/100)*gross;
        total=fix+extra;
        printf("total earning of salesperson %d is:Rs %f \n\n\n",i,total);

        }

        getch();


}
