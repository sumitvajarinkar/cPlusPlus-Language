// Exception Handling

#include<iostream>
using namespace std;

char error;
float div(float c,float d)
{
	if(d==0)
		//throw exception
		throw(error);	
	else
		return(c/d);	  
}

int main()
{
	float a,b;
	cout<<"Enter two number :\n";
	cout<<"a : ";
	cin>>a;
	cout<<"\nb : ";
	cin>>b;
	cout<<endl;
	
	//try
	try
	{
		//call for div function
		int e = div(a,b);		
		cout<<"Division : "<<e;
	}]
	
	//it will catch all which will get from throw
	//catch
	catch(...) 
	{
		cout<<"Anything divided by zero will be infinity !";
	}
return 0;
}
