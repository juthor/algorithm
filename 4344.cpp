#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main(void) {
    int n, sub;

    cin>>n;
    vector<double> result(n);

    for (int i=0; i<n; i++)
    {
        cin>>sub;

        vector<double> vec(sub);
        for (int j=0; j<sub; j++)
        {
            cin>>vec[j];
            result[i]+=vec[j];
        }

        result[i] =result[i]/(int)sub;
        int count=0;
        for (int k=0; k<sub; k++)
            if (vec[k]>result[i])
            	count++;
        result[i]=(double)count/(double)sub;
    }
    for (int k=0; k<n; k++)
    {
        printf("%.3lf", result[k]*100);
        cout<<"%\n";
    }
}
