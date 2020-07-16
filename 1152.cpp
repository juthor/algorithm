#include<iostream>
#include<string>
using namespace std;

int main(void)
{
	string str, a;
	int i=0, count=1;

	getline(cin, str);
	int len=str.size();
	a=str[0];
	if(a==" ")
		count=0;

	while(i<len)
	{
		a="";
		a=str[i];
		if(a==" ")
			count++;
		i++;
	}
	a=str[len-1];
	if(a==" ")
			count--;
	cout<<count;
}
