#include<stdio.h>
int main()
{
	int i,n,product=1;
	printf("Enter a Number:");
	scanf("%d",&i);
	while(i>0)
	{
		n=i%10;
		if(n%2!=0)
		{
		product=product*n;
		
		}
		i=i/10;	
	}
	printf("Product of Odd Digits= %d\n",product);
	return 0;	
}