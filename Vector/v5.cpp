#include<bits/stdc++.h>
using namespace std;

vector<int> fun(int arr[],int n,int k)
{
	vector<int> v;
	for(int i=0;i<n;i++)
	{
		if(arr[i]<k)
		 v.push_back(arr[i]);
	}
	return v;
}
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int k;
	cin>>k;
	
	for(int x:fun(arr,n,k))
		cout<<x<<" ";
		return 0;
}
