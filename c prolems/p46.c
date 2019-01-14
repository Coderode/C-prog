//all arithmetic operations on rational numbers
#include<stdio.h>
#include<conio.h>
int lcm(int,int);
void reduce(int,int);
struct rational  //structure for rational number
{
    int p,q;
};
main()
{
  int opt,p,q;
  struct rational rat1,rat2; //two structure variables
  rat1.q=1;  //initial value for only p type
  rat2.q=1;
  printf("Enter first rational number(p1/q1 & q1!=0):\n");  //fist number
  scanf("%d/%d",&rat1.p,&rat1.q);   // separator /  for scanf here
  if(rat1.q==0)
  {
   printf("not a rational number!!");
  exit(0);
  }
  printf("Enter second rational number(p2/q2 & q2!=0):\n"); //second number
  scanf("%d/%d",&rat2.p,&rat2.q);  // separator / for entering data
  if(rat2.q==0)
  {
      printf("not  a rational number !!");
      exit(0);
  }

  while(1) //for repeating operations
  {
  printf("arithmetic operations:\n"); //operations
  printf("1.addition\n");
  printf("2.subtraction\n");
  printf("3.multiplication\n");
  printf("4.division\n");
  printf("5.exit\n");
  printf("select option:\n");
  scanf("%d",&opt);
  switch(opt)   //all different operations
  {
      //addition
  case 1:
    q=lcm(rat1.q,rat2.q);  //LCM of q1 and q2
    p=((q/rat1.q)*rat1.p)+((q/rat2.q)*rat2.p);
    reduce(p,q);
    break;
    //subtraction
  case 2:
    q=lcm(rat1.q,rat2.q); //LCM of q1 and q2
    p=((q/rat1.q)*rat1.p)-((q/rat2.q)*rat2.p);
    reduce(p,q);
    break;
    //multiplication
  case 3:
    p=rat1.p*rat2.p;
    q=rat1.q*rat2.q;
    reduce(p,q);
    break;
    //division
  case 4:
    p=rat1.p*rat2.q;
    q=rat1.q*rat2.p;
    reduce(p,q);
    break;
  case 5: exit(0);
  default :printf("you entered wrong option!!");
  }
}
getch();
}
int lcm(int num1,int num2)  //to find LCM of two numbers
{
int lcm,max,i=1,temp;
max=num1>num2?num1:num2;
temp=max;
while(1)
{
    if(max%num1==0 && max%num2==0)  //LCM is divisible by both numbers
    {
        lcm=max;
        break;
    }
    i++;
    max=temp*i;//it increases in multiples of big number
}
return lcm;
}
void reduce(int p,int q) //to reduce the common factors of p and q
{
    int i=2,min;
    min=p<q?p:q;
    if(min<0)
    min=-(min);

    while(i<=min)
    {
        while(p%i==0&&q%i==0)
        {
            p=p/i;
            q=q/i;
        }
        i++;
    }
        if(q==1)  //result
        {
            printf("%d\n",p);
        }
        else
        {
            printf("%d/%d\n",p,q);
        }
}



