#include <bits/stdc++.h>
using namespace std;
/*template<class T>
void print(const vector<T> & a)
{
    typename vector<T>::const_iterator v;//const必须加，为什么？
    for(v=a.begin();v!=a.end();++v)
    {
        cout<<* v<<" "<<endl;
    }
}
class average
{
public:
    double operator ()(int x1,int x2,int x3)
    {
        return double(x1+x2+x3)/3;
    }
};
*/
/*
template<class T>
class sumpower
{
private:
    int cishu;
public:
    sumpower(int n):cishu(n){}
    T operator ()(T & total,T & value)
    {
        T v=value;
        for(int i=0;i<cishu-1;++i)
        {
            v=v*value;
        }
        return total+v;
    }
};*/


/*
class d
{
public:
    int n;
    d(int m):n(m){};
    ~d()
    {
        cout<<n<<"had been destoryed"<<endl;
    }
};



bool boolzerotwo(double m)
{
    return m==0.2;
}

*/
class A
{
public:
    int d;
    A(int D):d(D){};
    bool operator ==(int dd)
    {
       return dd==d;
    }
    bool operator ==(const A & a1)
    {
       return a1.d==d;
    }
};
bool operator <(A & a1,A & a2)
{
    return a1.d<a2.d;
}
ostream & operator <<(ostream & os,A & a)
{
    os<<"class A has: "<<a.d;
    return os;
}


