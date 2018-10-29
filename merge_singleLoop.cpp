#include<iostream>
using namespace std;
int main()
{
	int x[8]={1,2,3,4,5,6,7,8};
	int y[2]={1,2};
	int z[10],i,a,b,q;
	a=b=q=0;
	for(i=0;i<10;i++)
	{
		if(x[a]>y[b])
		
			z[q++]=x[a++];
			else
			z[q++]=y[b++];
		
	}
for(i=0;i<10;i++)
cout<<z[i]<<" ";
return 0;

}
