#include<stdio.h>
int main()
{
	long long int t1=1;
	long long int t2=1;
	long long int sum=0,sum1=0;
	for(int i=0;i<100;i++)
	{
		sum+=t1;
		t1 = t2;
		t2 = sum;
		if(sum%2==0)
			sum1+=sum;
	}
	printf("%lld",sum1);
}