/*
namespace myspace
{
    class s
    {

    };
}
using namespace myspace;
class d
{

};

*/
int main()
{
    /*vector<int> k;
    for(int i=0;i<5;++i)
    {
        k.push_back(i);
    }
    vector<int>::iterator a;
    for(a=k.begin();a!=k.end();++a)
    {
        cout<<* a<<"  ";
        *a=*a*2;
    }
    cout<<endl;
    for(vector<int>::reverse_iterator d=k.rbegin();d!=k.rend();++d)
    {
        cout<<* d<<"  ";
    }
    cout<<endl;



    int in[5]={1,2,3,4,5};
    list<int>lst(in,in+5);
    list<int>::iterator p=lst.begin();
    list<int>::iterator q=lst.end();
    advance(p,2);cout<<"1) "<<*p<<endl;
    advance(p,-1);cout<<"2) "<<*p<<endl;
    --q;
    cout<<"3) "<<distance(p,q)<<endl;
    iter_swap(p,q);
    cout<<"4) ";
    for(p=lst.begin();p!=lst.end();++p)
    {
        cout<<*p<<" ";
    }
    */


    /*int a[5]={0,10,20,30,40};
    int * pp=find(a,a+5,20);
    if(pp==a+4)
        cout<<"not find"<<endl;
    else
        cout<<"had found "<<*pp<<endl;


    vector<int> m;
    m.push_back(1);
    m.push_back(2);
    m.push_back(3);
    m.push_back(4);
    vector<int>::iterator p;


    p=find(m.begin(),m.end(),3);
    if(p!=m.end())
        cout<<"had found "<<*p<<endl;
    else
        cout<<"not find"<<endl;

    p=find(m.begin(),m.end(),9);
    if(p!=m.end())
        cout<<"had found "<<*p<<endl;
    else
        cout<<"not find"<<endl;*/


    /*int a[5]={1,2,3,4,5};
    vector<int> v(a,a+5);
    cout<<"num1 "<<v.begin()-v.end()<<endl;
    cout<<"num2 "<<endl;print(v);
    v.insert(v.begin()+2,21);
    cout<<v.size()<<endl;
    cout<<"-------------------------------------------------------------------"<<endl;
    vector<int> v2(4,12);
    v2.insert(v2.begin()+1,v.begin(),v.end());
    print(v);cout<<endl;
    print(v2);cout<<endl;
    v2.erase(v2.begin()+3,v2.end()-3);
    print(v2);*/



    //list解决约瑟夫问题
    /*list<int>monkeys;
    int n,m;
    while(true)
    {
        cin>>n>>m;
        if(n==0&&m==0)
            break;
        monkeys.clear();
        for(int i=1;i<=n;++i)
        {
            monkeys.push_back(i);
        }
        list<int>::iterator it=monkeys.begin();
        while(monkeys.size()>1)
        {
            for(int i=1;i<m;++i)
            {
                ++it;
                if(it==monkeys.end())
                    it=monkeys.begin();
            }
            it=monkeys.erase(it);
            if(it==monkeys.end())
                it=monkeys.begin();
        }
        cout<<monkeys.front()<<endl;
    }*/



    //函数对象1
    /*average average;
    cout<<average(9,8,5);
    */



    //函数对象2
    //n次方和
    /*
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    vector<int> v={a,a+10};
    int outt=accumulate(v.begin(),v.end(),0,sumpower<int>(4));
    cout<<outt;
    */



    //pair
    /*pair<int,int>p1;
    cout<<p1.first<<" "<<p1.second<<endl;

    pair<string,double>p2("abcdefg",3.14);
    cout<<p2.first<<" "<<p2.second<<endl;

    pair<int,int>p3(pair<char,char>('a','d'));
    cout<<p3.first<<" "<<p3.second<<endl;

    pair<int,char>p4=make_pair(int('s'),char(98));
    cout<<p4.first<<" "<<p4.second<<endl;
    */


    //十进制数转化为k进制，k<=10
    /*int n,k;
    cin>>n>>k;
    if(n==0)
    {
        cout<<0;
        return 0;
    }
    stack<int> sk;
    while(n)
    {
        sk.push(n%k);
        n=n/k;
    }
    while(!sk.empty())
    {
        cout<<sk.top();
        sk.pop();
    }*/


    //priority_queue
    /*
    priority_queue<double> a1;
    a1.push(3.3);
    a1.push(4.5);
    a1.push(9.7);
    a1.push(7.5);
    while(!a1.empty())
    {
        cout<<a1.top()<<"  ";
        a1.pop();
    }
    cout<<endl;

    priority_queue<double,vector<double>,greater<double>> a2;
    a2.push(3.3);
    a2.push(4.5);
    a2.push(9.7);
    a2.push(7.5);
    while(!a2.empty())
    {
        cout<<a2.top()<<"  ";
        a2.pop();
    }
    cout<<endl;
    */

    //函数sort()
    /*
    int a[5]={9,7,10,2,4};
    vector<int> m={a,a+5};
    vector<int>::iterator d1=m.begin();
    vector<int>::iterator d2=m.end();
    sort(d1,d2);
    for(;d1!=m.end();++d1)
    {
        cout<<* d1<<" ";
    }
    */



    //智能指针
    /*
    d d1(3);
    auto_ptr<d> ptr(new d(4));
    ptr->n=21;
    d d3(* ptr);
    ptr->n=12;
    d3.n=99;
    */



    //异常处理
    /*
    double m,n;
    cin>>m>>n;
    try
    {
        cout<<"action:"<<endl;
        if(n==0)
            throw -1;
        else
            cout<<"right: "<<m/n<<endl;
    }
    catch(double a)
    {
        cout<<"catch(double) "<<a<<endl;
        cout<<"field!"<<endl;
    }
    catch(int a)
    {
        cout<<"catch(int) "<<a<<endl;
        cout<<"field!"<<endl;
    }
    catch(char a)
    {
        cout<<"catch(char) "<<a<<endl;
        cout<<"field!"<<endl;
    }
    catch(...)
    {
        cout<<"catch(...) "<<-1<<endl;
        cout<<"field!"<<endl;
    }
    */


    //out=orign^i mod modh,    get i
    /*
    int n=1;
    int out;
    int orign;
    int modh;
    cin>>out>>orign>>modh;
    for(int i=0;i<=modh-1;++i)
    {
        n=(n*orign)%(modh);
        if(out==n%modh)
            cout<<i+1<<endl;
    }
    */


    //标准异常类
    /*
    try
    {
        char * p=new char[0x7fffffffffff];
    }
    catch(bad_alloc & m)
    {
        cerr<<m.what()<<endl;
    }
    */


    //char * p=new char [0x7fffffffffff];


    //名字空间
    /*
    s a;
    myspace::s a2;
    std::cout<<"hahaha"<<endl;
    ::d d1;
    */


    //Lambda
    /*
    int a[5]={1,2,3,4,5};
    int total=0;
    for_each(a,a+4,[&](int x){total+=x;x*=2;});
    cout<<total<<endl;
    for_each(a,a+4,[=](int x){cout<<x<<" ";});
    */




    //for
    /*
    int a[]={1,2,3,4,5};
    for(int & a1:a)
    {
        a1=a1+12;
        cout<<a1<<" ";
    }
    cout<<endl;
    vector<double> v(a,a+5);
    for(auto & v1:v)
    {
        v1=v1*2;
        cout<<v1<<"  ";
    }*/




    /*初学2
    int a[]={1,2,3,4};
    for(int & e:a)
    {
        cout<<e<<"  ";
    }
    cout<<endl;

    for(int & e:a)
    {
        e++;
        cout<<e<<"   ";
    }
    cout<<endl;




    vector<int> v={a,a+4};
    vector<int>::iterator v1=v.begin();
    for(;v1!=v.end();++v1)
    {
        cout<< *  v1<<"  ";
    }
    cout<<endl;
    v1=v.begin();
    vector<int>::iterator v2=v.end();
    cout<<v2-v1<<endl;
    cout<<v.size()<<endl;
    cout<<v1[0]<<endl;


    vector<double> vv={a,a+4};
    for(int i=0;i<vv.size();++i)
    {
        cout<<vv[i]<<" ";
    }
    cout<<endl;
    vector<double>::iterator vv1=vv.begin();cout<< * vv1<<" ";
    vector<double>::iterator vv2=vv.end()-1;cout<< * vv2<<" ";
    cout<<endl;
    iter_swap(vv1,vv2);
    cout<<* vv1<<"    "<<* vv2;
    */

    /*
    double a[]={0.2,1.02,3,8,0.3,1.2,0.2,0.2};
    vector<double> v={a,a+8};
    vector<double>::iterator v1=v.begin();
    v1=find(v.begin(),v.end(),0.3);
    cout<< * v1<<endl;
    cout<<count_if(v.begin(),v.end(),boolzerotwo)<<endl;
    sort(v.begin(),v.end());
    for(v1=v.begin();v1!=v.end();++v1)
    {
        cout<< * v1<<"   ";
    }
    */


    vector<A> a={A(3),A(0),A(9),A(6)};
    vector<A>::iterator a1;
    sort(a.begin(),a.end());
    for(a1=a.begin();a1!=a.end();++a1)
    {
        cout<< * a1<<endl;
    }
    a1=find(a.begin(),a.end(),3);
    cout<< * a1<<endl;
    a1=find(a.begin(),a.end(),A(3));
    cout<< * a1<<endl;
    return 0;
}
