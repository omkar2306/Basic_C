//addition of even numbers

//addition of odd numbers

#include<stdio.h>
void even()
{
int i=2,sum=0,n;
printf("limit is");
scanf("%d",&n);
while(i<=n)
{
sum=sum+i;
i=i+2;
}
printf("%d\n",sum);
}

void odd()
{
int i=1,sum=0,n;
printf("limit is");
scanf("%d",&n);
while(i<=n)
{
sum=sum+i;
i=i+2;
}
printf("%d\n",sum);
}
void main()
{
even();
odd();
}
