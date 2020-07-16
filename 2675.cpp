#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    int t, r;
    cin>>t;
    string p;
    string total="";
    vector<string> vec;

    for(int i=0; i<t; i++)
    {
        cin>>r>>p;
        for(int j=0; j<p.length();j++)
            for(int k=0; k<r; k++)
                total+=p[j];
        vec.push_back(total);
        total="";
    }

    for(int i=0; i<vec.size(); i++)
    	cout<<vec[i]<<endl;

    return 0;
}