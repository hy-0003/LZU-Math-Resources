#include<bits/stdc++.h>
using namespace std;
int main()
{
    string x="(1.3,2.33,8.9000,8,8.0997,0.8)";
    string x1=x;
    int sum=0;
    for(int i=0;i<x.length();++i)
    {
        if(x[i]==',')
            ++sum;
    }
    int n=sum+1;
    int d[sum+1]={0,0};
    for(int i=1;i<sum+1;++i)
    {
        for(int j=0;j<x1.length();++j)
        {
            if(x1[j]==',')
            {
                d[i]=j;
                x1[j]=0;
                break;
            }
        }
    }
    for(int i=0;i<sum+1;++i)
    {
        cout<<d[i]<<endl;
    }
    string w[n];
    for(int i=0;i<n;++i)
    {
        w[i]=x.substr(d[i]+1,d[i+1]-d[i]-1);
    }
    w[n-1]=w[n-1].substr(0,w[n-1].length()-1);
    double k[n];
    for(int i=0;i<n;++i)
    {
        k[i]=stod(w[i]);
    }
    return 0;
}
