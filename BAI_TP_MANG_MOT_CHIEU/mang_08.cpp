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

bool ktSNT(int So){
	if (So<2)
		return false;
	for (int i=2; i<=sqrt(So); i ++)
    {
        if (So%i==0)
        {
            return false;
        }
    }
    return true;
}

int tongPT_SNT(int a[], int n){
	int S = 0;
	for (int i=0;i<n;i++)
		if (ktSNT(a[i]) == true)
			S += a[i];
	return S;
}
int main(){
	int a[105], n;
	nhap( &n);
	nhapMang(a, n);
	//hiemThiMang(a, n);
	cout<<"Tong cac phan tu nguyen to co trong mang: "<<tongPT_SNT(a, n);
}
