#include<iostream>
#include <algorithm> 
using namespace std;
int main()
{
	long no;
	cin>>no;
	long long arr[no];
	int i,j;
	long long max = 0;
	long long rev = 0;
	for(i=0;i<no;++i)
	{
		cin>>arr[i];
	}
	sort(arr,arr+no);
	for(j=0;j<no;++j)
	{
		rev=arr[j]*(no-j);
		if(rev>max)
			max=rev;
	}
	cout<<max;
	//for(i=0;i<no;i++)
	//cout<<arr[i];
}
