#include <bits/stdc++.h>
using namespace std;

long  GT(int n)
{
    if ( n== 0 )
    {
        return 1;
    }
    return GT(n-1)*n;
}

double luathua( float x, int n)
{
    if ( n == 0 )
    {
        return 1;
    }
    if ( n < 0 )
    {
        return luathua( x, n+1)*(1/n);
    }
    return luathua( x, n-1)*n;
}

double Tinh( float x, int n)
{
    if ( n== 1 )
    {
        return x;
    }
    return Tinh( x, n-1) + (luathua(x, n-1)*x)/(GT( n-1)*n);
}

int main(int argc, char const *argv[])
{
    int n;
    float x;
    cout<<"Enter n: ";
    cin>>n;
    cout<<"Enter x: ";
    cin>>x;
    cout<<"\tKet qua: "<<n<<"! = "<<GT(n)<<endl;
    cout<<"\tKet qua: "<<x<<"^"<<n<<" = "<<luathua(x, n)<<endl;
    cout<<"\tKet qua: S("<<x<<","<<n<<" = "<<Tinh(x, n); 
    return 0;
}
