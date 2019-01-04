#include <iostream>
#include <map>
using namespace std;
#define mod 1000000007
/*long long fact(int n)
{
	int i;
	long long p=1;
	for(i=2;i<=n;i++)
	{
		p=((p%mod)*(i%mod))%mod;
	}
	return p;
}
long long power(long long n,long long x)
{
	if(x==0)
		return 1;
	if(x%2==0)
		return power(((n%mod)*(n%mod))%mod,x/2);
	else
		return (n%mod*power(((n%mod)*(n%mod))%mod,x/2)%mod)%mod;
}*/
long long func(long long a,long long b)
{
	long long p=1;
	long long i;
	for(i=1;i<=a;i+=2)
	{
		p=(p%mod*i%mod)%mod;
	}
/*	for(i=2;i<=b;i++)
		p=(p%mod*i%mod)%mod;*/
	return p;	
}

int main() {
	int t,n,s,i,j,a;
	scanf("%d",&t);
	while(t--)
	{
		std::map < int , int> m;
		int count=0;
		long long comb=1;
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			scanf("%d",&s);
			m[s]++;
		}
		std::map<int,int>::reverse_iterator it;
		for(it=m.rbegin();it!=m.rend();it++)
		{
			if(count%2==0)
			{
				count+=it->second;
				a=it->second;
				comb=((comb%mod)*(func(a,a/2)%mod))%mod;
			//	comb*=fact(a)/power(2,a/2);
			}
			else
			{
				count+=it->second;
				a=it->second;
				if(a%2==0)
					comb=((a%mod)*((comb%mod)*(func(a,(a-1)/2)%mod))%mod)%mod;
				else
					comb=((comb%mod)*(func(a,(a-1)/2)%mod))%mod;
			//	comb*=fact(a)/power(2,(a-1)/2);
			}
			
			
		}
		cout<<comb<<"\n";
	}
	return 0;
}
