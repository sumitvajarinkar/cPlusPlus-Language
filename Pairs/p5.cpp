//#include<bits/stdc++.h>
//using namespace std;
//
//int main(){
//	pair<int,int>p_array[3];
//	p_array[0]={1,2};
//	p_array[1]={3,4};
//	p_array[2]={5,6};
//	for(int i=0;i<3;i++)
//		cout<<p_array[i].first;
//	return 0;
//}

#include <iostream>

using namespace std;

int main ()
{
   pair<int,int> pair1, pair3;    //creats pair of integers
   pair<int,string> pair2;    // creates pair of an integer an a string

   pair1 = make_pair(1, 2);     // insert 1 and 2 to the pair1
   pair2 = make_pair(1, "Studytonight") // insert 1 and "Studytonight" in pair2
   pair3 = make_pair(2, 4)
   cout<< pair1.first << endl;  // prints 1, 1 being 1st element of pair1
   cout<< pair2.second << endl; // prints Studytonight

   if(pair1 == pair3)
        cout<< "Pairs are equal" << endl;
   else
        cout<< "Pairs are not equal" << endl;

   return 0;
}
