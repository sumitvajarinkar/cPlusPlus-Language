//#include<bits/stdc++.h>
#include<iostream>
#include<utility>

using namespace std;

int main()
{
  pair<int,int>pair1=make_pair(1,12);
  pair<int,int>pair2=make_pair(9,11);
  // pair<int,int>pair1{1,12};
  // pair<int,int>pair2{9,11};
  swap(pair1, pair2);
  cout<<pair1.first<<" "<<pair1.second<<endl;

  cout<<pair2.first<<" "<<pair2.second<<endl;

  cout<<(pair1==pair2)<<endl;
  cout<<(pair1!=pair2)<<endl;
  cout<<(pair1>=pair2)<<endl;
  cout<<(pair1<=pair2)<<endl;
  cout<<(pair1>pair2)<<endl;
  cout<<(pair1<pair2)<<endl;

  return 0;
}
