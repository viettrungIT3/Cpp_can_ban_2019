#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;


void nhap_So_kWh(int a[], int n){
	
	for (int i = 0; i <n; i++){
		cout<<"So dien tieu thu cua gia dinh thu "<<i+1<<": ";
		cin>>a[i];
	}
	cout<<"Da nhap xong so kWh gio dien cua "<<n<<" ho gia dinh."<<endl;
}

int Tien_Dien(int k){
    if(k<=50){
        return k*1678;
    }
    if(k<=100){
        return 50*1678 + (k-50)*1734;
    }
    if(k<=200){
        return 50*1678 + 50*1734 + (k-100)*2014;
    }
    if(k<=300){
        return 50*1678 + 50*1734 + 50*2014 + (k-150)*2536;
    }
    if(k<=400){
        return 50*1678 + 50*1734 + 50*2014 + 50*2536 + (k-200)*2834;
    }
    if(k>400){
        return 50*1678 + 50*1734 + 50*2014 + 50*2536 + 50*2834 + (k-250)*2927;
    }
    return k;
}

void hiem_Thi_So_kWh(int a[], int n){
	cout<<"Danh sach so kwh dien tieu thu cua n ho gia dinh va so tien dien phai tra cua ho:"<<endl;
	for (int i = 0; i < n; i++){
		cout<<"SO dien tieu thu cua Ho thu "<<i+1<<":"<<a[i]<<" Va co tien dien "<<Tien_Dien(a[i])<<endl;
	}
	cout<<endl;
}

void Min(int a[], int n){
	int m = Tien_Dien(a[0]);
	int vt = 1;
	for (int i = 1; i < n; i++){
		if (m > Tien_Dien(a[i])){
			m = Tien_Dien(a[i]);
			vt = i;
		}
	}
	cout<<"Ho gia dinh co it tien dien nhat la: ho "<<vt<<" voi so tien la: "<<m<<endl;
}

void doi_cho(int &xp, int &yp)
{
    int temp = xp;
    xp = yp;
    yp = temp;
}


void Sap_Xep_Tang(int a[],int n){
	cout<<"Ds ho gia dinh su dung tien dien theo thu tu tang la:"<<endl;
	for (int i = 0; i < n-1; i++){
		for(int j=i+1;j<n;j++){
			if(a[i]>a[j]) doi_cho(a[i],a[j]);
		}	
	}
	hiem_Thi_So_kWh(a,n);
}

int main() {
	int a[100];
	int n;
	do
	{
		cout<<"Nhap so ho gia dinh:";
		cin>>n;
	}while(n<0||n>100);
	nhap_So_kWh(a,n);
	int chon;
	
	do
	{
		cout<<" - Bam phim 1 de hien danh sach "<<endl;
		cout<<" - Bam phim 2 de biet so ho su dung it nhat"<<endl;
		cout<<" - Bam phim 3 de sap xep tang dan"<<endl;
		cout<<"\n-Bam phim 0 de quay lai: "<<endl;	
		cout<<"Nhap vao lua chon:";cin>>chon;
		switch(chon){
			case 1: hiem_Thi_So_kWh(a,n);break;
			case 2: Min(a,n);break;
			case 3: Sap_Xep_Tang(a,n);break;
			default: cout<<" ";break;
		}
	}while(n==0);
	
	
	//
	//
	return 0;
}
	
