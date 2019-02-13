#include<stdio.h>
#include<conio.h>
void main()
{
  int n,sum=0,i,m;
  printf("Enter two numbers");
  scanf("%d",&n);
  for(i=1;i<=5;i++)
  {
    sum=i*n;
    printf("\n%d",sum);
  }
   getch();
}
