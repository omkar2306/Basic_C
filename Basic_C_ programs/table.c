//table of any number

#include<stdio.h>
void main()
{
int n,i,sum=0;

printf("of which number you have table:\n");
scanf("%d",&n);
printf("table is:\n");
for(i=1;i<=10;i++)
{
sum=i*n;
printf("%d\n",sum);
}
}
