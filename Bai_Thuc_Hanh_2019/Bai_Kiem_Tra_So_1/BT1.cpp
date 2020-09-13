#include <iostream>
#include <math.h>
using namespace std;

void nhap(int *n, float *x)
{
    do
    {
        cout<<"Nhap so nguyen duong n :";
        cin>>*n;
        cout<<"Nhap so thuc x:";
        cin>>*x;
    } while ( *n <= 0);
}

int giaiThua(int n)
{
    if (n == 1)
        return 1;
    return n * giaiThua(n - 1);
}

double Tinh( int n, float x)
{
    float s = 0;
    for ( int i = 1; i <= n; i++)
    {
        s += pow(x, i)/giaiThua(i);
    }
}

int main()
{
    int n;
    float x;
    nhap( &n, &x);
    cout<<"Gia tri bieu thuc S = "<<Tinh( n, x);
}