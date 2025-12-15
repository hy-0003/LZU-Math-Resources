#include<bits/stdc++.h>
#include"t.h"
using namespace std;
/*class vvectors
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
    //全局函数vvectors operator *(const double x,const vvectors a);//2*c形式
    double operator *(const vvectors & x);//内积
    vvectors operator &&(const vvectors & x);//外积
    double operator ^(const vvectors & x);//夹角


    //输入输出
    friend ostream & operator <<(ostream & os,const vvectors & x);
    friend istream & operator >>(istream & is,vvectors & x);


    //析构函数
    ~vvectors();
};


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

*/

int main()
{
    vvectors k;//空向量构造
    cout<<k<<endl;


    vvectors j("(1.33478,2.36677,5.406,0.788)");//形如（a+b+c）的构造
    cout<<j<<endl;


    double h[3]={0.3,0.4,0.5};
    int l=3;
    vvectors d(h,l);
    cout<<d<<endl;
    //构造函数vvectors(double d[],int n)


    vvectors a(j);//复制构造函数
    cout<<a<<endl;


    vvectors b("(3.0,4.0)");
    cout<<(double)b<<endl;//求b的模


    //加减，左右数乘，内积
    vvectors c=b+b+b;//+
    cout<<c<<endl;

    c=c-d;//-
    c=c-b;
    cout<<c<<endl;

    c=c*2;//数乘
    cout<<c<<endl;
    c=2*c;
    cout<<c<<endl;
    //内积
    cout<<c*c<<endl;
    cout<<c<<endl;


    cout<<"请输入形如(a,b,c,...n)的向量"<<endl;
    vvectors ddd;
    //cin>>ddd;
    //cout<<ddd<<endl;
    //输入输出


    //求向量夹角
    vvectors x1("(1,0,0)");
    vvectors x2("(0,1,0)");
    double w=x1^x2;
    cout<<w<<endl;

    cout<<(x1&&x2)<<endl;
    cout<<(x2&&x1)<<endl;


    cout<<"上述为测试"<<endl;
    cout<<"<-------------------------------------------------------------------------------------------------->"<<endl;
    cout<<endl<<endl;
    //面板
    cout<<"对于向量的计算，现共有7中计算方法"<<endl;
    cout<<"方法1：加法"<<endl;
    cout<<"方法2：减法"<<endl;
    cout<<"方法3：数乘"<<endl;
    cout<<"方法4：内积"<<endl;
    cout<<"方法5：外积"<<endl;
    cout<<"方法6：求模长"<<endl;
    cout<<"方法7：求夹角"<<endl;
    cout<<"请输入对应的数字来进入计算(01,02,03,04,05,06,07):"<<endl;
    string df;int n;
    cin>>df;
    if(df=="01")//+
    {
        cout<<"请输入有几个向量："<<endl;
        cin>>n;
        vvectors sum[n];
        cout<<"请输入"<<n<<"个形如(a,b,c,...n)的向量:"<<endl;
        for(int i=0;i<n;++i)
        {
            cin>>sum[i];
        }
        vvectors k(sum[0]);
        for(int i=1;i<n;++i)
        {
            k=k+sum[i];
        }
        cout<<"结果为-->"<<k<<endl;
    }
    if(df=="02")//-
    {
        cout<<"请输入有几个向量："<<endl;
        cin>>n;
        vvectors sum[n];
        cout<<"请输入"<<n<<"个形如(a,b,c,...n)的向量:"<<endl;
        for(int i=0;i<n;++i)
        {
            cin>>sum[i];
        }
        vvectors k(sum[0]);
        for(int i=1;i<n;++i)
        {
            k=k-sum[i];
        }
        cout<<"结果为-->"<<k<<endl;
    }
    if(df=="03")//数乘
    {
        cout<<"本计算默认为一个向量和一个数"<<endl;
        double k;
        vvectors a;
        cout<<"请先输入向量，再输入数:（向量按(a,b,c,...n)输入）"<<endl;
        cin>>a>>k;
        cout<<"结果为-->"<<(k*a)<<endl;
    }
    if(df=="04")//内积
    {
        cout<<"本计算默认为两个向量"<<endl;
        cout<<"请输入"<<2<<"个形如(a,b,c,...n)的向量:"<<endl;
        vvectors x1,y1;
        cin>>x1>>y1;
        cout<<"结果为-->"<<(x1*y1)<<endl;
    }
    if(df=="05")//外积
    {
        cout<<"本计算默认为两个三维向量"<<endl;
        vvectors x2,y2;
        cout<<"请输入"<<2<<"个形如(a,b,c,...n)的向量:"<<endl;
        cin>>x2>>y2;
        cout<<"结果为-->"<<(x2&&y2)<<endl;
    }
    if(df=="06")//求模长
    {
        cout<<"请输入有几个向量："<<endl;
        cin>>n;
        cout<<"请输入"<<n<<"个形如(a,b,c,...n)的向量:"<<endl;
        vvectors m[n];
        for(int i=0;i<n;++i)
        {
            cin>>m[i];
        }
        for(int i=0;i<n;++i)
        {
            cout<<"第"<<i+1<<"个向量的结果为->"<<(double)(m[i])<<endl;
        }
    }
    if(df=="07")//求夹角
    {
        cout<<"本计算默认为两个向量："<<endl;
        cout<<"请输入"<<2<<"个形如(a,b,c,...n)的向量:"<<endl;
        vvectors x3,y3;
        cin>>x3>>y3;
        cout<<"结果为-->"<<(x3^y3)<<endl;
    }
    if(df!="01"&&df!="02"&&df!="03"&&df!="04"&&df!="05"&&df!="06"&&df!="07")
    {
        cout<<"请按规定输入序号。"<<endl;
    }
    return 0;
}
