#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        cout<<hex<<n<<endl;
        cout<<oct<<n<<endl;
        cout<<dec<<right<<setw(10)<<setfill('*')<<n<<endl;
    }
    return 0;
}
