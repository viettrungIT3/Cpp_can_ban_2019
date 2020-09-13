#include<bits/stdc++.h>

using namespace std;

void nhapMaTran(float *p, int &m, int &n)
{
	cout<<"Nhap vao so dong : "; cin>>m;
	cout<<"Nhap vao so cot : "; cin>>n;
	int i,j;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<"a["<<i<<"]["<<j<<"] = ";
			cin>>*(p+i*m+j);
		}
	}
}
void xuatMaTran(float *p, int m, int n)
{
	int i,j;
	cout<<"Mang vua nhap la : "<<endl;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<*(p+i*m+j)<<"  ";
		}
		cout<<"\n";
	}
}
void maxval(float *p, int m, int n)
{
	int i,j,i1,j1;
	float max = *p;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(max<*(p+i*m+j))
			{
			  max = *(p+i*m+j);
				i1 = i;
				j1 = j;
			}
		}
	}
	cout<<"Phan tu a["<<i1<<"]["<<j1<<"] = "<<max<<" la gia tri lon nhat"<<endl;
}
void Tonghang(float *p, int m, int n)
{
	float b[m];
	int i,j=0; 
	while(j<m)
	{
		b[j] = 0;
		for(i=0;i<n;i++)
		{
			b[j] = b[j] + *(p+j*m+i);
		}
		j++;
	}
	cout<<"Tong cac hang cua ma tran la : "<<endl;
	for(i=0;i<n;i++)
	{
		cout<<"Hang thu "<<i+1<<" : "<<b[i]<<endl;
	}
}
int main()
{
	int m , n ;
	float *p = NULL;
	p = new float [200];
	nhapMaTran(p,m,n);
	xuatMaTran(p,m,n);
	maxval(p,m,n);
	Tonghang(p,m,n);
}
