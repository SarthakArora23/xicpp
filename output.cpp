#include<iostream>
using namespace std;
#define Modify(N) N*3+10
int main()
{
int LIST[]={10,15,12,17};
int *P=LIST, C;

for(C=3; C>=0; C--)
	LIST[C]=Modify(LIST[C]);

for (C=0; C<=3; C++)
	{
		cout<<*P<<":";
		P++;
	}
return 0;
}

