// to find diameter circumference and area of circle
#include <stdio.h>
#include<conio.h>
int main()
{
    float rad,pi,dia,cir,area;
    printf("Enter the radius of the circle(in cm):\n");
    scanf("%f",&rad);
    pi=3.14;
    dia=2*rad;
    cir=2*pi*rad;
    area=pi*rad*rad;
    printf("Diameter of the circle is: %f cm\n",dia);
    printf("Circumference of the circle is: %f cm\n",cir);
    printf("Area of the circle is: %f cm^2\n",area);
    getch();
}
