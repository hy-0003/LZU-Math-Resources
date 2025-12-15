#include<bits/stdc++.h>
#include"t.h"
using namespace std;
vvectors::vvectors()
{
    n=0;
    p=NULL;
}
vvectors::vvectors(double x[],int l)
{
    n=l;
    p=new double [n];
    for(int i=0;i<n;++i)
    {
        p[i]=x[i];
    }
}
vvectors::vvectors(string x)
{
    int l=x.length();
    int sum=0;
    for(int i=0;i<l;++i)
    {
        if(x[i]==',')
            ++sum;
    }
    n=sum+1;
    p=new double [n];


    string x1=x;
    int d[sum+1]={0,0};
    for(int i=1;i<sum+1;++i)
    {
        for(int j=0;j<x1.length();++j)
        {
            if(x1[j]==',')
            {
                d[i]=j;
                x1[j]=0;
                break;
            }
        }
    }
    string w[n];
    for(int i=0;i<n;++i)
    {
        w[i]=x.substr(d[i]+1,d[i+1]-d[i]-1);
    }
    w[n-1]=w[n-1].substr(0,w[n-1].length()-1);


    for(int i=0;i<n;++i)
    {
        p[i]=stod(w[i]);
    }
}


vvectors::vvectors(const vvectors & x)
{
    if(x.p)
    {
        p=new double [x.n];
        //memcpy(p,x.p,sizeof(double)*x.n);
        for(int i=0;i<x.n;++i)
        {
            p[i]=x.p[i];
        }
        n=x.n;
    }
    else
    {
        n=0;
        p=NULL;
    }
}


vvectors::operator double()
{
    double mmould=0;
    for(int i=0;i<n;++i)
    {
        mmould=mmould+p[i]*p[i];
    }
    return sqrt(mmould);
}
double & vvectors::operator [](int i)
{
    return p[i];
}
vvectors & vvectors::operator =(const vvectors & x)
{
    if(p)
    {
        delete []p;
        n=0;
    }
    n=x.n;
    p=new double [n];
    for(int i=0;i<n;++i)
    {
        p[i]=x.p[i];
    }
    return *this;
}
vvectors vvectors::operator +(const vvectors x)
{
    if(n!=x.n)
    {
        cout<<"不符合向量加法，请重试"<<endl;
        return *this;
    }
    else
    {
        double d[n];
        for(int i=0;i<n;++i)
        {
            d[i]=p[i]+x.p[i];
        }
        return vvectors(d,n);
    }
}
vvectors vvectors::operator -(const vvectors x)
{
    if(n!=x.n)
    {
        cout<<"不符合向量减法，请重试"<<endl;
        return *this;
    }
    else
    {
        double d[n];
        for(int i=0;i<n;++i)
        {
            d[i]=p[i]-x.p[i];
        }
        return vvectors(d,n);
    }
}

vvectors vvectors::operator *(const double x)
{
    if(n==0)
    {
        return *this;
    }
    else
    {
        double d[n];
        for(int i=0;i<n;++i)
        {
            d[i]=p[i]*x;
        }
        return vvectors(d,n);
    }
}
vvectors operator *(const double x,const vvectors a)
{
    if(a.n==0)
    {
        return a;
    }
    else
    {
        double d[a.n];
        for(int i=0;i<a.n;++i)
        {
            d[i]=a.p[i]*x;
        }
        return vvectors(d,a.n);
    }
}

double vvectors::operator *(const vvectors & x)
{
    if(n!=x.n)
    {
        cout<<"不符合向量内积，请重试"<<endl;
        return 0;
    }
    else
    {
        double sum=0;
        for(int i=0;i<n;++i)
        {
            sum=sum+p[i]*x.p[i];
        }
        return sum;
    }
}
double vvectors::operator ^(const vvectors & x)
{
    if(n!=x.n)
    {
        cout<<"不符合向量运算法则，请重试"<<endl;
        return 0;
    }
    double sum=0;
    for(int i=0;i<n;++i)
    {
        sum=sum+p[i]*x.p[i];
    }
    double x1=(double)*this;
    double x2=0;
    for(int i=0;i<n;++i)
    {
        x2=x2+x.p[i]*x.p[i];
    }
    x2=sqrt(x2);
    return acos(sum/(x1*x2));
}
vvectors vvectors::operator &&(const vvectors & x)
{
    if(n!=x.n)
    {
        cout<<"不符合向量外积，请重试"<<endl;
        return *this;
    }
    else
    {
        if(n!=3)
        {
            cout<<"除3维外，其他维度的计算功能还未开发"<<endl;
            return *this;
        }
        else
        {
             double d[3];
             d[0]=x.p[2]*p[1]-p[2]*x.p[1];
             d[1]=x.p[0]*p[2]-p[0]*x.p[2];
             d[2]=x.p[1]*p[0]-p[1]*x.p[0];
             return vvectors(d,3);
        }
    }
}



ostream & operator <<(ostream & os,const vvectors & x)
{
    if(x.n==0)
    {
        os<<0;
        return os;
    }
    else
    {
        os<<"(";
        for(int i=0;i<x.n-1;++i)
        {
            os<<x.p[i]<<",";
        }
        os<<x.p[x.n-1]<<")";
        return os;
    }
}
istream & operator >>(istream & is,vvectors & x)
{
    string a;
    is>>a;

    int l=a.length();
    int sum=0;
    for(int i=0;i<l;++i)
    {
        if(a[i]==',')
            ++sum;
    }
    x.n=sum+1;
    x.p=new double [x.n];


    string x1=a;
    int d[sum+1]={0,0};
    for(int i=1;i<sum+1;++i)
    {
        for(int j=0;j<x1.length();++j)
        {
            if(x1[j]==',')
            {
                d[i]=j;
                x1[j]=0;
                break;
            }
        }
    }
    string w[x.n];
    for(int i=0;i<x.n;++i)
    {
        w[i]=a.substr(d[i]+1,d[i+1]-d[i]-1);
    }
    w[x.n-1]=w[x.n-1].substr(0,w[x.n-1].length()-1);


    for(int i=0;i<x.n;++i)
    {
        x.p[i]=stod(w[i]);
    }
    return is;
}
vvectors::~vvectors()
{
    if(p)
    delete []p;
}
