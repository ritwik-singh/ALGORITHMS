#include <bits/stdc++.h>
using namespace std;

void printActivities(vector< pair <int,int> > vect,int n)
{
	sort(vect.begin(), vect.end());
	int i=0,j=0;
	cout<<"("<<vect[0].second<<","<<vect[0].first<<") ";
	int prev = vect[0].first;
	for(int i=1;i<n;i++)
	{
		if(vect[i].second >= prev)
		{
			prev = vect[i].first;
			cout<<"("<<vect[i].second<<","<<vect[i].first<<") ";
		}
	}
}

int main()
{

	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin>>n;
	vector< pair <int,int> > activity;
	int start[n],finish[n];
	for(int i=0;i<n;i++)
		cin>>start[i];
	for(int i=0;i<n;i++)
	{
		cin>>finish[i];
		activity.push_back( make_pair(finish[i],start[i]) );
	}	

	printActivities(activity,n);

	return 0;
}
