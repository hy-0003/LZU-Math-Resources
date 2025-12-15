#include<bits/stdc++.h>
using namespace std;
class circle
{
public:
    double r,s;
    static double total_area;
    static int total_number;
public:
    static void print_total();
    circle(double rr);
    circle();
    void shuru(double rr);
    ~circle();
};

circle::circle(double rr)
{
    r=rr;
    s=3.14*r*r;
        ++total_number;
    total_area=total_area+s;
}
circle::circle()
{
    r=0;
    s=0;
    ++total_number;
}
void circle::print_total()
{
    cout<<"总面积为:"<<endl<<total_area<<endl<<"总个数为:"<<endl<<total_number-15;
}
void circle::shuru(double rr)
{
    r=rr;
    s=3.14*r*r;
    ++total_number;
    total_area=total_area+s;
}
circle::~circle()
{
    total_area=total_area-s;
    --total_number;
}

double circle::total_area=0;
int circle::total_number=0;

int main()
{
    int n;
    int num[15]={0,0};
    double rr[15]={0,0};
    circle kk[15]={circle(0),circle(0)};
    cout<<"请输入你所要输入圆的个数:"<<endl;
    cin>>n;
    for(int i=1;i<=n;++i)
    {
        cout<<"请输入圆半径:"<<endl;
        cin>>rr[i];
        kk[i].shuru(rr[i]);
    }
    circle::print_total();
    return 0;
}
