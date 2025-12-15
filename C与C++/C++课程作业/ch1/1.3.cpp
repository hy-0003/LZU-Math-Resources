#include<bits/stdc++.h>
using namespace std;
double des_orde(double &aa,double &bb,double &cc)
{
    if(bb<=cc) swap(bb,cc);
    if(aa<=bb) swap(aa,bb);
    if(bb<=cc) swap(bb,cc);
    return aa;
}
int main()
{
    double aa,bb,cc;
    cin>>aa>>bb>>cc;
    cout<<des_orde(aa,bb,cc)<<endl;
    cout<<aa<<endl<<bb<<endl<<cc;
    return 0;
}
