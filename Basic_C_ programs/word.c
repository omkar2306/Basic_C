//print the number in words

#include<stdio.h>
void main()
{
int i=0,n,c=0,r,j,a;
printf("take any number");
scanf("%d",&n);
while(n>0)
{
r=n%10;
n=n/10;
i=i*10+r;
}
printf("\n%d",i);
while(i>0)
{
a=i%10;
i=i/10;
switch(a)
{
case 0:
printf("zero");
break;
case 1:
printf("one");
break;
case 2:
printf("two");
break;
case 3:
printf("three");
break;
case 4:
printf("four");
break;
case 5:
printf("five");
break;
case 6:
printf("six");
break;
case 7:
printf("seven");
break;
case 8:
printf("eight");
break;
case 9:
printf("nine");
break;
}
}
}
