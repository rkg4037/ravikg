#include <stdio.h>

int main(void) {
	int t,n,i;
	long a,prev;
	scanf("%d",&t);
	while(t--)
	{
		int count=0;
		prev=0;
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			scanf("%ld",&a);
			if(a<prev)
				count++;
			prev=a;
		}
		if(count<=1)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}

