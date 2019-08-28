#include <bits/stdc++.h>
using namespace std;

unsigned int find(unsigned int n)
{
	unsigned int ugly[n];
	unsigned int i2=0,i3=0,i4=0;
	unsigned int multiple_of_2 = 2;
	unsigned int multiple_of_3 = 3;
	unsigned int multiple_of_5 = 5;
	unsigned int next_no = 1;
	ugly[0] = 1;

	for(int i=0;i<n;i++)
	{
		next_no = min(multiple_of_2,min(multiple_of_3,multiple_of_5));
		ugly[i] = next_no;
		if(next_no == multiple_of_2)
		{
			i2++;
			multiple_of_2 = ugly[i2]*2;
		}
		if(next_no == multiple_of_3)
		{
			i3++;
			multiple_of_3 = ugly[i3]*3;
		} 
		if(next_no == multiple_of_5)
		{
			i5++;
			multiple_of_5 = ugly[i5]*5;
		}
	}	

	return next_no;
}


int main()
{
	unsigned int n;
	cout<<"enter the nth ugly number to be found\n";
	cin>>n;
	cout<<find(n);
	return 0;
}
