#include<bits/stdc++.h>
#include"ch6.1,h.h"
using std::cout;
using std::endl;
sstring::sstring()
{
    chang=0;
    s=NULL;
}
/*sstring::sstring(char m[],int n)
{
    if(n==0)
        s=NULL;
    else
        chang=n;
        s=new char [n];
        for(int i=0;i<n;++i)
        {
            cout<<m[i];
        }
}*/


sstring::sstring(const sstring & g)
{
    chang=g.chang;
    if(s==g.s)
    if(s)
    delete []s;
    if(g.s)
    {
        s=new char [chang+1];
        strcpy(s,g.s);
    }
    else
    {
        chang=0;
        s=NULL;
    }
}


sstring & sstring::operator =(const char *k)
{
    if(s)
        delete []s;
    if(k)
    {
        chang=strlen(k);
        s=new char [strlen(k)+1];
        strcpy(s,k);
    }
    else
    {
        chang=0;
        s=NULL;
    }
    return *this;
}
sstring & sstring::operator +(sstring & g)
{
    if(s==NULL)
    {
        return g;
    }
    else
    {
        if(g.s==NULL)
            return *this;
        else
        {
            sstring ss;
            ss.chang=chang;
            ss.s=new char [chang];
            strcpy(ss.s,s);
            s=new char [chang+g.chang];
            for(int i=0;i<chang;++i)
            {
                s[i]=ss[i];
            }
            strcat(s,g.s);
            chang=chang+g.chang;
            return *this;

            /*失败
            sstring ss;
            sstring *k;
            k=(sstring *) & ss;
            ss.chang=chang+g.chang;
            ss.s=new char [chang+g.chang];
            for(int i=0;i<chang;++i)
            {
                ss[i]=s[i];
            }
            strcat(ss.s,g.s);
            return k;
            */
        }
    }
}
int sstring::operator ==(sstring & g)
{
    if(chang!=g.chang)
        return -1;
    else
    {
        for(int i=0;i<chang;++i)
        {
            if(s[i]!=g.s[i])
                return -1;
        }
        return 0;
    }
}
int sstring::operator !=(sstring & g)
{
    if(chang!=g.chang)
        return 0;
    else
    {
        for(int i=0;i<chang;++i)
        {
            if(s[i]!=g.s[i])
                return 0;
        }
        return -1;
    }
}
void sstring::operator >(sstring & g)
{
    if(chang>g.chang)
        cout<<"本sstring大于另一个sstring"<<endl;
    else
        cout<<"本sstring不大于另一个sstring"<<endl;
}
void sstring::operator <(sstring & g)
{
    if(chang<g.chang)
        cout<<"本sstring小于另一个sstring"<<endl;
    else
        cout<<"本sstring不小于另一个sstring"<<endl;
}
void sstring::operator <=(sstring & g)
{
    if(chang<=g.chang)
        cout<<"本sstring小于等于另一个sstring"<<endl;
    else
        cout<<"本sstring不小于等于另一个sstring"<<endl;
}
void sstring::operator >=(sstring & g)
{
    if(chang>=g.chang)
        cout<<"本sstring大于等于另一个sstring"<<endl;
    else
        cout<<"本sstring不大于等于另一个sstring"<<endl;
}



char & sstring::operator [](int i)
{
    return s[i];
}


sstring::~sstring()
{
    if(s)
        delete []s;
}
