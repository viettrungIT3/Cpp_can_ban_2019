#include<bits/stdc++.h>

using namespace std;

void Nhapmang(int *a, int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		cout<<"Nhap vao so thu "<<i+1<<" :";
		cin>> *(a + i);
	}
}
void Hthimang(int *a,int n)
{
	int i;
	cout<<"Day so vua nhap la : ";
	for(i=0;i<n-1;i++)
	{
		cout<<*(a+i)<<" , ";
	}
	cout<<*(a+n-1)<<endl;
}
void maxEven(int *a,int n)
{
	int i,max = 1,k;
	for(i=0;i<n;i++)
	{
		if(*(a+i) % 2 == 0) 
		{
			max = *(a+i);
			break;
		}
	}
	if(max!=1)
	{
		for(i=1;i<n;i++)
		{
			if(*(a+i) % 2 == 0 && *(a+i) > max) 
			{
				max = *(a+i);
				k = i;
			}
		}
		cout<<"So chan lon nhat trong day la : a["<<k<<"] = "<<max<<endl;
	}
	else cout<<"Trong day khong co so chan"<<endl;
}
void Xoa(int *a, int n)
{
	int m = n , i ,j;
	int *b = new int[m];
	for (i = 0; i < n; i++) *(b+i) = *(a+i);
	for(i=0;i<m;i++)
	{
		if(*(b+i) % 2==0)
		{
			for(j=i;j<m;j++)
			{
				*(b+j) = *(b+j+1);
			}
			m--;
			i--;
		}
	}
	cout<<"Day thu duoc sau khi xoa cac so chan la : ";
	for(i=0;i<m-1;i++)
	{
		cout<<*(b+i)<<" , ";
	}
	cout<<*(b+m-1)<<endl;
	delete b;
}
void Sapxep(int *a, int n)
{
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=i;j<n;j++)
		{
			if(*(a+i)<*(a+j)) 
			{
				int temp = *(a+i);
				*(a+i) = *(a+j);
				*(a+j) = temp;
			}
		}
	}
	cout<<"Day thu duoc sau khi sap xep la : ";
	for(i=0;i<n-1;i++)
	{
		cout<<*(a+i)<<" , ";
	}
	cout<<*(a+n-1)<<endl;
}
void Tachmang(int *a, int n)
{
	int dem = 0 , i , j=0 , k= 0;
	for(i=0;i<n;i++)
	{
		if(*(a+i) % 2 == 0) dem++;
	}
	if(dem==n) cout<<"Mang a toan so chan";
	else if(dem==0) cout<<"Mang a toan so le";
	else
	{
		int *b = new int[n-dem];
		int *c = new int[dem];
		for(i=0;i<n;i++)
		{
			if(*(a+i) %2 ==0 ) 
			{
				*(c+k) = *(a+i);
				k++;
			}
			if(*(a+i) %2 !=0 ) 
			{
				*(b+j) = *(a+i);
				j++;
			}
		}
		cout<<"Sau khi tach mang ta duoc : "<<endl;
		cout<<"Mang chan c : ";
		for(i=0;i<dem-1;i++)
		{
			cout<<*(c+i)<<" , ";
		}
		cout<<*(c+dem-1)<<endl;
		cout<<"Mang le b : ";
		for(i=0;i<n-dem-1;i++)
		{
			cout<<*(b+i)<<" , ";
		}
		cout<<*(b+n-dem-1)<<endl;
		delete b;
		delete c;
	}
}
int main()
{
	int *a= NULL;
	int n;
	cout<<"Nhap vao n la so luong phan tu day a  : ";
	cin>>n;
	a = new int[n];
	Nhapmang(a,n);
	Hthimang(a,n);
	maxEven(a,n);
	Xoa(a,n);
	Sapxep(a,n);
	Tachmang(a,n);
	delete a;
}
