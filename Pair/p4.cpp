#include<bits/stdc++.h>
using namespace std;

int main(){
pair<int,string>p;//{1,"abc"};

//I/p of pairs
cin>>p.first>>p.second;
//p=make_pair(1,"abc");
//p={1,"abc"};


pair<int,string>p1=p;
// by copy - 1 abc

// by reference there is no copy
//pair<int,string>&p1=p;
// by reference - 3 abc
p1.first = 3;
cout<<p.first<<" "<<p.second<<endl;
return 0;
}
