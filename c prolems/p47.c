//arithmetic operations on complex numbers
#include<stdio.h>
#include<conio.h>
struct complex  //structure
{
    float real,img;
};
float real,img;
void addition(struct complex,struct complex);
void subtraction(struct complex,struct complex);
void multiply(struct complex,struct complex);
void divide(struct complex,struct complex);
main()
{
    int opt;
    struct complex c1,c2;  //struct variables
    printf("Enter first complex number(a+ib):\n");  //first value
    scanf("%f+%fi",&c1.real,&c1.img);
    printf("Enter second complex number(c+id):\n");//second value
    scanf("%f+%fi",&c2.real,&c2.img);
    while(1)
    {   //menu
    printf("\n1.addition\n");
    printf("2.subtraction\n");
    printf("3.multipication\n");
    printf("4.division\n");
    printf("5.exit\n");
    printf("select option\n");
    scanf("%d",&opt);
    switch(opt)  //operations in function
    {
        case 1: addition(c1,c2); break;
        case 2: subtraction(c1,c2); break;
        case 3: multiply(c1,c2); break;
        case 4: divide(c1,c2); break;
        case 5: exit(0);
        default : printf("you entered wrong input!!\n");
    }
    }
    getch();
}
void addition(struct complex c1,struct complex c2)
{
    real=c1.real+c2.real;   //a+c
    img=c1.img+c2.img;  //b+d
    printf("\nresult=%f+%fi\n",real,img);
}
void subtraction(struct complex c1,struct complex c2)
{
    real=c1.real-c2.real; //a-c
    img=c1.img-c2.img;   //b-d
    printf("\nresult=(%f)+(%f)i\n",real,img);
}
void multiply(struct complex c1,struct complex c2)
{
    real=c1.real*c2.real-c1.img*c2.img; //ac-bd
    img=c1.real*c2.img+c1.img*c2.real;//ad+bc
    printf("\nresult=(%f)+(%f)i\n",real,img);
}
void divide(struct complex c1,struct complex c2)
{
    real=(c1.real*c2.real+c1.img*c2.img)/(c2.real*c2.real+c2.img*c2.img); //ac+bd/c^2+d^2
    img=(c1.img*c2.real-c1.real*c2.img)/(c2.real*c2.real+c2.img*c2.img);  //bc-ad/c^2+d^2
    printf("\nresult=(%f)+(%f)i\n",real,img);
}
