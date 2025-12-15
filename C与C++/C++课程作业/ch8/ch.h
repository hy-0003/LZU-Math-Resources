#ifndef CH_H_INCLUDED
#define CH_H_INCLUDED
#include<bits/stdc++.h>
class shape
{
public:
    int shapeid;
    float  area;

    shape();
    shape(int tmpid);
    ~shape();
    float computerarea();
};

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
#endif // CH_H_INCLUDED
