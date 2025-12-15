#ifndef HEADD_H_INCLUDED
#define HEADD_H_INCLUDED
#include<iostream>
using namespace std;
class mycin
{
public:
    istream & a;
public:
    mycin():a(cin){}
    bool operator>>(int & n);
    /*{
        a>>n;
        if(n==100)
            return false;
        else
            return true;
    }*/
};


#endif // HEADD_H_INCLUDED
