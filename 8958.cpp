#include<iostream>
#include<string>
using namespace std;

int main(void)
{
	int n;
	string str;
	cin>>n;

	for(int i=0; i<n; i++)
	{
		cin>>str;
		int total=0;
		int count=0;
		for(int j=0; j<str.length(); j++)
		{
			string a="";
			a=str[j];
			if(a=="O")
			{
				count+=1;
				total+=count;
			}
			else
				count=0;
		}
		cout<<total<<endl;
	}
}
