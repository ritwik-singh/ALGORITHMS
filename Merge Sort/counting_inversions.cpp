#include <bits/stdc++.h>
using namespace std;

long long int count = 0;

void merge(long long int start,long long int end,long long  int mid,long long  int a[])
{
	long long int p = start;
	long long int q = mid+1;
	long long int copy[end-start+1];
	long long int k=0;
	for(long long int i=start;i<=end;i++)
	{
		if(p>mid)
			copy[k++] = a[q++];
		else if(q>end)
			copy[k++] = a[p++];
		else if(a[p] <=a[q])
			copy[k++] = a[p++];
		else
			{
			    ::count = ::count+(mid-p+1);
			    copy[k++] = a[q++];
			    
			}		 

	}
	for(long long int i=0;i<k;i++)
		a[start++] = copy[i];
}

void merge_sort&count(long long int start,long long int end,long long int a[])
{
	if(start<end){
		long long int mid = (start+end)/2;
		merge_sort&count(start,mid,a);
		merge_sort&count(mid+1,end,a);
		merge(start,end,mid,a);
	}

}


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	long long int n;
	cin>>n;
	long long int a[n];
	for(long long int i=0;i<n;i++)
	merge_sort&count(0,n-1,a);
    cout<<::count<<endl;

	return 0;
}
