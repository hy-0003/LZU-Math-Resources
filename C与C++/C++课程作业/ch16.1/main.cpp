#include <iostream>
#include<bits/stdc++.h>
#include<fstream>
using namespace std;
class CStudent
{
public:
    char szname[20];
    int age;
};
int main(int argc,char * argv[])
{
    if(argc!=2)
    {
        cout<<"file failed"<<endl;
        return 0;
    }
    ofstream ccout(argv[1],ios::out);
    if(!ccout)
    {
        cout<<"ccout failed"<<endl;
        return 0;
    }
    int n;
    CStudent c;
    cin>>n;
    ccout<<n<<endl;
    //ccout.write((char *) &n,sizeof(n));
    for(int i=0;i<n;++i)
    {
        cin>>c.szname>>c.age;
        //ccout.write((char *) &c,sizeof(c));
        ccout<<c.szname<<" "<<c.age<<endl;
    }
    ccout.close();
    return 0;
}
