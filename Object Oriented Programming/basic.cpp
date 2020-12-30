#include<bits/stdc++.h>
using namespace std;
 
 class Account{
 	char customer_nm[50];
 	int account_num;
 	int birthdate, birthmonth, birthyear;
 	int op,n=0;
 	
 	public:
		void getdata();
		void showdata();
		void FindAge(int y, int m, int d);
		void FindNameLength();
};
    void Account :: getdata()
		 {
		 	while(1)
 			{
 			cout<<"Select option\n1. Enter details\n2. Exit"<<endl;
 			cin>>op;
			switch(op)
			{
				case 1:
							fflush(stdin);
				 		cout<<"Enter name of customer = "<<endl;
			 			gets(customer_nm);
						n++;
			  			cout<<"Enter customer BirthDate in DD MM YYYY"<<endl;
			 			cin>>birthdate>>birthmonth>>birthyear;
			 			cout<<"************************************\n";
			 			showdata();
			 			break;
				case 2:
			  			exit(0);
			  			break;
				default:
		 				cout<<"Enter correct input\n";
			}
		}
	}
		 
	void Account :: showdata()
		{
			int y,m,d;
	time_t t=time(NULL);
	tm* tPtr= localtime(&t);
	y=(tPtr->tm_year)+1900;
	m=(tPtr->tm_mon)+1;
	d=(tPtr->tm_mday);
		 	cout<<"Name of Customer = "<<customer_nm<<endl;
		 	string s="AC0" + to_string(n);
			cout<<"Account number = "<<s<<endl;
			cout<<"BirthDate = "<<birthdate<<"/"<<birthmonth<<"/"<<birthyear<<endl;
			FindAge(y,m,d);
			cout<<endl;
			FindNameLength();
			cout<<"***********************"<<endl;	
		}
 	void Account :: FindAge(int year, int month, int day)
		 {
 			year=year-birthyear;
			month=abs(birthmonth-month);
			day=abs(birthdate-day);
			cout<<"Age: \n Year = "<<year<<"  Months = "<<month<<"  Days = "<<day;
 			
		 }
	void Account :: FindNameLength()
		{
			int c=0;
			for(int i=0;customer_nm[i]!='\0';i++)
						c++;
			cout<<"Length of customer name = "<<c-1<<endl;
			
		}

int main()
{
	int y,m,d;
	time_t t=time(NULL);
	tm* tPtr= localtime(&t);
	y=(tPtr->tm_year)+1900;
	m=(tPtr->tm_mon)+1;
	d=(tPtr->tm_mday);
		Account a1;
		a1.getdata();
		a1.showdata();
		a1.FindAge(y,m,d);
		a1.FindNameLength();
		return 0;
}

