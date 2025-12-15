#ifndef T_H_INCLUDED
#define T_H_INCLUDED
#include<bits/stdc++.h>
using namespace std;
class vvectors
{
public:
    double *p;
    int n;

    //构造函数
    vvectors();
    vvectors(double x[],int l);
    vvectors(string x);


    //复制函数
    vvectors(const vvectors & x);


    //运算重载
    //[]重载
    double & operator [](int i);

    //double重载为求模
    operator double ();

    //=
    vvectors & operator =(const vvectors & x);

    //+,-,数乘，内积，外积，夹角
    vvectors operator +(const vvectors x);//+
    vvectors operator -(const vvectors x);//-
    vvectors operator *(const double x);//c*2形式
    //全局函数
    friend vvectors operator *(const double x,const vvectors a);//2*c形式
    double operator *(const vvectors & x);//内积
    vvectors operator &&(const vvectors & x);//外积
    double operator ^(const vvectors & x);//夹角


    //输入输出
    friend ostream & operator <<(ostream & os,const vvectors & x);
    friend istream & operator >>(istream & is,vvectors & x);


    //析构函数
    ~vvectors();
};

#endif // T_H_INCLUDED
