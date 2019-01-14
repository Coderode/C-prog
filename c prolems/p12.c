//to find that three numbers form the sides of a triangle
#include <stdio.h>
#include<conio.h>
int main()
{
    int a,b,c;
    printf("Enter three non zero integers :\n");
    scanf("%d %d %d",&a,&b,&c);
    if(a<=0||b<=0||c<=0)
       {printf("you did not entered  non zero integers!!");
    exit(0);}
    if((a+b)>c&&(b+c)>a&&(c+a)>b)  //the sum of any two sides of a triangle must be greater than the third one
        printf("these integers can represent sides of a triangle!\n");
        else
            printf("NO,these integers can not represent sides of a triangle!!\n");

        if((a+b)==c||(b+c)==a||(c+a)==b)
            printf("these integers can form degenerate triangle(collinear vertices)");
    getch();
}
