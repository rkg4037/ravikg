#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define m 1000000007

int main() {
	int t,k;
	long long n;
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		std::map<long long , int> M;
		if(n<(k*(k+1)/2))
		{
			cout<<-1<<"\n";
			continue;
		}
		else if(n==(k*(k+1)/2))
		{
			cout<<0<<"\n";
			continue;
		}
	/*	else if(n==5&&k==2)
		{
			cout<<12<<"\n";
			continue;
		}*/
		else
		{
			int a=n/k;
			int b=n%k;
			int i,j;
			if(k%2!=0)
			{
				i=j=a;
				M[i--]=1;
				j++;
			}
			else
			{
				if(b<k/2)
				i=a-1;
				else
				i=a;
				j=a+1;
				M[i--]=M[j++]=1;
			}
			int c=(k%2!=0)?k/2:(k/2-1);
			while(c--)
			{
				M[i--]=1;
				if(c!=0)
				M[j++]=1;
				else if(c==0)
				{
				if(k%2==0&&b>=k/2)
					M[a+b]=1;
				else	
				{
					if(M[j-b+1]==1)
					{
						M[j-b+1]=0;
						M[j]=M[j+1]=1;
					}
					else
						M[j+b]=1;
				}
				}
			}
			/*M[i]=1;
			M[j+b]=1;*/
			if(M[1]==1)
			{
				cout<<0<<"\n";
				continue;
			}
			long long sq,t,p=1,sum=0;
			std::map<long long ,int >::iterator it;
			for(it=M.begin();it!=M.end();it++)
			{
				if(it->second==1)
				{sq=((it->first%m)*(it->first%m))%m;
				t=(sq-it->first%m+m)%m;
				p=((p%m)*(t%m))%m;
				sum+=it->first;
				cout<<it->first<<"  ";
				}
			}
			cout<<sum<<"  "<<p<<"\n";
		}
		
	}
	
	return 0;
}
