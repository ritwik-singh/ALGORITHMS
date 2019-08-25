#include <bits/stdc++.h>
using namespace std;

int max(int a, int b) { return (a > b)? a : b;} 

int cutRod(int p[],int n)
{
	int r[n+1];
	r[0] = 0;
	for(int j=1;j<=n;j++)
	{
		int q = INT_MIN;
		int i;
		for(i=0;i<j;i++)
			q = max(q,p[i]+r[j-i-1]);
		r[j] = q;
	}

	return r[n];
}

int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	cout<<"Maximum value is : "<<cutRod(a,n)<<"\n";

	return 0;
}



