// program to print number triangle
// 1
// 1 2
// 1 2 3
// 1 2 3 4 
// 1 2 3 4 5
// made by 			: rakesh kumar
// made on			: 14-august 2018
#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	int row,col,spaces;
	row =0;
	do{
		row=row+1;
		// code for generating spaces
		spaces=0;
		do{
			spaces=spaces+1;
			cout<<" ";
		}while(spaces<5-row);
		// code for generating numbers
		col=0;
		do{
			col=col+1;
			cout<<col;
		}while(col<row);
		cout<<endl;
	}while(row<5);
	return 0;
}
