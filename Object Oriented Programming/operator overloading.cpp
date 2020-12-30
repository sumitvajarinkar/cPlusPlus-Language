//operator overloading

 
 #include<iostream>
using namespace std;
class Distance
{ 
	public:
		int km,meter,cm;
		Distance()
		{
			km=0;
			meter=0;
			cm=0;
		}
	    Distance(int KM,int METER,int CM)
		{
			km=KM;
			meter=METER;
			cm=CM;
		}
	    Distance operator +(Distance &d2)		//binary 
		{
			Distance d3;
			d3.km =km+d2.km;
			d3.meter=meter + d2.meter;
	    	d3.cm=cm+d2.cm;
	    	if(d3.km>100)
	    	{
	    		d3.km++;
			}
			if(d3.meter>100)
	    	{
	    		d3.meter++;
			}
			if(d3.cm>100)
	    	{
	    		d3.cm++;
			}
	        return d3;
        }
		friend void operator++(Distance d1);	// friend unary

		friend void operator <(Distance d1,Distance d2);  //friend binary
		
};
 void operator ++(Distance d1)	//unary
		{
			d1.km++;
			d1.meter++;
			d1.cm++;
			cout<<"km:"<<d1.km<<endl;
			cout<<"meter:"<<d1.meter<<endl;
			cout<<"cm:"<<d1.cm<<endl;
		}
void operator <(Distance d1,Distance d2)  //binary 
		{
			if(d1.km == d2.km && d1.meter == d2.meter && d1.cm == d2.cm)
			{
				cout<<"Value of x=0"<<endl;
			}
			if(d1.km > d2.km && d1.meter > d2.meter && d1.cm > d2.cm)
			{
				cout<<"Value of x=-1"<<endl;
			}
			if(d1.km < d2.km && d1.meter < d2.meter && d1.cm < d2.cm)
			{
				cout<<"Value of x=1"<<endl;
			}
		}
int main()
{ 
	Distance d1(9,8,7);
	Distance d2(1,2,3);
	Distance d3;
	cout<<"Binary operator called:"<<endl;
	d3=d1+d2;								//binary
	cout<<"km value:"<<d3.km<<endl<<"meter value:"<<d3.meter<<endl<<"cm value:"<<d3.cm<<endl;
	cout<<endl;	
	cout<<"Unary operator called:"<<endl;
	++d1;									//unary
	cout<<endl;
	cout<<"Comparison operator called:"<<endl;
	d1<d2;
	return 0;
}
