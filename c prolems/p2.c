//to find sum avg and product of three integers
#include <stdio.h>
#include <conio.h>
int main()
{
    int a, b, c, i, sum=0, product=1, max, min;
    float avg;
    printf("Enter three integers:\n");
    //for entering three integers
    for (i=1; i<=3; i++)
    {
        printf("%d.",i);

        if (i==1)
            scanf ("%d",&a);
        if (i==2)
            scanf ("%d",&b);
        if (i==3)
            scanf ("%d",&c);
    }
    //for maximum and minimum

    if (a>b)
    {
        max=a;
        min=b;
    }
    else
    {
        max=b;
        min=a;
    }
    if ( c>max||c>min)
    {
        max=c;
        min=min;
    }
    if (c<max||c<min)
    {
        max=max;
        min=c;
    }


    printf ("largest of these values is: %d \n",max);
    printf ("smaller of these values is: %d \n",min);

    sum=a+b+c;
    product=a*b*c;
    avg=sum/3.0;
    printf("Sum of these numbers is: %d \n",sum);
    printf("Average of these numbers is: %f \n",avg);
    printf("Product of these numbers is: %d\n",product);

    getch ();
}
