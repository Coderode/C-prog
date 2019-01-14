//bubble sort
#include<stdio.h>
#include<conio.h>
main()
{
    int arr[30],i,num,round,temp;
    printf("enter number of values:\n");
    scanf("%d",&num);
    printf("Enter the values:\n");  //entering the values
    for(i=0; i<num; i++)
        scanf("%d",&arr[i]);


//for ascending order
    for(round=1; round<=num-1; round++)  //no. of rounds=n-1
    {
        for(i=0; i<=num-1-round; i++)  //storing last value with max
        {
            if(arr[i]>arr[i+1])
            {
                temp=arr[i];
                arr[i]=arr[i+1];  //swaping two values
                arr[i+1]=temp;
            }
        }
    }
    printf("ascending order:\n");  //printing
    for(i=0; i<num; i++)
    printf("%d  ",arr[i]);


    //for descending order
    for(round=1; round<=num-1; round++)
    {
        for(i=0; i<=num-1-round; i++) //storing last value with min
        {
            if(arr[i]<arr[i+1])
            {
                temp=arr[i];
                arr[i]=arr[i+1]; //swaping of two values
                arr[i+1]=temp;
            }
        }
    }
    printf("\ndescending order:\n");//printing
    for(i=0; i<num; i++)
        printf("%d  ",arr[i]);
getch();

}
