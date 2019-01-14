//recursion function to find maximum from array of numbers
#include<stdio.h>
#include<conio.h>
int maximum(int [],int,int);
int max;  //global variable
main()
{

    int arr[30],num,i;
    printf("Enter the no. of values:\n");
    scanf("%d",&num);
    printf("Enter the values:\n");
    for(i=0; i<num; i++)
        scanf("%d",&arr[i]);
    max=arr[0];
    max=maximum(arr,num,0);
    printf("maximum value=%d",max);
    getch();
}

//function definition
int maximum(int arr[],int num,int i)
{

   if(i==num-1)
   return;
   else
    {
    if(arr[i+1]>max)
    {
    max=arr[i+1];
    maximum(arr,num,i+1);  //recursion
    }
    else
        maximum(arr,num,i+1);
    }
    return max;
}
