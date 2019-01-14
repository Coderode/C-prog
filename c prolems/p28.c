//function to find distance between two points
#include<stdio.h>
#include<math.h>
#include<conio.h>
double distance(double,double,double,double);   //function declaration
void main()
{
    double x1,y1,x2,y2,dist;
    printf("Enter coordinates of point1(x1,y1):\n");
    scanf("%lf%lf",&x1,&y1);
    printf("Enter coordinates of point2(x2,y2):\n");
    scanf("%lf%lf",&x2,&y2);
    dist=distance(x1,y1,x2,y2);  //function call
    getch();
}
//function definition
double distance(double x1,double y1,double x2,double y2)
{
    double length;
    length=sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1))); //calculation
    printf("distance between point1 and point2 is:%lf",length);
    return length; //returning value
}
