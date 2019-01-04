#include <stdio.h>
#define max 100000
long solve(long *a,int i,int n,long *dp)
{
	if(i>=n-1)
		return 1;
	if(a[i]>a[i+1])
		return dp[i]=1+solve(a,i+1,n,dp);
	else
		return  dp[i]=2*solve(a,i+1,n,dp);
}

int main(void) {
	int t,i,n;
	scanf("%d",&t);
	long a[max],ans;
	while(t--)
	{
		long dp[max]={0};
		scanf("%d",&n);
		for(i=0;i<n;i++)
			scanf("%ld",&a[i]);
		ans=solve(a,0,n,dp);	
		printf("%ld\n",ans);
	}
	return 0;
}

