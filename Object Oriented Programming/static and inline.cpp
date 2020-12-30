//static variable & inline function

#include<iostream>
#include<stdlib.h>
using namespace std;

class Department{
	string name;
	int num_students;
	static int total_departments;
	public:
		
		Department(string i_name, int i_num_students)			//constructor
		{
			cout<<"Constructor called for :"<<i_name<<endl;
			name=i_name;
			num_students=i_num_students;
			total_departments++;
			
		}
		
		~Department()										//destructor
		{
			cout<<"Destrutor called for :"<<name<<endl;  
			total_departments--;					//destructor decrement total_departments
		}
		
		string get_name();
		
		static int get_total()	//static function
		{
			return total_departments;
		}
	
	int get_students(); // declare
	void show_data(); //declare
};

inline int Department::get_students() //inline
{
	return num_students;
}

inline string Department::get_name() //inline
{
	return name;
}

inline void Department::show_data()
{
	cout<<"Name of the Department :"<<get_name()<<endl;
	cout<<"Number of Students in the Department :"<<get_students()<<endl;
	cout<<"Total number of Departments :"<<get_total()<<endl;
	cout<<"************************************\n";
}

int Department::total_departments=0;

int main(void)
{
	Department dep1("CS",2000);
	dep1.show_data();				//call showdata of dep1

	Department dep2("BIO",3000);
	dep2.show_data();					//call showdata of dep2

	
	dep1.~Department();			//destructor of dep1		
	dep2.~Department();			//destructor of dep2

	
	cout<<"Total departments:"<<Department::get_total()<<endl; 
	//static function call with class name & scope resolution operator
	
	
	cout<<"Here is the end of the main."<<endl;
	exit(0);
	return 0;
}
