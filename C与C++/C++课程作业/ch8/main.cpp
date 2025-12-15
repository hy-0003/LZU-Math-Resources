#include<bits/stdc++.h>
#include"ch.h"
using namespace std;
/*class shape
{
public:
    int shapeid;
    float  area;

    shape();
    shape(int tmpid);
    ~shape();
    float computerarea();
};
shape::shape(int tmpid)
{
    shapeid=tmpid;
    cout<<"Shape["<<shapeid<<"]construct!"<<endl;
}
shape::~shape()
{
    cout<<"Shape["<<shapeid<<"]destruct!"<<endl;
}
float shape::computerarea()
{
    cout<<"Base shape,no area"<<endl;
    return 0;
}
shape::shape()
{
    shapeid=0;
    cout<<"Shape["<<shapeid<<"]construct!"<<endl;
}


class rectangle:public shape
{
public:
    float w;
    float h;

    rectangle(float tmpw,float tmph);
    rectangle(int tmpid,float tmpw,float imph);
    ~rectangle();
    float computerarea();
};


rectangle::rectangle(float tmpw,float tmph)
{
    w=tmpw;
    h=tmph;
    shapeid=1000;
    cout<<"Rectangle["<<shapeid<<"]construct with construct1!"<<endl;
}
rectangle::rectangle(int tmpid,float tmpw,float tmph)
{
    w=tmpw;
    h=tmph;
    shapeid=tmpid;
    cout<<"Rectangle["<<shapeid<<"]construct with construct2!"<<endl;
}
rectangle::~rectangle()
{
    cout<<"Rectangle["<<shapeid<<"]destruct!"<<endl;
}
float rectangle::computerarea()
{
    cout<<"Area="<<w*h<<endl;
}*/
int main()
{
    shape c;
    rectangle l(1,1,1);
    return 0;
}
