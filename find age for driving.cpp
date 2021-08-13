#include <iostream>
using namespace std;
int main() {
int a,b;
cout<<"Enter your age"<<a<<b;
cin>>a;
cin>>b;
if (a>=18 && b>=18)
cout<<"A and B qualified to drive";
else if (a<18) 
cout<<"Only A is not qualified to drive. But B is Qualified";
else if (b<18)
cout<<"Only B is not qualified to drive. But A is Qualified";
else 
cout<<"Both are not qualified to drive";
  return 0;  
}
