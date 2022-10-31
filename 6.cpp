#include<iostream>
using namespace std;
int main()
{
	int i,j,n,k=1;
	for(n=4;n>0;n--)
	{
		for(i=0;i>=j;i++)
		{
			cout<<"*";
		}
		for(j=4;j>=k;j++)
		{
			cout<<" ";
		}
		k++;
		cout<<endl;
	}
	return 0;
}
