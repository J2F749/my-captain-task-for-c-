#include<iostream>
using namespace std;
class time
{
	public:
		int hrs,min,sec,total;
};
int main()
{
    time t1;
	cout<<"Enter time:\n";
	cout<<"no. of HOURS:\n";
	cin>>t1.hrs;
	cout<<"no. of MINUTES:\n";
	cin>>t1.min;
	cout<<"no.of SECONDS:\n";
	cin>>t1.sec;
	cout<<"The time is : "<<t1.hrs<<":"<<t1.min<<":"<<t1.sec<<"\n";
		if(t1.hrs>=2)
		{
	    	t1.total=(t1.min*t1.sec)*2;
			t1.hrs++;    	
	    }
        else
         {
             t1.total=t1.min*t1.sec;
        }
	cout<<"Total no.of seconds:"<<t1.total;
} 
