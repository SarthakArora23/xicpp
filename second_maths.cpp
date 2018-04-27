#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    cout<<234;
    cout<<"        ";
	cout<<57567;
	cout<<"        ";
	cout<<4564655;
	
	
	cout<<endl;
	cout<<234<<"       "	<<57567<<"       "<<45634343;
	
	cout<<endl;
	cout<<234<<"\t"	<<57567<<"\t"<<45634343;
	cout<<endl;
	cout<<234<<"\t"	<<57567<<"\t"<<45634343;
	
	cout<<endl;
	
	cout<<setw(10)<<234;
	cout<<setw(10)<<23456;
	cout<<setw(10)<<456456456;
	
	cout<<"\n Numbers with Fractions \n";
	cout<<2.3456789;
	
	cout<<"\n Numbers with Fractions and precision \n";
	cout<<setprecision(3)<<2.345678;
	
	
	
	return 0;
}
