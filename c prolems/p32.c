//to search an element using binary search
//data must be in ascending or descending order
//it is for ascending order
#include<stdio.h>
#include<conio.h>
main()
{
    int arr[20]={1,4,6,7,8,9,12,14,16,18,20,25,30,40,45,50,60,70,75,80};
    int beg,end,mid,num,i;
    beg=0;
    end=19;
    for(i=0; i<20; i++)   //printing the values
    printf("%d  ",arr[i]);

    printf("\nEnter a number to search in the given array of numbers:\n");
    scanf("%d",&num);
    while(beg<=end)
    {
        mid=(beg+end)/2 ;//finding middle index
        if(arr[mid]==num)
        {
        printf("\n%d is available",num);
        break;
        }
        if(num<arr[mid])
        {
           end=mid-1; //moving to left
        }
        if(arr[mid]<num)
        {
            beg=mid+1;  //movting to right
        }
    }
    if(beg>end)
        printf("\n%d is not available",num);
    getch();
}
