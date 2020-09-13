#include <iostream>
#include <malloc.h>
using namespace std;

void nhap(int *m, int *n)
{
    do
    {
        cout<<"Nhap so dong m = ";
        cin>>*m;
        cout<<"Nhap so cot n = ";
    } while ( *m <= 0 && *n <= 0 );
}

void InMatrix(int **a, int m, int n)
{
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n ; j++)
		{
		cout<<"a["<<i<<","<<j<<"]=";
            	cin>>a[i][j];
		}
}

void OutMatrix(int **a, int m, int n)
{
	for (int i=0; i<m; i++)
	{
		for (int j = 0; j < n; j++)
			cout<<"\t"<<a[i][j];
	      	cout<<endl;
	}
}

void Max(int **a, int m, int n)
{
	int i, j, max;
	max = a[0][0];
	
	for (int i=0; i<m; i++)
		for (int j=0; j<n; j++)
			if (a[i][j] > max)
				max = a[i][j];

	cout<<"Max:"<<max<<" o vi tri: ";
	for (int i=0; i<n; i++)
		for (int j=0; j<m; j++)
			if (a[i][j] == max)
				cout<<i<<" "<<j;
}

void Sum_Hang(int a[][100], int m, int n)
{
	int i,j, tong;
	for (i=0; i<m; i++)	
	{
		tong = 0;
		for(j=0;j<n;j++)
			tong = tong + a[i][j];
		cout<<"Sum hang "<<i+1<<" : "<<tong;
	}
}

int main()
{
	int m, n, **a;
	nhap( &m, &n);
	InMatrix(a, m ,n);
	OutMatrix(a, m, n);
	Max(a, m, n);
	Sum_Hang(a, m, n)
}


