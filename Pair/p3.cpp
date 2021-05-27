#include<bits/stdc++.h>
using namespace std;
void pairSort(int a[],char b[],int n);
int main()
{
 int a[]={2,5,7,8,9,1};
 int n=sizeof(a)/sizeof(a[0]);
 char b[]={'a','b','c','d','e','d'};
 pairSort(a,b,n);
 return 0;

}
void pairSort(int a[],char b[],int n)
{
  pair<int,int>arr_p[n];
  {
  	for(int i=0;i<n;i++)
  	{
  		arr_p[i].first=a[i];
  		arr_p[i].second=b[i];
	  }
  sort(arr_p,arr_p+n);
  for(int i=0;i<n;i++)
  {
  	b[i]=arr_p[i].second;
  }
  for(int i=0;i<n;i++)
  {
  	cout<<"("<<arr_p[i].first<<","<<b[i]<<")";
  }
}
}
