#include <bits/stdc++.h>
using namespace std;

void printActivities(int start [],int finish [],int n)
{
	
}

int main()
{

	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin>>n;
	int start[n],finish[n];
	for(int i=0;i<n;i++)
		cin>>start[i];
	for(int i=0;i<n;i++)
		cin>>finish[i];

	printActivities(start,finish,n);

	return 0;
}
