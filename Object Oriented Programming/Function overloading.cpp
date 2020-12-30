 //Function overloading 

#include<iostream>
#include<string.h>
#include<cstring>
#include<stdio.h>
using namespace std;

class Account
{
	int account_no=1000, balance;
	char date_of_birth[20];
	public:
		void Create_Account();
		void Create_Account(int accno, int bal);
		void Create_Account(int accno, int bal, char *dob);
		void Show_details();
};

	void Account :: Create_Account() //default
		{
		account_no++;
		balance =500;
		strcpy(date_of_birth,"01-01-2010");	
		}
	void Account :: Create_Account(int accno, int bal)
		{
			account_no=accno;
			balance=bal;
			strcpy(date_of_birth,"01-01-2010");
		}
	void Account :: Create_Account(int accno,int bal,char *dob)
		{
			account_no=accno;
			balance=bal;
			strcpy(date_of_birth,dob);	
		}
	
	void Account::Show_details()
{
	cout<<"\nThe Account Number of the Holder :"<<account_no;
	cout<<"\nBalance in the Account           :"<<balance;
	cout<<"\nBirth Date of the Account Holder :"<<date_of_birth;
}

int main()
{
	Account a;
	a.Create_Account();	//default
	a.Show_details();
	cout<<endl;
	
	Account B; 
	B.Create_Account(1002,10000); //overloading different arguments
	B.Show_details();
	cout<<endl;
	
	B.Create_Account(1003,5760,"17-12-2000"); //overloading different arguments
	B.Show_details();
	return 0;
}
