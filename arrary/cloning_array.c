#include<stdio.h>
int main()
{
	int a[3],b[3];
	for(int i=0;i<3;i++)
		scanf("%d",&a[i]);
	for(int i=0;i<3;i++)
	{
		b[i]=a[i];
		printf("%d",b[i]);
	}
}
