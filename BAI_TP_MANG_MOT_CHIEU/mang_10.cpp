#include <stdio.h>
#include <conio.h>
#include <iostream>
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

int dem_PT_le(int a[], int n){
	int dem = 0;
	for (int i=0;i<n;i++)
		if (a[i]%2==0)
			dem++;
	return dem;
}

void PT_le_first(int a[], int n){
	if (dem_PT_le(a, n) == 0)
		cout<<"Khong co phan tu le trong mang.";
	else {
		int i, m;
		for ( i=0;i<n;i++)
			if (a[i]%2==1){
				//m = a[i];
				break;
			}
		cout<<"Phan tu le dau tien trong mang la: "<<a[i];
	}
}
int main(){
	int a[105], n;
	nhap( &n);
	nhapMang(a, n);
	//hiemThiMang(a, n);
	PT_le_first(a, n);
}
