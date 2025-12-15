#include<bits/stdc++.h>
#include"hhh.h"
using namespace std;
double rrr::v()
{
    return 3.14*1.33*r*r*r;
}
void rrr::printt()
{
    cout<<"该球体的体积为："<<v()<<endl;
}

double hhh::v()
{
    return x*y*z;
}
void hhh::printt()
{
    cout<<"该立方体的体积为："<<v()<<endl;
}


double rh::v()
{
    return 0.33*3.14*r*r*h;
}
void rh::printt()
{
    cout<<"该圆锥的体积为："<<v()<<endl;
}
int xcompare(const void * s1,const void * s2)
{
    ben ** p1=(ben ** )s1;
    ben ** p2=(ben ** )s2;
    double a1=(* p1)->v();
    double a2=(* p2)->v();
    if(a1<a2)
        return -1;
    else if(a1==a2)
        return 0;
    else
        return 1;
}
