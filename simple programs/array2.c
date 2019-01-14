#include<stdio.h>
main()
{
    int num,i,arr[30],j;
    printf("Enter the number of integers:");
    scanf("%d",&num);
    printf("\nEnter the numbers:\n");
    for(i=0; i<num; i++)
    {
        printf("%d.",i+1);
        scanf("%d",&arr[i]);
        for(j=0; j<i; j++)
        {
            while(arr[j]==arr[i])
            {
            printf("this number already exit! \n please enter another number\n");
            scanf("%d",&arr[i]);
            }

        }
    }
    printf("you entered :\n");
    for(i=0; i<num; i++)
        printf("%d\n",arr[i]);
    getchar();
}





