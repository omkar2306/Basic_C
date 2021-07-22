//sum of digits of number 

#include<stdio.h>
void main()
{
int n,i,sum=0;
printf("TAKE ANY NUMBER\n");
scanf("%d",&n);
while(n>0)
{
i=n%10;
n=n/10;
sum=sum+i;
}
printf("\nsum of digit::");
printf("%d",sum);
}
