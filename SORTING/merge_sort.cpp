#include <bits/stdc++.h>
using namespace std;

void merge(int start,int end, int mid, int a[])
{
	int p = start;
	int q = mid+1;
	int copy[end-start+1];
	int k=0;
	for(int i=start;i<=end;i++)
	{
		if(p>mid)
			copy[k++] = a[q++];
		else if(q>end)
			copy[k++] = a[p++];
		else if(a[p] < a[q])
			copy[k++] = a[p++];
		else
			copy[k++] = a[q++];		 

	}
	for(int i=0;i<k;i++)
		a[start++] = copy[i];
}

void merge_sort(int start,int end,int a[])
{
	if(start<end){
		int mid = (start+end)/2;
		merge_sort(start,mid,a);
		merge_sort(mid+1,end,a);
		merge(start,end,mid,a);
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
	merge_sort(0,n-1,a);
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";

	return 0;
}
