#include<bits/stdc++.h>
using namespace std;

bool sortbysec(const pair<int,int>&p1, const pair<int,int>&p2)
{
	return p1.second<p2.second;
}
void displaySort(int rn[],int m[],int n)
{
	vector<pair<int,int> > vp;
	for(int i=0;i<n;i++)
	{
		vp.push_back(make_pair(rn[i],m[i]));
	}
	sort(vp.begin(),vp.end(),sortbysec);
	cout<<"Roll no"
	    <<"   "
	    <<"Marks\n";
	for(int i=0;i<vp.size();i++)
	{
		cout<<vp[i].first<<"\t  "<<vp[i].second<<"\n";
	}
}
int main()
{
//	int m,n,o;
//	cin>>n;
//	int rn[n];
//	for(int i=0;i<n;i++)
//	{
//	cin>>rn[i];
//}
//	cin>>o;
//	for(int j=0;j<o;j++)
//	{
//		cin>>m[j];
//
//	}
	
	int rn[]={17,20,34,77,9,5,1};
	int m[]={67,89,90,34,76,22,98};
	int n=sizeof(rn)/sizeof(rn[0]);
	displaySort(rn,m,n);
	return 0;
}
