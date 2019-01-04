#include <stdio.h>

int main(void) {
	int t,n,k,curr,count,i,h[128];
	scanf("%d",&t);
	while(t--)
	{
		count=0,curr=0;
		scanf("%d %d",&n,&k);
		for(i=0;i<n;i++)
			scanf("%d",&h[i]);
		for(i=0;i<n;)	
		{
			if(h[i]-curr>k)
			{
				count++;
				curr+=k;
			}
			else
			{
				curr=h[i];
				i++;
			}
		}
		printf("%d\n",count);
	}
	return 0;
}

