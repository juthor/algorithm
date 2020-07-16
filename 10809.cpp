#include<iostream>
#include<string>
#include<cstdlib>
using namespace std;

int main(void)
{
	int alphabet[26];
	string st;

	for(int i=0; i<26; i++)
		alphabet[i]=-1;

	cin>>st;
	for(int i=0; i<st.length(); i++)
	{
		if(alphabet[st[i]-97]==-1)
			alphabet[st[i]-97]=i;
	}
	for(int i=0; i<26; i++)
		cout<<alphabet[i]<<" ";
	return 0;
}