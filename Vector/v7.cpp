#include<bits/stdc++.h>
using namespace std;
//void sortArr(int arr[],int n);
void sortArr(int arr[],int n)
{
	vector<pair<int,int> >vp;
	for(int i=0;i<n;i++)
	vp.push_back(make_pair(arr[i],i));
	sort(vp.begin(),vp.end());
	cout<<"element\t"
		<<"index"<<endl;
	for(int i=0;i<vp.size();i++)
	{
		cout<<vp[i].first<<"\t"
				<<vp[i].second<<endl;
	}
}
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	cin>>arr[i];
	sortArr(arr,n);
	return 0;
}
