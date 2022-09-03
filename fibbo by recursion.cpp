#include<stdio.h>
int fibbo(int n)
{
	if(n==0)
	{
		return 0;
		//This is an important program that has most probablity to be asked in our upcomming examination.
	}
	else if(n==1)
	{
		return 1;
	}
	else
	 {
	return fibbo(n-1)+fibbo(n-2);
		
	}
}
int main()
{
int n,i;
printf("enter last term");
scanf("%d",&n);
printf("the fibbonaci series is:\n");
for(i=0;i<n;i++)
{
	printf("%d",fibbo(i));
}
return 0;
}

