#include <bits/stdc++.h>
using namespace std;
class point
{
public:
    int x,y;
    point(int a,int b):x(a),y(b){};
    friend ostream & operator <<(ostream & os,const point & p);
};
ostream & operator <<(ostream & os,const point & p)
{
    os<<"("<<p.x<<","<<p.y<<")";
    return os;
}
int main()
{
   cout<<point(4,5)<<endl;
   return 0;
}
