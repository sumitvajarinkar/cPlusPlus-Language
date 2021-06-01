#include<bits/stdc++.h>
using namespace std;

void print(vector<string>v){
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}
}

int main(){
	vector<string>v;
	int n;
	cin>>n;
	for(int i=0;i<n;++i){
		string s;
		cin>>s;
		v.push_back(s);
	}
	print(v);
return 0;
}
