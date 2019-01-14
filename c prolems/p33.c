//to find frequency of each number in an array
#include<stdio.h>
#include<conio.h>
int main()
{
    int arr[20],freq[20],i,n,count,j;
    printf("Enter the number of values:\n");
    scanf("%d",&n);
    printf("Enter the values of data:\n");
    for(i=0; i<n; i++)
        {
        scanf("%d",&arr[i]);
        freq[i]=-1;   //assigning frequency of each element to -1
        }

//to find frequency
    for(i=0; i<n; i++)
    {
    if(freq[i]!=0)
    {
    count=1;
    for(j=i+1; j<n; j++)
    {
        if(arr[i]==arr[j])
           {
            count++;     //counting copy of same element
            freq[j]=0;  //to not to count frequency of same element
           }
    }
    freq[i]=count;  //if freq is not counted for this element before
    printf("number=%d   frequency=%d\n",arr[i],freq[i]);
    }
    }
    getch();
}
