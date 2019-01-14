//to print date in different format pointer
#include<stdio.h>
#include<conio.h>
main()
{
    int d[3];
    printf("Enter date format dd/mm/yyyy:\n");
    scanf("%d/%d/%d",d,d+1,d+2);
    if(*d>31||*(d+1)>12||*(d+1)<1||*d<1)
    printf("\ninvalid date!!");
    else
    {
    printf("format2:\n%d ",*d);
    switch(*(d+1))
    {
    case 1: printf("January,");break;
    case 2: printf("February,");break;
    case 3: printf("March,");break;
    case 4: printf("April,");break;
    case 5: printf("May,");break;
    case 6: printf("June,");break;
    case 7: printf("July,");break;
    case 8: printf("August,");break;
    case 9: printf("September,");break;
    case 10: printf("October,");break;
    case 11: printf("November,");break;
    case 12: printf("December,");break;
    }
    printf("%d",*(d+2));
    }
getch();
}
