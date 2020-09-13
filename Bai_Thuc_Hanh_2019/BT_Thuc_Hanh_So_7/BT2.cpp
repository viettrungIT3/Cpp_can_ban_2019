#include <iostream>
#include <malloc.h>
using namespace std;

void nhap(int *n)
{
    do
    {
        cout<<"Nhap so nguyen duong n:";
        cin>>*n;
    } while ( *n <= 0 );
}


void InArr( int *a, int n)
{
    cout<<"\nNhap vao day a gom "<<n<<" so nguyen:"<<endl;
    for ( int i = 0; i < n; i++)
    {
        cout<<"\ta["<<i<<"] = ";
        cin>>*(a+i);
    }
}

void OutArr(int *a, int n)
{
    for (int i = 0; i < n; i++)
        cout<<"\t"<<*(a+i);
}

void Gan( int *a, int *b, int n)
{
    for (int i = 0; i < n; i++)
    {
        *(a+i) = *(b+i);
    }
    
}

void max_Chan( int *a, int n)
{
    int dem = 0;
    for (int i = 0; i < n; i++)
    {
        if ( *(a+i) % 2 == 0);
            dem++;
    }
    if ( dem == 0)
    {
        cout<<"\nTrong day khong co so chan.";
        return;
    }
    else
    {
        int *max=a;     
		int i;    
		for ( i = 1;i < n; i++){            
		   if(*max < *(max+i)) 
				*max = *(max+i);                              
		  }      
        int *b, nb = 0;
        cout<<max;
        for ( i = 0; i < n; i++)
        {
            if (  max = (a+i) )
            {
                *(b+nb) = i+1;
                nb++;
            }
            
        }
        cout<<"\nSo chan lon nhat: "<<max<<" o vi tri:";
		OutArr( b, nb);
        
    }
}

void Xoa_Chan( int *a, int &n)
{
    for (int i = i; i < n; i++)
    {
    	if ( *(a+i) % 2== 0)
	    {
            n--;
	        for (int i = i; i < n; i++)
	        {
	            *(a+i) = *(a+i+1);
	        }
	        
	    }
	}
    cout<<"\nDay a sau khi xoa cac pt chan:";
	OutArr( a, n);
    free(a);
}

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void SapXepGiam(int *a, int n)
{
	int i, j;
	
	for (i = 0; i < n - 1; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			if (*(a+i) < *(a+j))
				swap(*(a+i), *(a+j));
		}
	}
}

void Tach(int a[ ], int na, int b[ ], int &nb, int c[ ], int &nc)
{
	nb = 0;
	nc = 0;
	for (int i = 0; i < na; i++)
		if ( *(a+i) % 2 == 1 )
		{
			b[nb] = a[i]; nb++;
		}
		else
		{
			c[nc] = a[i]; nc++;
		}	
}



int main()
{
    int n, *a, temp[n], b[100], c[100], n2, n3;
    nhap( &n);
    a = new int[n];
    InArr( a, n);
    cout<<"Day a vua nhap:";
    OutArr( a, n);
    Gan( a, temp, n);
    max_Chan( a, n);
    Gan( temp, a, n);
    Xoa_Chan( a, n);
    Gan(temp, a, n);
    SapXepGiam( a, n);
    OutArr( a, n);
    Gan(temp, a, n);
    Tach( a, n, b, n2, c, n3);
    OutArr(a, n);
    delete a;
}
