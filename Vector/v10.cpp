#include<bits/stdc++.h>
using namespace std;

void print(vector<int>v){
    cout<<"SIZE:"<<v.size()<<endl; //O(1)
    for(int i=0;i<v.size();++i){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main(){
    vector<int>v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {

        int x;
        cin>>x;
        v.push_back(x); //O(1)
    }
    print(v);
    return 0;
}
