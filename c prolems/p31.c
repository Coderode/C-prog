//to search an element using linear search
#include<stdio.h>
#include<conio.h>
 main()
{
    int arr[25]={13,24,56,43,22,33,44,78,65,12,4,5,12,43,35,9,7,6,33,22,99,88,78,23,1};
    int num,i;
    printf("Given array:\n");
    for(i=0; i<25; i++)
    printf("%d  ",arr[i]);
    printf("\nEnter a number to verify:\n");
    scanf("%d",&num);

    for(i=0; i<25; i++)
    {
      if(arr[i]==num) //searching
      {
      printf("%d is present in the given array of numbers at %d position",num,i+1);
       break; //going out of loop if true
      }
    }
    if(i==25) //if loop continues till end
    printf("%d is not present in the given array of numbers !!",num);
    getch();
}
