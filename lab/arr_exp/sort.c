#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a[n],temp;
	for(int i=0;i<n-1;i++)
		for(int j=i;j<n;j++)
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
	for(int i=0;i<n;i++)
		printf("%d  ",a[i]);
}
