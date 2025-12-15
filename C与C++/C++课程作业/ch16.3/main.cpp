#include<iostream>
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
    if(argc!=3)
    {
        cout<<"file failed"<<endl;
        return 0;
    }

    ifstream ccin(argv[1],ios::in|ios::binary);
    if(!ccin)
    {
        cout<<"ccin failed"<<endl;
        return 0;
    }

    ofstream ccout(argv[2],ios::out);
    if(!ccout)
    {
        cout<<"ccout failed"<<endl;
        return 0;
    }

    int n;
    CStudent c;char k='\n';
    ccin.read((char *) &n,sizeof(n));
    ccout<<n;
    ccin.read((char *) &k,sizeof(k));
    ccout<<endl;



    CStudent a[n];
    for(int i=0;i<n;++i)
    {
        ccin.read((char *) & c,sizeof(c));
        a[i]=c;
        ccin.read((char *) &k,sizeof(k));
    }
    for(int j=0;j<n;++j)
    {
        for(int i=0;i<n-1;++i)
      {
        if(a[i].age>a[i+1].age)
            swap(a[i],a[i+1]);
      }
    }
    for(int i=0;i<n;++i)
    {
        //ccin.read((char *) & c,sizeof(c));
        ccout<<a[i].szname<<" "<<a[i].age;
        //ccin.read((char *) &k,sizeof(k));
        ccout<<endl;
    }
    ccout.close();
    ccin.close();
    return 0;
}
