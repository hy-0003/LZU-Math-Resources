#include<bits/stdc++.h>
#include"headd.h"
using namespace std;
bool mycin::operator>>(int & n)
    {
        a>>n;
        if(n==100)
            return false;
        else
            return true;
    }
