#include <stdio.h>
#include<math.h>
#define m 1000

int main(void) {
	int n,q,i,j,r[m],x[m],y[m],k,l,h;
	double max[m][m]={0},min[m][m]={0},dist;
	long count=0;
	scanf("%d %d",&n,&q);
	for(i=0;i<n;i++)
		scanf("%d %d %d",&x[i],&y[i],&r[i]);
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{	l=r[i]<r[j]?r[i]:r[j];
			h=r[i]<r[j]?r[j]:r[i];
			dist=sqrt(pow((x[i]-x[j]),2)+pow((y[i]-y[j]),2));
			max[i][j]=dist+r[i]+r[j];
			if(dist+l<=h)
			{
				min[i][j]=h-l-dist;
			}
			else if(dist!=0&&dist+l>h)
				min[i][j]=dist-r[i]-r[j];
			else
				min[i][j]=r[i]>r[j]?(r[i]-r[j]):(r[j]-r[i]);
		}
	}
	while(q--)
	{
		count=0;
		scanf("%d",&k);
		for(i=0;i<n;i++)
		{
			for(j=i+1;j<n;j++)
			{
				if(k<=max[i][j]&&k>=min[i][j])
					count++;
			}
		}
		printf("%ld\n",count);
	}
	return 0;
}

