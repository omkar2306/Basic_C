//sum of n numbers

#include<stdio.h>
void main()
{
int n,i=1,sum=0;
printf("last n. number\n");
scanf("%d",&n);
while(i<=n)
{
sum=sum+i;
i++;
}
printf("%d",sum);
}

