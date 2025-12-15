#ifndef CH6_1,H_H_INCLUDED
#define CH6_1,H_H_INCLUDED
#include<bits/stdc++.h>
class sstring
{
public:
    char *s;
    int chang;
public:
    //1.sstring的构造
    sstring();
    //失败sstring(char m[],int n);

    //2.sstring的复制构造函数
    sstring(const sstring & g);
    //3.sstring的运算
    //=，+，==，！=，<,>,<=,>=
    sstring & operator =(const char *k);
    sstring & operator +(sstring & g);
    int operator ==(sstring & g);
    int operator !=(sstring & g);
    void operator >(sstring & g);
    void operator <(sstring & g);
    void operator <=(sstring & g);
    void operator >=(sstring & g);
    //4.sstring的数组形式
    char & operator [](int i);
    //5.sstring的析构函数
    ~sstring();
};


#endif // CH6_1,H_H_INCLUDED
