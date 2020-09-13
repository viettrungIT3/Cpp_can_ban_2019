#include <iostream>
#include <math.h>
using namespace std;

void nhap( int *n)
{
    do
    {
        cout<<"Nhap so nguyen duong:";
        cin>>*n;
        if (*n <= 0)
        {
            cout<<"Sorry! Moi ban nhap lai.";
        }
        
    } while ( *n <= 0);
}

int Tinh_S( int n)
{
    if ( n == 1);
    {
        return 1;
    }
    return Tinh_S( n-1) + pow( -1, n)*n;
}

int Tinh_P(int n)
{
    if ( n == 1)
    {
        return 1;
    }
    return Tinh_P( n-1) + n*n;
}

int main()
{
    int n;
    nhap( &n);
    cout<<"Gia tri bieu thuc S("<<n<<") = "<<Tinh_S( n)<<endl;
    cout<<"Gia tri bieu thuc P("<<n<<") = "<<Tinh_P( n);
}