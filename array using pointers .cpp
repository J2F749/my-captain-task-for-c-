#include<iostream>
using namespace std;
int main()
{
	
	int arr[5];
	cout<<"enter elements:";
    for(int i=0;i<6;i++)
    {
	 cin>>*(arr+i);
    }
	
    cout<<"you enetered:";
    for(int i=0;i<6;i++)
	{
		cout<<*(arr+i)<<endl;
		
		
	}
	return 0;
}




