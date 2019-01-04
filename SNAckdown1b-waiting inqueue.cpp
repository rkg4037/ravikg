#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define MAX 100000000000

int main() {
	int t,n,m,l;
	long long k,a;
	cin>>t;
	while(t--)
	{
		cin>>n>>m>>k>>l;
		std::map<long long,int> h;
		for(int i=0;i<n;i++)
		{
			cin>>a;
			h[a]++;
		}
		long long t, tt=m*l+l,min=MAX;
		long long b=0;
		std::map<long long,int>::iterator it;
		for(it=h.begin();it!=h.end();it++)
		{
			if(it->first<tt)
				t=tt-it->first;
			else
				t=it->first-tt;
			if(t<min)
				{min=t;
				//b=it->first;
				}
				tt+=l;
					
		}
		t=(m+n+1)*l-k;
		if(t<min)
			min=t;
		//cout<<b<<" ";	
		cout<<min<<"\n";
	}
	
	return 0;
}
