//sum of first and last digit of number

#include<stdio.h>
void main()
{
int n,temp,sum=0;
printf("ENTER DIGIT NUMBER:\n");
scanf("%d",&n);
temp=n;
n=n%10;
printf("\nLAST DIGIT:");
printf("%d\n",n);
while(temp>10)
{
temp=temp/10;
}
printf("\nFIRST DIGIT:");
printf("%d\n",temp);
sum=n+temp;
printf("\nsum of first and last digit of number\n");
printf("%d",sum);
}
