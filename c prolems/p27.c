#include<stdio.h>
#include<conio.h>
int tower(int,char,char,char);  //function dec
int count=0;
main()
{
    int i,n;
    printf("enter number of disks:\n");
    scanf("%d",&n);
    count=tower(n,'A','B','C');
    printf("minimum possible movements=%d",count);
    getch();
}
int tower(int n,char beg,char aux,char end)
{
    static int disk;
    if(n==1)
    {
        count++;
        printf("move disk %d  from %c to %c\n",disk,beg,end);
    }
    else
    {
        disk=n-1;

        tower(n-1,beg,end,aux);  //recursion
        disk=n;

        tower(1,beg,aux,end);
        disk=n-1;
        tower(n-1,aux,beg,end);

    }
    return count;
}
