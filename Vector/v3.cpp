#include<bits/stdc++.h>
using namespace std;
int main()
{
	int arr[]={10,5,20};
//	vector<int>v;
	int n=sizeof(arr)/sizeof(arr[0]);
	vector<int> v(arr,arr+n);
	
  vector<int>::iterator itr; //replace by auto
    
    for(itr=v.begin();itr!=v.end();itr++) //v.rbegin=last ,v.rend=first
    cout<<*itr<<" ";
    cout<<endl;
     for(auto itr=v.rbegin();itr!=v.rend();itr++) //v.rbegin=last ,v.rend=first
    cout<<*itr<<" ";
    cout<<endl;
    for(auto itr2=v.begin();itr2!=v.end();itr2++)
     cout<<*itr2<<" ";
return 0;
}
