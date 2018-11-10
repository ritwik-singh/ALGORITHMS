/*
	QUICK SORT IMPLEMENTATION
	TIME COMPLEXITY : 
			BEST CASE:O(nlogn).
			WORST CASE:O(n^2).
*/
#include<iostream>
using namespace std;
long long int  partition( long long int  a[],  long long int  l,  long long int  r)
 {
	 long long int  pivot=a[l];
	 long long int  i=l;
	 long long int  j=r+1;
	while(i<=j){
		do{
			i++;
		}while(pivot>a[i]);
		
		do{
			j--;
		}while(pivot<a[j]);
		
		if(i<j)
			{
				 long long int  c=a[i];
				a[i]=a[j];
				a[j]=c;
			}
	}
	
	 long long int  c=a[l];
	a[l]=a[j];
    a[j]=c;
	return j;
			
}
void QuickSort( long long int  a[],  long long int  l,  long long int  r){
	if(l<r){
		 long long int  k=partition(a,l,r);
		QuickSort(a,l,k-1);
		QuickSort(a,k+1,r);
	}
}
int main(){
	long long int  n;
	cout<<"Enter size of array:\n";
	cin>>n;
	long long int  array[n+1];
	array[n+1] = 10000000000000000;
	cout<<"Enter Array:\n";
	for(long long int i =0;i<n;i++)
		cin>>array[i];
	QuickSort(array,0,n-1);
	cout<<"sorted array is\n";
	for (long long int i = 0; i <n;i++)
		cout<<array[i]<<" ";
	cout<<endl;
	return 0;	
}
