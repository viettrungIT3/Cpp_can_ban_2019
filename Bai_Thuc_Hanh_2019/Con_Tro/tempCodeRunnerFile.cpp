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

void test1( float a[], int n)
{
    int dem = 0, sum = 0;
    for (int i = 0; i < n; i++)
    {
        if ( a[i] < 0 && abs(a[i]) > 5 )
        {
            dem++;
        }
    }
    if ( dem == 0 )
    {
        cout<<"Trong mang khong co so am co tri tuyet doi nho honw 5."<<endl;
    }
    else
    {
        cout<<"Cac so thoa man dk: ";
        for (int i = 0; i < n; i++)
        {
            if ( a[i] < 0 && abs(a[i]) > 5 )
            {
                cout<<"\t"<<a[i];
                sum += a[i];
            }
        }
        cout<<"Gia tri trung binh: "<<sum/dem;
    }
}

void test2( float a[], int &n)
{
    int k;
    cout<<"Enter k: ";
    cin>>k;
    if ( k < 1 && k < n)
    {
        cout<<"Khong thoa man dk."<<endl;
    }
    else
    {
        for (int i = k - 1 ; i < n; i++)
        {
            a[i] = a[i +1];
        }
        n--;
    }
    cout<<"Mang sau khi xoa: ";
    OutArr( a, n);
    
}

int main(int argc, char const *argv[])
{
    int n;
    nhap( &n);
    float a[100];
    InArr( a, n);
    test1( a, n);
    test2( a, n);
    return 0;
}
