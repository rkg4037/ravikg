#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define m 1000
long long func(int n,long long *dp,int *p)
{
	if(n==0)
		return 0;
	if(dp[n]!=0)
		return dp[n];
	int  i;
	long long max=0;
	for(i=1;i<=n;i++)
	{
		if(p[i]+func(n-i,dp,p)>max)
			max=p[i]+func(n-i,dp,p);
		
	}
	return dp[n]=max;
}

int main() {
	// your code goes here
	int n,p[1000];
	long long dp[1000];
	p[0]=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
		scanf("%d",&p[i]);
	memset(dp,0,sizeof(dp));	
	printf("%lld\n",func(n,dp,p));	
	return 0;
}
