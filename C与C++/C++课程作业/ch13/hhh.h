#ifndef HHH_H_INCLUDED
#define HHH_H_INCLUDED
class ben
{
public:
    virtual double v()=0;
    virtual void printt()=0;
};
class hhh:public ben
{
public:
    double x;
    double y;
    double z;
    virtual double v();
    virtual void printt();
};
class rrr:public ben
{
public:
    double r;
    virtual double v();
    virtual void printt();
};
class rh:public ben
{
public:
    double r;
    double h;
    virtual double v();
    virtual void printt();
};
int xcompare(const void * s1,const void * s2);

#endif // HHH_H_INCLUDED
