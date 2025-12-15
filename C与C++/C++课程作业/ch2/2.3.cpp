#include<bits/stdc++.h>
using namespace std;
class stu
{
private:
    string name;
    int year;
    int h;
    double s[12];
    double ave(int x);
    int ban;
    int x;
public:void sett(string n,int y,int hh,int bann,double ss[12],int xx);
        void shuchu();
};


double stu::ave(int x)
{
    double avee=0;
    for(int i=0;i<x;++i)
    {
        avee=s[i]+avee;
    };
    return avee/x;
}
void stu::shuchu()
{
    cout<<"ta的班级号:"<<ban<<endl<<"ta的名字:"<<name<<endl<<"ta的年龄:"<<year<<endl<<"ta的学号:"<<h<<endl<<"ta的平均成绩:"<<ave(x);
}
void stu::sett(string n,int y,int hh,int bann,double ss[12],int xx)
{
    name=n;
    year=y;
    h=hh;
    ban=bann;
    for(int i=0;i<xx;++i)
    {
        s[i]=ss[i];
    }
    x=xx;
}


int main()
{
    stu a;
    string n;int y;int hh;double ss[12];int bann;int xx;
    cout<<"please add student's class"<<endl;
    cin>>bann;
    cout<<"please add student's name"<<endl;
    cin>>n;
    cout<<"please add student's year"<<endl;
    cin>>y;
    cout<<"please add student's xuehao"<<endl;
    cin>>hh;
    cout<<"please add student's subject number"<<endl;
    cin>>xx;
    cout<<"please add student's score("<<xx<<")"<<endl;
    for(int i=0;i<xx;++i)
    {
        cin>>ss[i];
    }
    a.sett(n,y,hh,bann,ss,xx);
    a.shuchu();
    return 0;
}
