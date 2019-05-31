#include <bits/stdc++.h>
using namespace std;

int l_search(int n,int m, int a[])
{
	for(int i=0;i<n;i++)
		if(a[i]==m)
			return i+1;

	return -1;
}

int main()
{	
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n,m;
	cin>>n>>m;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	cout<<l_search(n,m,a)<<endl;
	return 0;
}
