#include <bits/stdc++.h>
using namespace std;
int checkhn(int n,int m)
{
	int s=0;
	for(int i=1; i<=n/2; i++)
	{
		if (n%i==0) s=s+i;
	}
	if (s==m) return 1;
	else return 0;
}
main()
{
	int n;
	cin>>n;
//	cout<<checkhn(4,1);
	for(int i=1; i<=n; i++)
	{
		for(int j=1; j<n; j++)		
		{
			if (checkhn(i,j)==1 || checkhn(j,i)==1)
			{
				cout<<i<<" "<<j;
				cout<<endl;
			}
		}
	}
}
