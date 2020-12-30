//friend function and class

#include<iostream>
using namespace std;

class Account
{
	private:
			int Bal;
	
	public:
		Account(int balance)
		{
			Bal=balance;
		}
		
	friend void Bonus(Account &A); //friend function
	friend class IncomeTax;			//friend class
};

class IncomeTax			//friend class
{
	int Calculated_tax;

	public:
		void CalculateTax(Account &A)
		{
			Calculated_tax=A.Bal/10;
		}
		void DisplayTax()
		{
			cout<<"\nIncome Tax :"<<Calculated_tax;
		}
};

void Bonus(Account &A)	//friend function
{
	A.Bal+=5000;
}

int main()
{
	int bal;
	cout<<"\nEnter the Balance in the Account :";
	cin>>bal;
	
	Account D(bal); //parameterized constructor
	Bonus(D);		//call friend function 
	
	IncomeTax I;		
	I.CalculateTax(D); //call friend class
	I.DisplayTax();
}
