#include <iostream>
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

void findMin( int *a, int n)
{
    int vt, *min = a;         
    for(int  i = 1; i < n; i++)
    {            
        if(*min < *(min+i)) 
        {
            *min = *(min+i);
        }
    }     
    for (int i = 0; i < n; i++)
    {
        if ( *min == *(a+i))
        {
            vt = i;
        }
    }
    cout<<"\nMax = "<<*min<<", vi tri: "<<vt+1<<endl;
}

void Ave_x( int *a, int n, int x)
{
    int dem = 0, sum = 0;
    for (int i = 0; i < n; i++)
    {
        if ( *(a+i) > x )
        {
            dem++;
            sum += *(a+i);
        }
        
    }
    cout<<"TBC = "<<float(sum)/dem<<endl;
}

void Sum_divisible_X( int *a, int n, int X)
{
    int sum = 0, dem = 0;
    for (int i = 0; i < n; i++)
    {
        if ( *(a+i) == X )
        {
            dem++;
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        if ( *(a+i) % X == 0 )
        {
            sum += *(a+i);
        }
        
    }
    if ( dem != 0)
    {
        cout<<"X co trong mang."<<endl;
        cout<<"Tong cac phan tu chia het cho X:"<<sum<<endl;
    }
    else
    {
        cout<<"X khong co trong mang"<<endl;
    }
    
}

void Xoa_x(int *a, int n, int x)
{
	int m = n , i ,j;
	int *temp = new int[m];
	for ( i = 0; i < n; i++) *(temp+i) = *(a+i);
	for( i = 0; i < m; i++)
	{
		if( *(temp+i) == x )
		{
			for( j = i; j < m; j++)
			{
				*(temp+j) = *(temp+j+1);
			}
			m--;
			i--;
		}
	}
	cout<<"Day thu duoc sau khi xoa x: ";
	for( i =0 ;i < m; i++)
	{
		cout<<"\t"<<*(temp+i);
	}
//	cout<<*(temp+m-1)<<endl;
	delete temp;
}

int main()
{
    int n, x, X, *a;
    nhap( &n);
    a = new int[n];
    InArr( a, n);
    cout<<"Mang vua nhap: ";
    OutArr( a, n);
    findMin( a, n);
    cout<<"Enter x: ";
    cin>>x;
    Ave_x( a, n, x);
    cout<<"Enter X: ";
    cin>>X;
    Sum_divisible_X( a, n, X);
    Xoa_x( a, n, x);
}