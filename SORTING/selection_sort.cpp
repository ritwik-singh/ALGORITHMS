#include <bits/stdc++.h>
using namespace std;

void selection_s(int n,int a [])
{
	int min;
	for(int i=0;i<n-1;i++)
	{
		min = i;
		for(int j=i+1;j<n;j++)
			if(a[j]<a[min])
				min = j;
		int temp = a[min];
		a[min] = a[i];
		a[i] = temp;	
	
	}
}

int main()
{
	int n;
	cin>>n;
	int a[n];
	ios::sync_with_stdio(false);
	cin.tie(0); 
	for(int i=0;i<n;i++)
		cin>>a[i];
	selection_s(n,a);
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";

	return 0;
}
