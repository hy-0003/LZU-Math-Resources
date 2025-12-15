#include<bits/stdc++.h>
using namespace std;
int main()
{
    int nn;
    cin>>nn;
    int s[nn+1];
    for(int i=1;i<=nn;++i)
    {
        cin>>s[i];
    }
    for(int i=1;i<=nn;++i)
    {
        for(int j=1;j<=nn;++j)
        if(s[i]>=s[j])
        {
            swap(s[i],s[j]);
        }
    }
    for(int c=100;c>=0;--c)
    {
        int sum=0;
        for(int i=1;i<=nn;++i)
        {
            if(s[i]==c)
                ++sum;
        }
        if(sum!=0)
           cout<<c<<endl<<sum<<endl;
    }
    return 0;
}
