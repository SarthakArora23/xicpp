#include<iostream>
using namespace std;
int main(){
	int i,j,n;
	cout<<"\n Enter n :";
	cin>>n;
	for(i=1;i<=n;i++)
	{
	  for(j=1;j<=10;j++)
		cout<<i<<"x"<<j<<"="<<i*j<<endl;
	  cout<<"\n\n";
}
	return 0;
}
