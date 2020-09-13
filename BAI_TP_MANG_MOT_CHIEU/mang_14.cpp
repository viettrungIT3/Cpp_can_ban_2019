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

int PT_Max(int a[], int n){
	int max = a[0];
		int i, m;
		for ( i=0;i<n;i++)
			if (a[i] > max)
				max = a[i];
	return max;
}

int main(){
	int a[105], n;
	nhap( &n);
	nhapMang(a, n);
	//hiemThiMang(a, n);
	cout<<"Phan tu lon nhat dau tien trong mang la: "<<PT_Max(a, n);
}
