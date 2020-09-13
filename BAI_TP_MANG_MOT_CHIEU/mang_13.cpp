#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <math.h>
using namespace std;

void nhap(int *n){
	do {
		cout<<"Nhap so nguyen n: ";
		cin>>*n;
	} while ( *n<=0);
} 

void nhapMang( int a[], int n){
	cout<<"Nhap vao mang "<<n<<" phan tu:\n";
	for (int i=0;i<n;i++){
		cout<<"\ta["<<i<<"] = ";
		cin>>a[i];
	}
}
void hiemThiMang(int a[], int n){
	cout<<"Mang vua nhap: \n";
	for (int i=0;i<n;i++)
		cout<<"\t"<<a[i];
}

int dem_PT(int a[], int n){
	int dem = 0;
	for (int i=0;i<n;i++)
		if (sqrt(double(a[i]))*sqrt(double(a[i]))== a[i])
			dem++;
	return dem;
}

void PT_chan_last(int a[], int n){
	if (dem_PT(a, n) == 0)
		cout<<"Khong co phan tu chinh phuong trong mang.";
	else {
		int i, m;
		for ( i=n-1;i>=0;i--)
			if (sqrt(a[i])*sqrt(a[i]) == a[i]){
				m = a[i];
				break;
			}
		cout<<"Phan tu chinh phuong cuoi cung trong mang la: "<<m;
	}
}
int main(){
	int a[105], n;
	nhap( &n);
	nhapMang(a, n);
	//hiemThiMang(a, n);
	PT_chan_last(a, n);
}
