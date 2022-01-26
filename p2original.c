#include<stdio.h>
int input()
{
  printf("enter the number\n");
  int a;
  scanf("%d",&a);
  return a;
}
int add(int a,int b)
{
  int c;
  c=a+b;
    return c;
}
void output(int a,int b,int sum)
{
  printf("sum of %d+%d is %d",a,b,sum);
  printf("sum of %d+%d is %d\n",a,b,sum);
}
int main()
{
  int x,y,z;
  x=input();
  y=input();
  z=add(x,y);
  output(x,y,z);
  return 0;
} 