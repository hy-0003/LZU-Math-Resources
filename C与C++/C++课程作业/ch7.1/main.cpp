#include<bits/stdc++.h>
#include"ch7.1.h"
using namespace std;
/*class ccomplex
{
public:
    double real;
    double image;
    ccomplex();
    ccomplex(double a,double b);
    ccomplex(const ccomplex & k);

    ccomplex & operator +(const ccomplex & k);
    ccomplex & operator -(const ccomplex & k);
    ccomplex & operator *(const ccomplex & k);
    ccomplex & operator /(const ccomplex & k);
    ccomplex & operator =(string m);


    ccomplex operator ++();
    ccomplex operator ++(int n);
    ccomplex operator --();
    ccomplex operator --(int n);


    friend   ostream & operator <<(ostream & x,const ccomplex & c);
    friend   istream & operator >>(istream & x,ccomplex & c);

    operator double();
};



ccomplex::ccomplex()
{
    real=0;
    image=0;
}
ccomplex::ccomplex(double a,double b)
{
    real=a;
    image=b;
}
ccomplex::ccomplex(const ccomplex & k)
{
    real=k.real;
    image=k.image;
}



ccomplex & ccomplex::operator +(const ccomplex & k)
{
    real=real+k.real;
    image=image+k.image;
    return *this;
}
ccomplex & ccomplex::operator -(const ccomplex & k)
{
    real=real-k.real;
    image=image-k.image;
    return *this;
}
ccomplex & ccomplex::operator *(const ccomplex & k)
{
    real=real*k.real-image*k.image;
    image=real*k.image+image*k.real;
    return *this;
}
ccomplex & ccomplex::operator /(const ccomplex & k)
{
    real=(real*k.real+image*k.image)/(k.real*k.real+k.image*k.image);
    image=(k.real*image-k.image*real)/(k.real*k.real+k.image*k.image);
    return *this;
}


ccomplex & ccomplex::operator =(string m)
{
    int x=m.find("+",0);
    string a=m.substr(0,x);
    real=atof(a.c_str());
    a=m.substr(x+1,m.length()-x-2);
    image=atof(a.c_str());
    return *this;
}


ccomplex ccomplex::operator ++()
{
    ++real;
    return *this;
}
ccomplex ccomplex::operator ++(int n)
{
    ccomplex k(*this);
    ++real;
    return k;
}
ccomplex ccomplex::operator --()
{
    --real;
    return *this;
}
ccomplex ccomplex::operator --(int n)
{
    ccomplex k(*this);
    --real;
    return k;
}


ostream & operator <<(ostream & x,const ccomplex & c)
{
    x<<c.real<<"+"<<c.image<<"i";
    return x;
}
istream & operator >>(istream & x,ccomplex & c)
{
    string s;
    x>>s;
    int d=s.find("+",0);
    string k=s.substr(0,d);
    c.real=atof(k.c_str());
    k=s.substr(d+1,s.length()-d-2);
    c.image=atof(k.c_str());
    return x;
}


ccomplex::operator double()
{
    return (sqrt(real*real+image*image));
}*/
int main()
{
    ccomplex a(1,1);
    ccomplex b(2,2);
    ccomplex c(b);
    cout<<(a-b).real<<endl;


    ccomplex bb;
    bb="1.2+1.2i";
    cout<<bb.real<<endl<<bb.image<<endl;
    cout<<endl;

    cout<<(--bb).real<<endl<<(bb--).real<<endl;
    cout<<bb.real<<endl;
    cout<<endl;

    cout<<(++bb).real<<endl<<(bb++).real<<endl;
    cout<<bb.real<<endl;
    cout<<endl;


    ccomplex tt(3,4);
    cout<<(double)tt<<endl;
    cout<<endl;


    ccomplex x;
    cin>>x;
    cout<<x;
    return 0;
}
