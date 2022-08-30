#include<stdio.h>
int fibbo(int n)
{
	int t1=0,t2=1,nt;
	printf("%d%d",t1,t2);
	int i;
	for(i=3;i<=10;i++)
	{
		nt=t1+t2;
		t1=t2;
		t2=nt;
		printf("%d",nt);
	}
	return 0;
}
int main()
{
	int n;
	printf("enter last term");
	scanf("%d",&n);
	printf("the fibbonaci series is:\n");
	fibbo(n);
	return 0;
	
}
