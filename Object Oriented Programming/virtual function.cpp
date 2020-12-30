//virtual function-runtime-override

/*
	int t i/p
	1 for professor class
	2 for student class

i/p
	4
	1
	walter 56 99
	2
	jesse 18 50 48 97 76 34 98
	2
	pinkman 22 10 12 0 18 45 50
	1
	white 58 87	

*/
#include <bits/stdc++.h>
using namespace std;

class Person
{
    protected:
      int age;
      string name;
    public:
          virtual void getdata(){};
          virtual void putdata(){};
};

class Professor : public Person	
{
    int publication;
    static int id1;
    
      public:
       void getdata()
       {
           cin>>name;
           cin>>age;
           cin>>publication;
       }
       void putdata()
       {
          cout<<name<<" "<<age<<" "<<publication<<" "<<id1<<endl;
          id1++;
       }
};

int Professor::id1=1; //intialize Professor as 1 

class Student : public Person
{
    int marks[6];
    static int id2;
     
  public:
  	
      int sum=0;
   void getdata()
   {
       cin>>name;
       cin>>age;
       for(int i=0;i<=5;i++)
       {
          cin>>marks[i];
          sum=sum+marks[i];
       }
   }
   void putdata()
   {
      cout<<name<<" "<<age<<" "<<sum<<" "<<id2<<endl;
      id2++;
   }
};

int Student::id2=1; //intialize Professor as 1

int main()
{

    int n, val;
    cin>>n; 

    Person *per[n];

    for(int i = 0;i < n;i++)
    {

        cin>>val;
        if(val == 1)
        {
            //val is 1 for Professor
            per[i] = new Professor;

        }
        else 
		// Else for Student
			per[i] = new Student; 
		
	// getdata 
    per[i]->getdata(); 

    }

    for(int i=0;i<n;i++)
    // putdata
        per[i]->putdata(); 

    return 0;

}
