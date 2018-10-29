#include<iostream>
using namespace std;
int main(){
	int dno;
	cout<<"\n Enter day number :";
	cin>>dno;
	system("cls");  //clrscr();
	switch(dno){
		
		cout<<"Hello chetan...Thoda saa dhyan de";
		
		case 1: cout<<"Monday";
				break;
		case 2:	cout<<"Tuesday";
				break;
		case 3:	cout<<"Wednesday";
				break;
		case 4:	cout<<"Thursday";
				break;
		case 5:	cout<<"Friday";
				break;
		case 6:	cout<<"Saturday";
				break;
		case 7:	cout<<"Sunday";
				break;
		default:
				cout<<"\n Wrong Day number...Please try something valid";
	}
	return 0;
}
