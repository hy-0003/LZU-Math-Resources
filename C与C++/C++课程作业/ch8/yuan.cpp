#include<bits/stdc++.h>
#include"ch.h"
using std::cout;
using std::cin;
using std::endl;
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
}
