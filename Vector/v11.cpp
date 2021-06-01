#include<bits/stdc++.h>
using namespace std;

void print(vector<int> &v){
cout<<"Size:"<<v.size()<<endl;
    for(int i=0;i<v.size();++i){
    cout<<v[i]<<" ";
	}
	v.push_back(9);
	cout<<endl;
}

int main(){
	vector<int>v;//(10,3); //3 3 3 3 3 3 3 3 3 3 7
	v.push_back(7); //O(1)	print(v);
//	v.pop_back(); //O(1)
//copy has O(n)
//reference pass will pass actual save o(n)
	vector<int>&v1=v; //O(n)
	v.push_back(8); //O(1)
	//Array cant be copy, their pointers can be copy
	//Vector can be copy or use reference as it is
	print(v);
	print(v);
	print(v1);

}
