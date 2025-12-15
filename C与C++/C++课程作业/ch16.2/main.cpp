#include <iostream>
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
    ofstream ccout(argv[1],ios::out|ios::binary);
    if(!ccout)
    {
        cout<<"ccout failed"<<endl;
        return 0;
    }
    int n;char endd='\n';
    CStudent c;
    cin>>n;
    ccout.write((char *) &n,sizeof(n));
    ccout.write((char *) &endd,sizeof(endd));
    for(int i=0;i<n;++i)
    {
        cin>>c.szname>>c.age;
        ccout.write((char *) &c,sizeof(c));
        ccout.write((char *) &endd,sizeof(endd));
    }
    ccout.close();
    return 0;
}
