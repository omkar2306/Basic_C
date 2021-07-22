//check the no is strong number or not

#include<stdio.h>
int main()
{
int i,n,temp,pro=1,sum=0,j;
printf("\n enter the no");
scanf("%d",&n);
temp=n;
while(n>0)
{
pro=1;
j=n%10;
n=n/10;
for(i=j;i>0;i--)
{
pro=pro*i;
}
sum=sum+pro;
}
if(sum==temp)
{
printf("\nthis number is strong number");

}
else
{
printf("\n number are not stromg number");
}
}
