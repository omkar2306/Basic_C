// find n strong numbers 
#include<stdio.h>
void main()
{
	int n,no,l,sum=0,temp;
	printf("\nEnter Limit :- ");
	scanf("%d",&l);
	for(int i=0;i<l;i++)
	{
		temp=i;
		while(i>0)
		{
		n=1;
		no=i%10;
		i=i/10;
			for(int j=1;j<=no;j++)
			{
				n=n*j;
			}
			sum=sum+n;
		}
		if(sum==temp)
		{
			printf("\n %d",i);
		}	
	}
}
