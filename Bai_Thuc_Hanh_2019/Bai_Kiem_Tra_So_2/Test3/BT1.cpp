#include <iostream>
#include <math.h>
#include <malloc.h>
using namespace std;

void nhap(int *n)
{
    do
    {
        cout<<"Enter n:";
        cin>>*n;
    } while ( *n <= 0);
}

void InArr( int *a, int n)
{
    cout<<"Nhap vao mang "<<n<<" so nguyen: "<<endl;
    for ( int i = 0; i < n; i++)
    {
        cout<<"Nhap phan tu thu "<<i+1<<" :";
        cin>>*(a+i);
    }
}

void OutArr( int *a, int n)
{
    for ( int i = 0; i < n; i++)
        cout<<"\t"<<*(a+i);
}

bool ktSNT(int soA)
{
    if (soA < 2)    
        return false;

    for (int i = 2; i <= sqrt(soA); i ++)
    {
        if (soA % i == 0)
        {
            return false;
        }
    }
    return true;
}

void SumSNT( int *a, int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if ( ktSNT(*(a+1)) == true)
        {
            sum += *(a+i);
        }
        
    }
    cout<<"Tong cac SNT: "<<sum;
}

void Tach(int *a, int n, int *b, int &nb, int *c, int &nc)
{
	nb = 0;
	nc = 0;
	for (int i = 0; i < n; i++)
		if ( *(a+i) % 2 == 0)
		{
			*(b+nb) = *(a+i);
            nb++;
		}
		else
		{
			*(c+nc) = *(a+i);
            nc++;
		}	
}

int main()
{
    int n, x, X, *a, *b, *c, nb, nc;
    nhap( &n);
    a = new int[n];
    InArr( a, n);
    cout<<"Mang vua nhap: ";
    OutArr( a, n);
    SumSNT( a, n);
    Tach( a, n, b, nb, c, nc);
    cout<<"\nMang chan: ";
    OutArr( b, nb);
    cout<<("\nMang le: ");
    OutArr( c, nb);
}
