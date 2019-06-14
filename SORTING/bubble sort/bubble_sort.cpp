#include <bits/stdc++.h>
using namespace std;

void bubble_s(int n, int a[])
{
	int temp;
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{

				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
				
			}
		}
	}
}


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	bubble_s(n,a);
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
	return 0;
}

