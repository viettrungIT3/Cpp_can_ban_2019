#include <iostream>
#include <malloc.h>
using namespace std;

void nhap(int *n)
{
    do
    {
        cout<<"Nhap so nguyen duong n thoa man 5<=n<=30:";
        cin>>*n;
    } while ( *n < 5 || *n > 30);
}

void nhapMang( int *a, int n)
{
    cout<<"Nhap vao mang "<<n<<" so nguyen: "<<endl;
    for ( int i = 0; i < n; i++)
    {
        cout<<"Nhap phan tu thu "<<i+1<<" :";
        cin>>*(a+i);
    }
}

void hiemThiMang( int *a, int n)
{
    for ( int i = 0; i < n; i++)
        cout<<"\t"<<*(a+i);
}

void Chen(int *a, int &n, int k, int x)
{
    n++;
    a  = (int*)realloc(a, n*sizeof(int)); 
	if (k >= 0 && k <= n)
	{
		for (int i = n; i >= k; i--)
			*(a+i) = a[i - 1];
	
		a[k] = x;
		
	}
}


void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void SapXepTang(int *a, int n)
{
	int i, j;
	
	for (i = 0; i < n - 1; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			if (*(a+i) > *(a+j))
				swap(*(a+i), *(a+j));
		}
	}
}


int main(){
    int n, *a;
    nhap( &n);
    a = new int[n];
    nhapMang( a, n);
    cout<<"Mang vua nhap: ";
    hiemThiMang( a, n);
    int x, k;
    cout<<"\nNhap so nguyen x: ";
    cin>>x;
    do
    {
        cout<<"Nhap so nguyen k thoa man 1<=k<="<<n<<": ";
        cin>>k;
    } while ( k < 1 || k>n);
    Chen( a, n, k, x);
    cout<<"\nMang vua chen:";
    hiemThiMang( a, n);
    cout<<"\nMang vua sap xep: ";
    SapXepTang( a, n);
    hiemThiMang( a, n);
    delete a;

}
