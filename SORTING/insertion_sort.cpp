#include <bits/stdc++.h>
using namespace std;

void insertion_s(int n,int a[])
{
	for(int i=0;i<n;i++)
	{
	  int temp = a[i];
	  int j = i;
	  while(j>0 && temp<a[j-1]){
	  	a[j] = a[j-1];
	  	j = j-1;
	  }	
	  a[j] = temp;
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
	insertion_s(n,a);
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";

	return 0;
}
