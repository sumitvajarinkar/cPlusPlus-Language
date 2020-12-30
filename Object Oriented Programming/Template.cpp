//Template

#include<iostream>
#include<string.h>
using namespace std;

template<class myMax>

myMax maximum(myMax m, myMax n) //myMax template
{
	if(m > n)
		return m;
	else
		return n;	
}

int main()
{
	int a,b,g;
	float c,d;
	string e,f;
	
	cout<<"Enter two int number :\n";
	cin>>a>>b;
	cout<<"The max of "<<a<<" and "<<b<<" is "<<maximum(a,b)<<endl;
	
	cout<<"\nEnter two float number :\n";
	cin>>c>>d;
	cout<<"The max of "<<c<<" and "<<d<<" is "<<maximum(c,d)<<endl;
	
	cout<<"\nEnter two word :\n";
	cin>>e>>f;
	
	g=maximum(e.length(),f.length()); //maximum call
	
	if(g==e.length())
		cout<<"The max of "<<e<<" and "<<f<<" is "<<e;
	else
		cout<<"The max of "<<e<<" and "<<f<<" is "<<f;

return 0;
}

