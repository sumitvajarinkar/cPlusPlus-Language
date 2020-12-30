//Inheritance

/*Considered 
	1 postfix for public
	2 postfix for private
	3 postfix for protected
*/


#include<iostream>
using namespace std;

class A
{
	int a2; //private
	
	protected:
		int a3;
		
	public:
		int a1;
		
		A(){
			a2=1;
			a3=1;		
			a1=1;
		}
		void showall()
		{
			cout<<"\nPrivate value :"<<a2;
			cout<<"\nProtected value :"<<a3;
			cout<<"\nPublic value :"<<a1;
		}
};

class B : public A
{
	int b2;
	
	protected:
		int b3;
		
	public:
		int b1;
		B(){
			b2=2;
			b3=2;		//default constructor
			b1=2;
		}
		void addall()
		{
			int x;
			//access public,protected of a i.e a1,a3
			x=b2+b3+b1+a1+a3;	
			cout<<"\n"<<x;
		}
};

class C : private A
{
	int c2;
	
	protected:
		int c3;
		
	public:
		int c1;
		C()
		{
			c2=3;
			c3=3;		//default constructor
			c1=3;
		}
		void addall()
		{
			int x;
			//access public protected of a i.e make it private(a1),private(a3)
			x=c2+c3+c1+a1+a3;	
			cout<<"\n"<<x;
		}
};

class D : protected B, public C
{
	int d2;
	
	protected:
		int d3;
		
	public:
		int d1;
		D()
		{
			d2=4;
			d3=4;			//default constructor
			d1=4;
		}
		void addall()
		{
			int x;
			//access public c i.e will public(c1),protected(c3)
			//access protected b i.e will public(b1),protected(b3)
			x=d2+d3+d1+b3+b1+c3+c1;		
			cout<<"\n"<<x;
		}
};

int main()
{
	A a;	//default constructor
	a.showall();
	B b;		//default constructor
	b.addall();
	C c;		//default constructor
	c.addall();
	D d;		//default constructor
	d.addall();
}
