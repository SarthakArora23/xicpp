#include<iostream>
using namespace std;
int main(){
  int n=6;
  int fact,i;
  fact = 1;
  for(i=1;i<=n;i++)
    {
    	fact = fact*i;
    	cout<<"Fact "<<fact;
	}
	cout<<"\n Final result :"<<fact;
	return 0;
}
