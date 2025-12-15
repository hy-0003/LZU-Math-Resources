#include<bits/stdc++.h>
using namespace std;
class stu
{
private:
    string name;
    int year;
    int h;
    double x1,x2,x3,x4;
    double ave();
public:void sett(string n,int y,int hh,double x11,double x22,double x33,double x44);
        void shuchu();
        //3.3新增
          stu(){};
          stu(int tmpid);
          stu(string tmpname,int tmpage,int tmpid);
        //3.3
};
//3.3新增
  stu::stu(int tmpid)
  {
      h=tmpid;
  }
  stu::stu(string tmpname,int tmpage,int tmpid)
  {
      year=tmpage;
      h=tmpid;
      name=tmpname;
  }
//3.3
double stu::ave()
{
    return (x1+x2+x3+x4)/4;
}
void stu::shuchu()
{
    cout<<name<<endl<<year<<endl<<h<<endl<<ave()<<endl;
}
void stu::sett(string n,int y,int hh,double x11,double x22,double x33,double x44)
{
    name=n;
    year=y;
    h=hh;
    x1=x11;
    x2=x22;
    x3=x33;
    x4=x44;
}

int main()
{
    stu a;
    string n;int y;int hh;double x11,x22,x33,x44;
    cout<<"please add student's name"<<endl;
    cin>>n;
    cout<<"please add student's year"<<endl;
    cin>>y;
    cout<<"please add student's xuehao"<<endl;
    cin>>hh;
    cout<<"please add student's score(4)"<<endl;
    cin>>x11>>x22>>x33>>x44;
    a.sett(n,y,hh,x11,x22,x33,x44);
    a.shuchu();

    //3.3新增
      stu k;
      stu b(320230);
      stu c("mike",18,320230);
      c.shuchu();//4个成绩未输入，所以平均成绩随机
    return 0;
}
