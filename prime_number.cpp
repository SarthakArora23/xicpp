// program to find out prime number
// made by 			: rakesh kumar
// made on			: 14-august 2018
#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	int n,i,rem,found;
	cout<<"Enter any number :";
	cin>>n;
	found =0;
	i=1;
	do{
		i = i+1;
		rem = n%i;
		if(rem==0)
			found=1;
	}while(i<(n/2));
	if(found==0)
		cout<<"\n Number is a prime number";
	else
		cout<<"\n Number is Not a prime number";
	return 0;
}
