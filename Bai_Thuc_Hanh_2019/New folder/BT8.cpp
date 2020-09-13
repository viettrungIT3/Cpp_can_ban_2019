#include <bits/stdc++.h>
using namespace std;

long tinh1( int n)
{
    if ( n == 1 )
    {
        return 2;
    }
    return tinh1( n-1) * ( 2* n);
}

float tinh2(float n)    
{
    if ( n == 0 )
    {
        return 1;
    }
    return tinh2(n-1) + 1.0/tinh1(n);
}

int main(int argc, char const *argv[])
{
    int n;
    do
    {
        cout<<"Enter n:";
        cin>>n;
    } while ( n <= 0);
    cout<<"Ket qua: "<<tinh2(n);
    return 0;
}
