// Program to calculate simple interest 
// made by 			: rakesh kumar
// made on			: 13-auguest-2018

#include<iostream>
using namespace std;
int main(){
	int p,r,t,si;
	cout<<"Enter Priciple Amount : ";
	cin>>p;
	cout<<"\nEnter Rate of Interest : ";
	cin>>r;
	cout<<"\nEnter Time in Years : ";
	cin>>t;
	si = (p*r*t)/100;
	
	cout<<"\nSimple Interest : ";
	cout<<si;
	
	return 0;
}
