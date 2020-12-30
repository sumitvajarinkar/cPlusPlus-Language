//file handling

#include<iostream>
#include<fstream> 
#include<conio.h>
//#include<stdio.h>
using namespace std;

int main()
{

  	ofstream fout;
  	ifstream fin;
  	
    string nm,department,clg_nm;
	int n,c;

  fout.open("studentinfo.txt"); 
    
        cout<<"Enter the name of student : "; 
        getline(cin, nm); 
        cout<<"Enter the Student Roll no. : ";
        cin>>n;
        cout<<"Enter the name of your department : ";
        cin>>department; 
        cout<<"Enter your college name : ";
        cin>>clg_nm; 
        
		fout<<nm<<endl;
		fout<<n<<endl;
		fout<<department<<endl;
		fout<<clg_nm; 
    
  fout.close(); 
  
    cout<<"If you want to delte file enter 1";
    cin>>c;
    if(c == 1)
    {
		remove("studentinfo.txt");
		fout<<"File deleted successfully !\n";
	}

	return 0;
}
