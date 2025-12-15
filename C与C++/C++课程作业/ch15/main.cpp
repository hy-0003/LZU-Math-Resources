#include<bits/stdc++.h>
#include"headd.h"
using namespace std;
/*class mycin
{
public:
    istream & a;
public:
    mycin():a(cin){}
    bool operator>>(int & n)
    {
        a>>n;
        if(n==100)
            return false;
        else
            return true;
    }
};*/
int main()
{
    mycin x;
    int n;
    /*do
    {
        cout<<n<<endl;
    }while(x>>n!=0);*/
    while(x>>n)
    {
        cout<<n<<endl;
    }
    return 0;
}
