#include <iostream>
using namespace std;
int isprime(int nn)
{
    if(nn <= 1) return 0;
    if(nn == 2) return 1;
    for(int i = 2; i * i <= nn; ++i)
    {
        if(nn % i == 0)
            return 0;
    }
    return 1;
}
int main()
{
    int nn;
    cin>>nn;
    int s=isprime(nn);
    if(s==1) cout<<"yes";
    else cout<<"no";
    return 0;
}
