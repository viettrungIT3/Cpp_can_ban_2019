#include <bits/stdc++.h>
using namespace std;

float tinh(float n)    
{
    if ( n == 1)
    {
        return 1;
    }
    return tinh(n-1) + 1/n;
}

int main(int argc, char const *argv[])
{
    int n;
    do
    {
        cout<<"Enter n:";
        cin>>n;
    } while ( n <= 0);
    cout<<"Ket qua: "<<tinh(n);
    return 0;
}
