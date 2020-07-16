#include<iostream>
using namespace std;

int main(void)
{
	int n, a, b;
	int count=0;
	cin>>n>>a>>b;

	while(a!=b)
	{
		a=a/2+a%2;
		b=b/2+b%2;
		count++;
	}
	cout<<count;
	return 0;
}
