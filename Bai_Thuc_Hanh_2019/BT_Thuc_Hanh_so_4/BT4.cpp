#include <iostream>
using namespace std;
#define MAX 100

void nhapMaTran( int a[][MAX], int m, int n)
{
	cout<<"Nhap vao Ma Tran "<<m<<"x"<<n<<" chua cac so nguyen"<<endl;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			cout<<"\ta["<<i<<"]["<<j<<"] = ";
			cin>>a[i][j];
		}
}

void hiemThiMaTran( int a[][MAX], int m, int n)
{
	int i, j;
	for ( i = 0; i < m; i++)
	{
		for ( j = 0; j < n; j++)
			cout<<"\t"<<a[i][j];
		cout<<endl;
	}
}

int Max(int a[][MAX], int m, int n)
{
	int max = a[0][0];
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if ( max < a[i][j])
				max = a[i][j];
	return max;
}

void Max2(int a[][MAX], int m, int n)
{
	int max ;
	cout<<"Max:"<<endl;
	for (int i = 0; i < m; i++)
		{
			max = a[i][0];
			for (int j = 0; j < n; j++)
				if ( max < a[i][j])
					max = a[i][j];
		cout<<" - Max tren dong "<<i+1<<" la:"<<max<<endl;
		}
}

int main(){
	int m, n, a[MAX][MAX];
	do
	{
		cout<<"Nhap so hang m = ";
		cin>>m;
		cout<<"Nhap so cot n = ";
		cin>>n;
	} while ( m <= 0 || n <= 0 || m > MAX || n > MAX);			
	nhapMaTran( a, m, n);
	cout<<"\n***********MENU*********"<<endl;
	cout<<" - Bam phim 3 de Hiem thi Ma Tran A."<<endl;
	cout<<" - Bam phim 4 de Tim phan tu lon nhat cua ma tran."<<endl;
	cout<<" - Bam phim 5 de Tim cac phan tu lon nhat cac dong cua ma tran."<<endl;
	int choose;
	cout<<"Ban chon: ";
	cin>>choose;
	switch (choose)
	{
		case 3:
			cout<<"\nHiem thi Ma Tran A: "<<endl;
			hiemThiMaTran( a, m, n);
			break;
		case 4:
			cout<<"Phan tu lon nhat cua Ma Tran la: "<<Max(a, m, n);
			break;
		case 5:
			Max2( a, m, n);
			break;
		default:
			cout<<"Ban da nhap sai.";
	}
	
}

