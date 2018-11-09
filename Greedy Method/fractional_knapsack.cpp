#include <iostream>
using namespace std;
int main()
{
	long long int   n;

	cout<<"\nEnter the size of array: ";
	cin>>n;

	long long int  p[n],w[n],priority[n];
	float pw[n],x[n],ckc;
	long long int  i,j,M;

	cout<<"\nEnter Profit: ";
	for(i=0;i<n;i++){
		cin>>p[i];
	}

	cout<<"\nEnter Weights: ";
	for(i=0;i<n;i++){
		cin>>w[i];
	}

	for(i=0;i<n;i++){
		pw[i]=(float)p[i]/(float)w[i];
		x[i]=0;
	}

	cout<<"\nEnter the capacity of Knapsack: ";
	cin>>M;
	ckc= M;
	for(i=0;i<n;i++){

		float max=pw[0];
		long long int  k=0;
		for(j=0;j<n;j++){

			if(max<pw[j]){

				max=pw[j];
				k=j;
			}
		}
		priority[i]=k;
		pw[k]=-100;
	}

	for(i=0;i<n;i++){
		
		if(ckc>=w[priority[i]]) {

			x[priority[i]]=1;
			ckc=ckc-w[priority[i]];

		}
		else if(ckc>0 && ckc<=w[priority[i]]){
			x[priority[i]]=ckc/(float)w[priority[i]];
			ckc=ckc-w[priority[i]];

		}
		if(ckc==0){
			break;
		}

	}
	cout<<"\nTotal Profit: ";
	float totalprofit=0;
	for (i = 0; i < n; ++i){

		totalprofit+=(float)x[i]*p[i];
	}
	cout<<"\n"<<totalprofit;
	cout<<"\n";

	return 0;
}
