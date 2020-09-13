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
	for (int i=1;i<=n;i++){
		cout<<"\ta["<<i<<"] = ";
		cin>>a[i];
	}
}
void hiemThiMang(int a[], int n){
	cout<<"Mang vua nhap: \n";
	for (int i=1;i<=n;i++)
		cout<<"\t"<<a[i];
}

int dem_X(int a[], int n, int x){
	int dem = 0;
	for (int i=0;i<n;i++)
		if (a[i] == x)
			dem++;
	return dem;
}

int vt_X_lastly(int a[], int n, int x){
	int vt;
	for (int i=n;i>0;i--)
		if (a[i] == x){
			vt = i;
			break;
		}
	return vt;
}

int main(){
	int a[105], n, x, dem;
	nhap( &n);
	nhapMang(a, n);
	//hiemThiMang(a, n);
	cout<<"Nhap x:"; cin>>x;
	dem = dem_X(a, n, x);
	if (dem =  0)
		cout<<"\nTrong mang khong co phan tu giong x ="<<x;
	else
		cout<<"\nTrong mang vi tri cua x="<<x<<" cuoi cung la:"<<vt_X_lastly(a, n, x);
}
