//program to print first 1000 natural numbers
// made by			: rakesh
// made on			: 13-august 2018

#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	int x;
	x=0;
	do{
		x= x+1;
		cout<<setw(8)<<x;
	}while(x<10000);
	return 0;
}
