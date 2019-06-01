#include <iostream>
using namespace std;

int ternary_search(int n,int m,int a[])
{
	int l = 0;
	int r = n-1;
	int mid1 = 0;
	int mid2 = 0;
	while(l<r)
	{
		mid1 = l +((r-l)/3);
		mid2 = r -((r-l)/3);
		if(a[mid1] == m)
			return mid1+1;
		else if(a[mid2] == m)
			return mid2+1;
		else if(m<a[mid1])
			r = mid1-1;
		else if(m>a[mid2])
			l = mid2 +1;
		else
		{
			r = mid2-1;
			l = mid1+1;
		}
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
	cout<<ternary_search(n,m,a);

	return 0;
}
