#include <bits/stdc++.h>
using namespace std;

void InArr( int *a, int n)
{
    cout<<"Enter Array: "<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<"Nhap phan tu thu "<<i+1<<": ";
        cin>>*(a+i);
    }
}

void OutArr( int *a, int n)
{
    cout<<"Display Array: ";
    for (int i = 0; i < n; i++)
    {
        cout<<"\t"<<*(a+i);
    }
}

void case3( int *a, int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += *(a+i);
    }
    float tb = (float)sum/n;
    int min = abs(tb-*(a+0));
    for (int i = 0; i < n; i++)
    {
        if ( abs(tb-*(a+i)) < min )
        {
            min = abs(tb-*(a+i));
        }
    }
    cout<<"\nPhan tu co gia tri gan gia tri trung binh nha la: ";
    for(int i = 0; i < n; i++){
		if( abs(tb-a[i]) == min )
        {
			cout<<"a["<<i<<"]="<<a[i]<<endl;
		}
	}
}

void case4( int *a, int n)
{
    int x;
    cout<<"Enter x: ";
    cin>>x;
    int dem = 0;
    for (int i = 0; i < n; i++)
    {
        if ( *(a+i) == x)
        {
            dem++;
        }
    }
    if (dem == 0)
    {
        cout<<x<<" khong co trong mang."<<endl;
    }
    else
    {
        cout<<x<<" co trong mang."<<endl;
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            if ( *(a+i) % x == 0)
            {
                sum += *(a+i);
            }
        }
        cout<<"Tong cac phan tu chia het cho x la: "<<sum<<endl;
    }
}

void Insert(int *a, int &n, int vt, int x)
{
	if (vt >= 0 && vt <= n)
	{
		for (int i = n; i >= vt; i--)
			*(a+i) = *(a+i-1);
		*(a+vt) = x;
		n++;
	}
}

void case5( int *a, int n)
{
    int x;
    cout<<"Enter X: ";
    cin>>x;
    for (int i = 0; i < n; i++)
    {
        if ( *(a+i) % 2 == 0 )
        {
            Insert( a, n, i, x);
        }
    }
    OutArr(a, n);
}

int main(int argc, char const *argv[])
{
    int n;
    cout<<"Enter n: ";
    cin>>n;
    int *a = NULL;
    a = new int[n];
    InArr( a, n);
    OutArr( a, n);
    case3( a, n);
    case4( a, n);
    case5( a, n);
    return 0;
}
