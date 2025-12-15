#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k[8];
    for(int i=0;i<8;++i)
    {
        cin>>k[i];
    }
    for(int i=0;i<8;++i)
    {
        for(int j=0;j<7;++j)
        {
            if(k[j]>k[j+1])
            swap(k[j],k[j+1]);
        }
    }
    for(int i=0;i<8;++i)
    {
        cout<<k[i]<<endl;
    }
    return 0;
}
