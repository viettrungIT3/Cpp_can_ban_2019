#include <bits/stdc++.h>
using namespace std;

void nhap( int &n)
{
    do
    {
        cout<<"Enter n: ";
        cin>>n;
        if ( n <= 0 )
        {
            cout<<"Yeu cau nhap lai."<<endl;
        }
    } while ( n <= 0 );
}
 long Tinh( int n)
 {
     if ( n == 0 )
     {
         return 1;
     }
     return Tinh(n-1)*(2*n+1);
 }
int main(int argc, char const *argv[])
{
    int n;
    nhap( n);
    cout<<"Ket qua: "<<Tinh( n);
    return 0;
}
