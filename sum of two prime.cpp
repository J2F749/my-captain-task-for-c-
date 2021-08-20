#include <iostream>
using namespace std;
 bool Prime(int n);
 int main() 
 {
    int n, i;
    bool signal=false;
    cout << "Enter a positive  integer: ";
    cin >> n;

    for(i=2;i<=n/2;++i)
	 {
    	if(Prime(i)){
    		if(Prime(n-i)){
		         cout << n << " = " << i << " + " << n-i << endl;
                 signal=true;
				      
			}
     } 
    }
     
		  if (!signal)
           {
			 cout << n << " can't be expressed as sum of two prime numbers.";
        }
        else
        {
        	cout<<"Sum of Two Prime Nnumber is shown.";
		}
    return 0;

};

bool Prime(int n)
{
	int i;
	bool prime=true;
	if(n==0 && n==1)
	{
		prime=false;
	}
	else
	{
		for(i=2;i<=n/2;++i)
		{
			if(n%i==0)
			{
				prime=false;
				break;
			}
		}
	}
	
	return prime;
	
}
