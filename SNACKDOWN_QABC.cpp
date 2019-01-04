#include <stdio.h>
#define m 100000
int main(void) {
	int t,n,i,flag;
	long a[m],b[m],temp;
	scanf("%d",&t);
	while(t--)
	{
		flag=1;
		scanf("%d",&n);
		for(i=0;i<n;i++)
			scanf("%ld",&a[i]);
		for(i=0;i<n;i++)
		{
			scanf("%ld",&b[i]);
			if(a[i]>b[i])
				flag=-1;
		}
		if(flag!=-1)
		{
			for(i=0;i<n-2;i++)
			{
				if(a[i]>b[i])
				{
					flag=-1;
					break;
				}
				if(a[i]<b[i])
				{
					temp=b[i]-a[i];
					a[i]=a[i]+temp;
					a[i+1]=a[i+1]+2*temp;
					a[i+2]=a[i+2]+3*temp;
				}
			}
			if(flag!=-1)
			{
				if(a[n-2]!=b[n-2]||a[n-1]!=b[n-1])
					flag=-1;
			}
		}
		if(flag!=-1)
			printf("TAK\n");
		else
			printf("NIE\n");
	}
	
	return 0;
}

