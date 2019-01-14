//recursive function to find average of n array of floats
#include<stdio.h>
#include<conio.h>
float average(float [],int,int);
main()
{
    float arr[20],avg;
    int num,i;
    printf("Enter the no. of floats to find average:\n");
    scanf("%d",&num);
    printf("Enter the values:\n");
    for(i=0; i<num; i++)
        scanf("%f",&arr[i]);  //taking values
    avg=average(arr,0,num); //calling function
    printf("average is :%f",avg);
    getch();
}
//recursion to find sum
float average(float arr[],int i,int num)
{
    if(arr[i]==0)
    {
        return 0;
    }
    else
    return (arr[i]/num+average(arr,i+1,num)); //summation with recursion
}
