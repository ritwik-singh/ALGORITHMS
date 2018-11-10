/*
	MERGE SORT IMPLEMENTATION
	TIME COMPLEXITY : O(nlogn).
*/

#include<iostream>
using namespace std;

void merge(long long int array[],long long int left,long long int mid ,long long int right)
{
	long long int i,j,k;
	long long int n1 = mid-left+1;
	long long int n2 = right-mid;
	long long int temp1[n1],temp2[n2];
	for(i=0;i<n1;i++)
		temp1[i] = array[left+i];
	for(j =0;j<n2;j++)
		temp2[j] = array[mid+1+j];
	i=0,j=0,k=left;
	while(i<n1 && j<n2)
	{
		if(temp1[i]<=temp2[j])
		{
			array[k] = temp1[i];
			i++;
		}
		else
		{
			array[k] = temp2[j];
			j++;
		}
		k++;
	}
	while(i<n1)
	{
		array[k] = temp1[i];
		k++;
		i++;
	}
	while(j<n2)
	{
		array[k] = temp2[j];
		k++;
		j++;
	}

}

void merge_sort(long long int array[], long long int left, long long int right)
{
	if(left<right)
	{
		long long int mid = left + (right-left)/2;
		merge_sort(array,left,mid);
		merge_sort(array,mid+1,right);
		merge(array,left,mid,right);
	}
}
int main()
{
	long long int n;
	cout<<"enter the size of array\n";
	cin>>n;
	long long int array[n];
	cout<<"enter the elements of array\n";
	for(long long int i=0;i<n;i++)
		cin>>array[i];
	merge_sort(array,0,n);
	cout<<"sorted array is \n";
	for (long long int i = 0; i <n; i++)
	{
		cout<<array[i]<<"\t";
	}
	cout<<endl;

	return 0;
}
