#include <bits/stdc++.h>
using namespace std;

long F( float x, float n)
{
    return 2*x*x + n*x + n;
}

int main(int argc, char const *argv[])
{
    float x, y, n;
    float f;
    cout<<"Nhap x, y, n: "<<endl;
    cin>>x>>y>>n;
    f = F(x, n) + F( y, n) - F(x+y, n);
    cout<<"Ket qua: "<<f;
    return 0;
}
