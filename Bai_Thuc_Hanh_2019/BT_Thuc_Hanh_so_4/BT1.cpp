#include <iostream>
using namespace std;
#define MAX 100

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void InArr(float a[], int n)
{
	cout<<"Nhap vao mang "<<n<<" so thuc: "<<endl;
	for (int i = 0; i < n; i++)
	{
		cout<<"\ta["<<i<<"] = ";
		cin>>a[i];
	}
}

void OutArr(float a[], int n)
{
	for (int i = 0; i < n; i++)
		cout<<"\t"<<a[i];
}

void swap(float a, float b){
	float temp;
	a = temp;
	temp = b;
	b = a;
}


void Sap_Xep_Tang(float a[], int n)
{
	int tg;
    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            if(a[i] > a[j]){
                tg = a[i];
                a[i] = a[j];
                a[j] = tg;        
            }
        }
    }
}

void PhanTich(float a[], int n)
{
	int dem = 0, dem1 = 0, dem2 = 0;
	for (int i = 0; i < n-1; i++)
	{
		if (a[i] < a[i+1])
			dem1++;
		if (a[i] > a[i+1])
			dem2++;
		else 
			dem++;
	}
	if (dem1 == n-1)
		cout<<"Mang tang lien tuc.";
	else if (dem2 == n-1)
		cout<<"Mang giam lien tuc.";
	else if (dem == n-1)
		cout<<"Mang khong doi.";
	else 
	{
		cout<<"Mang chua duoc sap xep."<<endl;
		cout<<"Sau khi sap xep lai mang: ";
		Sap_Xep_Tang(a, n);
		OutArr( a, n);
	}
		
}

int main(int argc, char** argv) {
	int n;
	float a[MAX];
	do
	{
		cout<<"Nhap so nguyen duong n = ";
		cin>>n;
	} while ( n <= 0);
	InArr(a, n);
	PhanTich(a, n);
	return 0;
}
