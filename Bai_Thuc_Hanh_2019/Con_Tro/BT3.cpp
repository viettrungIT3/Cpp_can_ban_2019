#include <bits/stdc++.h>
using namespace std;

void OutArr( int a[], int n)
{
    for ( int i = 0; i < n; i++)
    {
        cout<<"\t"<<a[i];
    }
}

bool ktSNT( int n)
{
    if ( n < 2 )
    {
        return false;
    }
    for (int i = 0; i < sqrt((float)n); i++)
    {
        if ( n % i == 0 )
        {
            return false;
        }
    }
    return false;
}

void swap( int &m ,int &n)
{
    int temp = m;
    m = n;
    n = temp;
}

void sapxep( int a[], int n)
{
    int b[100], nb = 0;
    for (int i = 0; i < n; i++)
    {
        if ( ktSNT(a[i]) )
        {
            b[nb] == a[i];
            nb++;
        }
    }
    for (int i = 0; i < nb-1; i++)
    {
        for(int j=i+1; j<nb; j++)
        {
            if(b[i] > b[j]){
                swap(b[i], b[j]);
            }
            /* code */
        }
        
    }
    cout<<"Mang sau khi sap xep: "<<endl;
    OutArr(b, nb);
    
}

int main(int argc, char const *argv[])
{
    int n = 0, a[100];
    do
    {
        n++;
        cout<<"Nhap phan tu thu:  "<<n;
        cin>>a[n];
    } while ( a[n] != -1 || n >= 100);
    cout<<"Co "<<n-1<<" phan tu duoc nhap."<<endl;
    cout<<"Mang a sau khi nhap: ";
    OutArr( a, n);
    sapxep(a, n);
    return 0;
}
