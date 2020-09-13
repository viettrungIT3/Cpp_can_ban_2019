#include <bits/stdc++.h>
using namespace std;

void nhap( int *n)
{
    do
    {
        cout<<"Enter n: ";
        cin>>*n;
    } while ( *n < 1 || *n > 30);
}

void InArr( float a[], int n)
{
    cout<<"Nhap vao mang "<<n<<" so thuc: "<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<"\ta["<<i<<"] = ";
        cin>>a[i];
    }
}

void OutArr( float a[], int n)
{
    for ( int i = 0; i < n; i++)
    {
        cout<<"\t"<<a[i];
    }
}

void tach( float a[], float b[], float c[], int n, int &nb, int &nc)
{
    for (int i = 0; i < n; i++)
    {
        if ( a[i] > 0 )
        {
            b[nb] = a[i];
            nb++;
        }
        else
        {
            c[nc] = a[i];
            nc++;
        }
    }
}

int main(int argc, char const *argv[])
{
    int n, nb = 0, nc = 0;
    nhap( &n);
    float a[100], b[100], c[100];
    InArr( a, n);
    tach( a, b, c, n, nb, nc);
    cout<<"Arr b: ";
    OutArr( b, nb);
    cout<<"\tArr c: ";
    OutArr( c, nc);
    return 0;
}
