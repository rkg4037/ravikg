#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,q,k;
	int a[100000];
	cin>>n>>q>>k;
	int i,max=0,count=0;
	char c[300000];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<q;i++)
		cin>>c[i];
	int strt=0;
	i=0;
	while(i<q)
	{
		if(c[i]=='!')
		{
			if(strt==n-1)
				strt=0;
			else
				strt++;
		}
		else
		{
			max=0,count=0;
			for(int j=strt;j<n;j++)
			{
				if(a[j]==1)
					count++;
				else if(a[j]==0)
				{
					if(count>max)
						max=count;
					count=0;	
				}
			}
			for(int j=0;j<strt;j++)
			{
				if(a[j]==1)
					count++;
				else if(a[j]==0)
				{
					if(count>max)
						max=count;
					count=0;	
				}
			}
			if(count>max)
				max=count;
			if(max>k)
				max=k;
			cout<<max<<"\n";
		}
		i++;
	}
	
		
	return 0;
}
