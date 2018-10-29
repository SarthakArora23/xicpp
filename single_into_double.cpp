#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	int x[12]={1,2,3,4,5,6,7,8,9,0,11,12};
	int y[3][4];
	int i,j,row,col;
	row=col=0;
	for(i=0;i<12;i++){
		if((i!=0) && (i%4==0)){
			row= row+1;
			col=0;
		}
	  y[row][col]=x[i];
	  col++;
	}
	//output phase
	cout<<"\n Single Dimensional Array : ";
	for(i=0;i<12;i++)
		cout<<setw(6)<<x[i];
	cout<<"\n Double Dimensional Array : \n\n\n";
	for(i=0;i<3;i++)
	  {
	    for(j=0;j<4;j++)
	       cout<<setw(8)<<y[i][j];
	    cout<<endl;
      }
	      
	return 0;
}
