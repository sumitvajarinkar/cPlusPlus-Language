#include<bits/stdc++.h>
using namespace std;

void pairSort(int a[],char b[],int n)
{
    pair<int,int>arr_p[n];
    {
        for(int i=0; i<n; i++)
        {
            arr_p[i].first=a[i];
            arr_p[i].second=b[i];
        }
        sort(arr_p,arr_p+n);
        //(1,a)(2,b)(5,c)(7,d)(8,e)(9,d)


		//
        for(int i=0; i<n; i++)
        {
            b[i]=arr_p[i].second;
        }
        //(1,d)(2,a)(5,b)(7,c)(8,d)(9,e)

        for(int i=0; i<n; i++)
        {
            cout<<"("<<arr_p[i].first<<","<<b[i]<<")";
        }
    }
}
int main()
{
    int a[]= {2,5,7,8,9,1};
    int n=sizeof(a)/sizeof(a[0]);
    char b[]= {'a','b','c','d','e','d'};
    pairSort(a,b,n);
    return 0;

}
