#include <bits/stdc++.h>
using namespace std;
 
int b_search(int n,int m,int a[])
{
	int l = 0;
	int r = n-1;
	int mid;
	while(l<=r)
	{
		mid = (l+r)/2;
		if(a[mid] == m)
			return mid+1;
		else if(a[mid] > m)
			r = mid-1;
		else
			l = mid+1;
	} 
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
	cout<<b_search(n,m,a);

	return 0;
}
