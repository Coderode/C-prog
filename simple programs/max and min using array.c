#include<stdio.h>
main()
{
    int arr[30],i,num,max,min,*pt;
    pt=arr;
    printf("Enter the number of integers:");
    scanf("%d",&num);
    printf("\nEnter the numbers:\n");
    for(i=0; i<num; i++)
    {
        printf("%d.",i+1);
        scanf("%d",pt+i);
    }
   // pt=arr;
    max=*pt;
    min=*pt;
    for(i=1; i<num; i++)
    {
    if(arr[i]>max)
        max=arr[i];
    if(arr[i]<min)
        min=arr[i];
    }
    printf("maximum value is:%d",max);
    printf("\nminimum value is:%d",min);
}
