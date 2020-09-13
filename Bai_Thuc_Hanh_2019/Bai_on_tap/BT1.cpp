#include <bits/stdc++.h>
using namespace std;

void nhap( float &x, float &y, int &n)
{
    do
    {
        cout<<"Enter x: ";
        cin>>x;
        cout<<"Enter y: ";
        cin>>y;
    } while ( x > y );
    do
    {
        cout<<"Enter n: ";
        cin>>n;
    } while ( n <= 0 || n >= 50 );
}

float tinh( float x, float y, int n)
{
    float f = exp(fabs(x)) + fabs(y) + sin(2*x);
    return f;
}

float tinh2( float x, int n)
{
    float f = 30620;
    for (int i = 2; i <= n; i++)
    {
        f += 
    }
    
}

int main(int argc, char const *argv[])
{
    float x, y;
    int n;
    nhap( x, y, n);
    tinh( x, y, n);
    return 0;
}
