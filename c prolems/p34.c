//selection sort ||ascending order
#include<stdio.h>
#include<conio.h>
int minimum(int [],int,int);
int maximum(int [],int,int);
main()
{
    int arr[50],num,i,pos,temp,select;
    printf("Enter the number of values:");
    scanf("%d",&num);
    printf("enter the values:\n");
    for(i=0; i<num; i++)
    scanf("%d",&arr[i]);  //entering values
    printf("\n1.In ascending order");
    printf("\n2.In descending order");
    printf("\nSelect the option:\n");
    scanf("%d",&select);
    switch(select)
    {
        //For ascending order
    case 1:
    printf("\nAscending order:\n");
    for(i=0; i<num-1; i++)   //num-1 times swaping
    {
        temp=arr[i];
        pos=minimum(arr,i,num);  //finding position of min value
        arr[i]=arr[pos];
        arr[pos]=temp;
    }
    for(i=0; i<num; i++)
     printf("%d  ",arr[i]);
     break;
    case 2:
        //For descending order
     printf("\nDescending order:\n"); //num-1 times swaping
     for(i=0; i<num-1; i++)
     {
         temp=arr[i];
         pos=maximum(arr,i,num);  //finding position of max vale
         arr[i]=arr[pos];
         arr[pos]=temp;
     }
     for(i=0; i<num; i++)
        printf("%d  ",arr[i]);
        break;
    default : printf("you entered wrong choice!!");
    }
getch();
}
int minimum(int arr[],int i,int num)
{
    int j,pos,min;
    min=arr[i];
    pos=i;
    j=i+1;
    while(j<num)
    {
        if(min>arr[j])
            {
            min=arr[j];
            pos=j;
            }
        j++;
    }
    return pos;
}
int maximum(int arr[],int i, int num)
{
    int j,pos,max;
    max=arr[i];
    pos=i;
    j=i+1;
    while(j<num)
    {
        if(max<arr[j])
        {
            max=arr[j];
            pos=j;
        }
        j++;
    }
    return pos;
}
