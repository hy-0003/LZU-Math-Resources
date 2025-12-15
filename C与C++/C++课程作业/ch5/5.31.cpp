#include<bits/stdc++.h>
#include<C:\Users\86182\Desktop\C++\ch5\5.31.h>
using namespace std;
static int stunumber=1000;
void s_shuchu(string _objectnum);
class student
{
public:
    string name;
    int age;
    const int number=stunumber;
    int max_score;
    int had_object;
    double score[7]={0,0,0,0,0,0,0};
    int *p;
    double had_score[100];
    double had_average_score;
public:
    int totalstunumber;
public:
    student();
    student(string _name,int _age);
    student(int score_number);

    student(student & a);

    ~student();
    friend void s_shuchu(string _objectnum);
    friend class s;
};
class s
{
public:
    string objectnum[7]={"01","02","03","04","05","06","07"};
    int ss[7];
    int num[7]={0,0,0,0,0,0,0};
    double ave[7]={0,0,0,0,0,0,0};
    friend void s_shuchu(string _objectnum);
    void couttnum(student k[],int sum);
    void couttave(student k[],int sum);
    void coutt(student k[],int sum,string _objectnum);
};
void s_shuchu(s s1,student stu[],string _objectnum)
{
    for(int i=0;i<=7;++i)
    {
        if(s1.objectnum[i]==_objectnum)
        {
            cout<<s1.num[i]<<endl<<s1.ave[i]<<endl;
        }
    }
}
void s::couttnum(student k[],int sum)
{
    for(int i=0;i<sum;++i)
    {
        for(int j=0;j<7;++j)
        {
            if(k[i].score[j]!=0)
            {
                ++num[j];
            }
        }
    }
}
void s::couttave(student k[],int sum)
{
    for(int i=0;i<sum;++i)
    {
        for(int j=0;j<7;++j)
        {
            ave[j]=ave[j]+k[i].score[j];
        }
    }
    for(int j=0;j<7;++j)
    {
        if(num[j]==0)
        {
            ave[j]=0;
        }
        if(num[j]!=0)
        {
            ave[j]=ave[j]/(double)num[j];
        }
    }
}
void s::coutt(student k[],int sum,string _objectnum)
{
    for(int i=0;i<7;++i)
    {
        if(_objectnum==objectnum[i])
        {
            cout<<"一共有"<<num[i]<<"个学生"<<endl<<"平均分为："<<ave[i]<<endl;
            for(int j=0;j<sum;++j)
            {
                if(k[j].score[i]!=0)
                {
                    cout<<"第"<<k[j].number<<"个学生的信息如下:"<<endl<<"姓名:"<<k[j].name<<endl<<"年龄:"<<k[j].age<<endl<<"分数:"<<k[j].score[i]<<endl;
                }
            }
        }
    }
}


student::student()
{
    ++stunumber;
}
student::student(string _name,int _age)
{
    p=new int[max_score];
    name=_name;
    age=_age;
    ++stunumber;
}
student::student(int score_number)
{
    p=new int[score_number];
    ++stunumber;
}
student::student(student & a)
{
    name=a.name;
    age=a.age;
    ++stunumber;
}
student::~student()
{
    delete [] p;
}
