#ifndef CH7_1_H_INCLUDED
#define CH7_1_H_INCLUDED
#include<bits/stdc++.h>
using namespace std;
class ccomplex
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

#endif // CH7_1_H_INCLUDED
