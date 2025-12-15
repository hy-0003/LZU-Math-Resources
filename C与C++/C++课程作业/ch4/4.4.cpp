#include<bits/stdc++.h>
using namespace std;
class student
{
private:
    string name;
    int age;
    int number;
    int max_score;
    int had_object;
    int score;
    int *p;
    double had_score[100];
    double had_average_score;
public:
    int totalstunumber;
public:
    student();
    student(int _number);
    student(string _name,int _age,int _number);
    student(int _number,int score_number);
    ~student();
};

student::student()
{
    p=new int[max_score];
}
student::student(int _number)
{
    p=new int[max_score];
    number=_number;
}
student::student(string _name,int _age,int _number)
{
    p=new int[max_score];
    name=_name;
    age=_age;
    number=_number;
}
student::student(int _number,int score_number)
{
    p=new int[score_number];
    number=_number;
}

student::~student()
{
    delete [] p;
}

int main()
{
    string _name;
    int _age;
    int _number;
    cout<<"name"<<endl;
    cin>>_name;
    cout<<"age"<<endl;
    cin>>_age;
    cout<<"number"<<endl;
    cin>>_number;
    student students(_name,_age,_number);
    return 0;
}
