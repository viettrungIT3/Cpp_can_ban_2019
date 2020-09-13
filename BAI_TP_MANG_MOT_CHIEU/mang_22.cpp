#include <stdio.h>
#include <conio.h>
#include <iostream>
using namespace std;

void nhap(int *n){
	do {
		cout<<"Nhap n:";
		cin>>*n;
	} while (*n <= 0);
}

void nhapMang(int a[], int n){
	cout<<"Nhap vao mang "<<n<<" so nguyen:\n";
	for (int i=0; i<n; i++){
		cout<<"\ta["<<i<<"] = ";
		cin>>a[i];
	}
}

void hiemThiMang(int a[], int n){
	//cout<<"Mang vua nhap: ";
	for (int i=0; i<n;i++){
		cout<<"\t"<<a[i];
	}
}

void Chen(int a[ ], int &n, int vt, int x)
{
	if (vt >= 0 && vt <= n)
	{
		for (int i = n; i >= vt; i--)
			a[i] = a[i - 1];
	
		a[vt] = x;
		n++;
	}
}


int main(){
	int a[105], n, x, vt;
	nhap(&n);
	nhapMang(a, n);
	/*
	cout<<"Mang vua nhap:";
	hiemThiMang(a, n);
	*/
	cout<<"\nNhap phan tu can them:";
	cin>>x;
	cout<<" vao vi tri:"; cin>>vt; //cout<<" trong mang";
	Chen(a, n, vt, x);
	cout<<"\nMang vua them: ";
	hiemThiMang(a, n);
}

