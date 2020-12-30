#include<bits/stdc++.h>
using namespace std;
 
 class Account{
 	char customer_nm[50];
 	int account_num;
 	int birthdate, birthmonth, birthyear;
 	int op,n=0;
 	
 	public:
 		Account();
 		Account(char nm[50],int bdate, int bmonth, int byear);
		Account(Account &x);
		void showdata();
		void FindAge(int y, int m, int d);
		void FindNameLength();
		
		//destructor
		
		~Account()						
		{
			cout<<"\nDestructor call";
		}
};	

//default constructor

  Account::Account()				
{
	strcpy(customer_nm,"NULL");
	birthdate=0;
	birthmonth=0;
	birthyear=0;
	customer_nm[50]=0;
}

//parameterized constructor

Account::Account(char n[40], int bdate, int bmonth, int byear)	
{
	strcpy(customer_nm,n);
	birthdate=bdate;
	birthmonth=bmonth;
	birthyear=byear;
	account_num++;
}

//copy constructor

Account::Account(Account &x)					
{
	strcpy(customer_nm,x.customer_nm);
	birthdate=x.birthdate;
	birthmonth=x.birthmonth;
	birthyear=x.birthyear;
	strcpy(customer_nm,x.customer_nm);
	account_num++;
	
}
		 
	void Account :: showdata()
		{
			
		 	cout<<"Name of Customer = "<<customer_nm<<endl;
			cout<<"Account number = "<<account_num<<endl;
			cout<<"BirthDate = "<<birthdate<<"/"<<birthmonth<<"/"<<birthyear<<endl;
			cout<<endl;
			
		}
		
 	void Account :: FindAge(int yr, int mon, int dy)
		 {
		 		int year,month,day;
				time_t t=time(NULL);
				tm* tPtr= localtime(&t);
				year=(tPtr->tm_year)+1900;
				month=(tPtr->tm_mon)+1;
				day=(tPtr->tm_mday);
				
 			yr=year-yr;
			mon=abs(month-mon);
			dy=abs(day-dy);
			cout<<"Age: \n Year = "<<yr<<"  Months = "<<mon<<"  Days = "<<dy;
 			cout<<endl;
		 }
		 
	void Account :: FindNameLength()
		{
			int c=0;
			for(int i=0;customer_nm[i]!='\0';i++)
						c++;
			cout<<"Length of customer name = "<<c<<endl;
			cout<<"***************************\n";
			cout<<endl;
		}

int main()
{
	int y,m,d,n,op;
	int birthdate,birthmonth,birthyear;
	char customer_nm[50];
	time_t t=time(NULL);
	tm* tPtr= localtime(&t);
	y=(tPtr->tm_year)+1900;
	m=(tPtr->tm_mon)+1;
	d=(tPtr->tm_mday);
	
		while(1)
 			{
 			cout<<"\nSelect option\n";
			cout<<"\n1. Enter details\n2. Exit"<<endl;
 			cin>>op;
			switch(op)
			{
				case 1:
					 {
						fflush(stdin);
				 		cout<<"Enter name of customer = "<<endl;
			 			gets(customer_nm);
						n++;
			  			cout<<"Enter customer BirthDate in DD MM YYYY"<<endl;
			 			cin>>birthdate>>birthmonth>>birthyear;
			 			cout<<"************************************\n";
			 			
			 			//default constructor
			 			Account a1;		
						a1.showdata();
			 			
			 			// parameterized constructor
			 			Account a2(customer_nm,birthdate,birthmonth,birthyear);	
						a2.showdata();
						a2.FindAge(birthyear,birthmonth,birthdate);
						a2.FindNameLength();
			 			cout<<endl;
			 			
			 			//copy constructor
			 			Account a3(a2);		
			 			a3.showdata();
			 			a3.FindAge(birthyear,birthmonth,birthdate);
						a3.FindNameLength();
			 			cout<<endl;
			 		   }
			 	   break;
			 	   
			 	case 2:
			 			exit(0);
			 			break;
			 			
			 	default:
			 			cout<<"Enter correct option :\n";		
			}
	}
return 0;
}

