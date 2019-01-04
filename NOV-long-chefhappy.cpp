#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main() {
	int t;
	cin>>t;
	int n,x;
	long long y;
	double a[26]={0};
	int i;
	for(i=1;i<26;i++)
	{
		if(i%2!=0)
			a[i]  =  a[i-1]  +  (1/pow(2,i));
		else
			a[i]  =  a[i-1]  -  (1/pow(2,i));
	}
	while(t--){
		cin>>n;
		y = pow(2,n);
		double b = a[n]*y;
		if(b-(int)b)>0.5)
			x= (int)b + 1;
		else
			x = (int)b;
		cout<<x<<" "<<y<<" ";	
	}
	return 0;
}
