#include<bits/stdc++.h>
using namespace std;
class yuan
{
public:
    double r;
    double s();
    double l();
};
double yuan::s()
{
    return 3.14*r*r;
}
double yuan::l()
{
    return 6.28*r;
}
int main()
{
    double r;yuan k;
    cout<<"请输入圆的半径:";
    cin>>r;
    k.r=r;
    cout<<"圆的面积为："<<endl<<k.s()<<endl<<"圆的周长为："<<endl<<k.l();
    return 0;
}
