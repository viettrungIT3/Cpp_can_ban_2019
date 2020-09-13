#include <bits/stdc++.h>
using namespace std;

float tinh(float x, int n)
{
    if ( n ==  1)
    {
        return x*x;
    }
    return tinh( x, n-1) + pow(x, 2*n);
}

int main(int argc, char const *argv[])
{
    int n;
    float x;
    cout<<"nhap n va x";
    cin>>n>>x;
    cout<<"Ket qua: "<<tinh(x, n);
    return 0;
}
