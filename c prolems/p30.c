#include<stdio.h>
#include<conio.h>
main()
{
    int arr[30],i,n,count=0;
    printf("enter number of salespersons:\n");
    scanf("%d",&n);
    //fixed salary=1000/week
    printf("Enter gross sales of each salesperson:\n");
    for(i=0; i<n; i++)
    {
       printf("salesperson %d:\n",i+1);
       scanf("%d",&arr[i]);
       printf("total salary:\n");
       arr[i]=arr[i]*0.09+1000;
       printf("%d /week\n\n",arr[i]);
       if(arr[i]>1000)
        count++;
    }
    printf("\nnumber of salespersons who gross saled last week=%d\n\n",count);
    for(i=0; i<n; i++)
    printf("%d  ",arr[i]);
    printf("\nsalary range\t\tno. of salespersons\n");
    printf("1200-1299\t\t\t");
    count=0;
    for(i=0; i<n; i++)
    {
        if(arr[i]>=1200&&arr[i]<=1299)
         {
         count++;
         }
    }
    printf("%d\n",count);
    count=0;
    printf("1300-1399\t\t\t");
         for(i=0; i<n; i++)
         {
        if(arr[i]<=1399&&arr[i]>=1300)
            {
                count++;
            }
        }
        printf("%d\n",count);
        printf("1400-1499\t\t\t");
        count=0;
        for(i=0; i<n; i++)
    {
        if(arr[i]<=1499&&arr[i]>=1400)
         {
         count++;

         }
    }
    printf("%d\n",count);
    printf("1500-1599\t\t\t");
    count=0;
    for(i=0; i<n; i++)
    {

        if(arr[i]<=1599&&arr[i]>=1500)
         {
         count++;

         }
    }
    printf("%d\n",count);
    printf("1600-1699\t\t\t");
    count=0;
    for(i=0; i<n; i++)
    {

        if(arr[i]<=1699&&arr[i]>=1600)
         {
         count++;

         }
    }
    printf("%d\n",count);
    printf("1700-1799\t\t\t");
    count=0;
    for(i=0; i<n; i++)
    {

        if(arr[i]<=1799&&arr[i]>=1700)
         {
         count++;

         }
    }
    printf("%d\n",count);
    printf("1800-1899\t\t\t");
    count=0;
    for(i=0; i<n; i++)
    {

        if(arr[i]<=1899&&arr[i]>=1800)
         {
         count++;

         }
    }
    printf("%d\n",count);
    printf("1900-1999\t\t\t");
    count=0;
    for(i=0; i<n; i++)
    {

        if(arr[i]<=1999&&arr[i]>=1900)
         {
         count++;

         }
    }
    printf("%d\n",count);
     printf("2000 and over\t\t\t");
     count=0;
    for(i=0; i<n; i++)
    {

        if(arr[i]>=2000)
         {
         count++;

         }
    }
    printf("%d\n",count);

getch();

    }


