#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector<int>v{1,2,3,4,5};
	v.pop_back();  //remove last element
	for(int x:v)
	 cout<<x<<" "<<endl;
	 cout<<"1st:"<<v.front()<<endl; //print 1st element
	 cout<<"last:"<<v.back()<<endl;  //print last element
	 
//	 v.insert(v.begin(),45);
//	 v.insert(v.begin()+2,50);
//	 v.insert(v.begin(),2,60);
//	 vector<int>v2;
//	 v2.insert(v2.begin(),v.begin(),v.begin()+2);
//	 for(auto x:v)
//	  cout<<x<<" ";
//	 for(auto x:v2)
//	  cout<<x<<" "; 

//     v.erase(v.begin());
//     for(int x:v)     //auto
//    cout<<x<<" ";
//    cout<<endl;
//    v.erase(v.begin(),v.end()-2);
//     for(int x:v)	//auto
//    cout<<x<<" ";
  
//  v.clear();
//  cout<<v.size()<<" ";
//  if(v.empty()==1)
//   cout<<"empty";
//else
// cout<<"not empty";
 
 v.resize(3);
 for(int x:v)
  cout<<x<<endl;
   cout<<"cap"<<v.capacity();

v.resize(5);
for(int x:v)
 cout<<x<<endl;
	 cout<<"cap"<<v.capacity();

 v.resize(8,8);
 for(int x:v)
 cout<<x<<endl;
 cout<<"cap"<<v.capacity();
 
 return 0;
}
