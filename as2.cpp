// C++ program to find LCM of two numbers
#include <iostream>
using namespace std;
int gcd( int a, int b)
{
if (b == 0)
	return a;
return gcd(b, a % b);
}

long long lcm(int a, int b)
{
	return (a / gcd(a, b)) * b;
}

int main()
{
	int a,b;
	cout<<"A is= "<<endl;
	cin>>a;
	cout<<"B is= "<<endl;
	cin>>b;
	cout <<"LCM of " << a << " and "
		<< b << " is " << lcm(a, b);
	return 0;
}

