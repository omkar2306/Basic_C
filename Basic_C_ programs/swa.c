#include<stdio.h>
void main()
{
int n,last,temp=0,mid,temp1=0,mid1,x;

printf("take any number:->");
scanf("%d",&n);
x=n;
last=n%10;
n=n/10;

while(n>10)
{
mid=n%10;
temp=temp*10+mid;
n=n/10;
}

while(temp>0)
{
mid1=temp%10;
temp1=temp1*10+mid1;
temp=temp/10;
}
temp1=temp1*10;

while(x>10)
{
last=last*10;
x=x/10;
}

last=last+temp1+n;

printf("%d\n",last);
}

