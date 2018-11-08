/*
	BINARY SEACH IMPLEMENTATION(ITERATIVE METHOD)
	TIME COMPLEXITY : O(logn).
*/
#include<iostream>
using namespace std;
long long int binary_serach(long long int a[],long long int n,long long int key)
{
	long long int left = 0;
	long long int right = n;
	long long int mid = (left+right)/2;
	while(left<=right)
	{
		if(a[mid] == key)
			return mid+1;
		else if(a[mid] > key)
			right = mid-1;
		else
			left = mid +1;
		mid = (left+right)/2;
	}
	return 0;

}
int main()
{
	long long int n;
	cout<<"enter the size of array\n";
	cin>>n;
	long long int array[n];
	cout<<"enter the elements of array in sorted order\n";
	for(int i=0;i<n;i++)
		cin>>array[i];
	long long int key;
	cout<<"enter the number to be searched\n";
	cin>>key;
	long long int result = binary_serach(array,n,key);
	if(result)
		cout<<"number founded at position "<<result<<endl;
	else
		cout<<"number not found\n";
	return 0;

}
