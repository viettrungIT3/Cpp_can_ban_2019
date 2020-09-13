#include <bits/stdc++.h>
using namespace std;

long Gt( int n)
{
    if ( n == 1 )
    {
        return 1;
    }
    return Gt( n-1) * n;
}

void nhap( float &x, int &n)
{
    cout<<"Enter x: ";
    cin>>x;
    do
    {
        cout<<"Enter n:";
        cin>>n;
    } while ( n <= 0 );
}

int main(int argc, char const *argv[])
{
    int n;
    float x;
    nhap( x, n);
    long f = Gt(n)*pow(x, n);
    cout<<"Ket qua: "<<f;
    return 0;
}
