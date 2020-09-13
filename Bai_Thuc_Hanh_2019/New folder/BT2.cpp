#include <bits/stdc++.h>
using namespace std;

void nhap( int &n, char letter)
{
    do
    {
        cout<<"Enter "<<letter<<": ";
        cin>>n;
        if ( n <= 0 )
        {
            cout<<"Yeu cau nhap lai."<<endl;
        }
    } while ( n <= 0 );
}

long GT(int n)
{
    if ( n == 1 )
    {
        return 1;
    }
    return GT(n-1)*n;
}

void Tinh_C( int n, int m, int k)
{
    float c;
    if ( n>k && m>n )
    {
        c = (float)(GT(n)*GT(n-k))/(GT(m)*GT(m-n));
        cout<<"Ket qua: C = "<<c;     
    }
    else
    {
        cout<<"!!!";
    }
}

void PhanTich()
{
    int n, m, k;
    nhap( n, 'n');
    nhap( m, 'm');
    nhap( k, 'k');
    Tinh_C(n , m, k);
}

int main(int argc, char const *argv[])
{
    //int n;
    // nhap( n);
    // srand(time(NULL));
    // int k = rand()%100;
    // //int k = 8;
    // cout<<"k = "<<k<<endl;
    // //cout<<"Ket qua: k! = "<<GT(k);
    PhanTich();
    return 0;
}
