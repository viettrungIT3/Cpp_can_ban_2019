#include<iostream>
#include<string.h>
#include<iomanip>

using namespace std;

void DS_Hang_hoa(char hanghoa[][50], int a[], int b[]){
	
	cout<<"Nhap danh sach hang hoa:"<<endl;
	for(int i = 0; i < 5; i++){
		cout<<i+1<<":";
		fflush(stdin);
		gets(hanghoa[i]);
		cout<<"So luong:";
		cin>>a[i];
		cout<<"Don gia:";
		cin>>b[i];
		cout<<endl;
	}
}

void yc1(char hanghoa[][50], int a[], int b[]){
	long TT = 0;
	cout<<"Danh sach hang hoa:"<<endl;
	for(int i = 0; i< 5; i++){
		TT = a[i]*b[i];
		cout<<i+1<<":";
		cout<<setw(30)<<hanghoa[i]<<setw(20)<<a[i]<<setw(20)<<b[i]<<setw(20)<<TT;
		cout<<endl;
	}
}

void yc2(int a[], int b[]){
	long Tong_TT = 0;
	for(int i = 0; i < 5; i++){
		Tong_TT += a[i]*b[i];
	}
	cout<<"Tong tien cac mat hang:"<<Tong_TT;
}

char t(char hanghoa[][50], int i){
	char s[50], c;
	strcpy(s, hanghoa[i]);
	c = s[0];
	return c;
}

void hoanvi(int &m, int &n){
	int tmp = m;
	m = n;
	n = tmp;
}

void yc3(char hanghoa[][50], int a[], int b[]){
	for(int i = 0; i < 4; i++){
		for(int j = i+1; j < 5; j++){
			if(t(hanghoa, i) > t(hanghoa, j) ){
				char tg[50];
				strcpy(tg, hanghoa[i]);
				strcpy(hanghoa[i], hanghoa[j]);
				strcpy(hanghoa[j], tg);
				hoanvi(a[i], a[j]);
				hoanvi(b[i], b[j]);
			}
		}
	}
}

void yc4(char hanghoa[][50], int a[], int b[]){
	int min = a[0];
	for(int i = 1; i < 5; i++){
		if(min > a[i])
		min = a[i];
	}
	cout<<"Hang hoa co so luong it nhat:"<<endl;
	for(int i = 0; i < 5; i++){
		if(min == a[i]){
		long TT = a[i]*b[i];
		cout<<i+1<<":";
		cout<<setw(20)<<hanghoa[i]<<setw(20)<<a[i]<<setw(20)<<b[i]<<setw(20)<<TT;
		cout<<endl;
		}
	}
}

void yc5(char hanghoa[][50], int a[], int b[]){
	int dem = 0;
	for(int i = 0; i < 5; i++){
		if(a[i] == 0){
			continue;
		}
		int TT = a[i]*b[i];
		cout<<i+1<<":";
		cout<<setw(20)<<hanghoa[i]<<setw(20)<<a[i]<<setw(20)<<b[i]<<setw(20)<<TT;
		cout<<endl;
	}
}
void yc6(char hanghoa[][50], int a[], int b[]){
	cout<<"Nhap them hang hoa moi:";
	fflush(stdin);
	gets(hanghoa[5]);
	cout<<"So luong:"<<a[5];
	cout<<"Don gia:"<<b[5];
	for(int i = 0; i < 6; i++){
		int TT = a[i]*b[i];
		cout<<i+1<<":";
		cout<<setw(20)<<hanghoa[i]<<setw(20)<<a[i]<<setw(20)<<b[i]<<setw(20)<<TT;
		cout<<endl;
	}
}

int main(){
	char hanghoa[5][50];
	int a[50], b[50];
	DS_Hang_hoa(hanghoa, a, b);
	cout<<"\n1.Tinh thành tien va hien thi danh sach hang hoa";
	cout<<"\n2.Tinh tong tien cua tat ca cac loai hang hoa";
	cout<<"\n3.Sap xep danh sach hang hoa theo thu tu tu dien";
	cout<<"\n4.Hien thi nhung hang hoa co so luong it nhat";
	cout<<"\n5.Xoa cac hang hoa co so luong bang 0 va hien thi danh sach";
	cout<<"\n6.Nhap them mot hang hoa moi vao cuoi danh sach va hien thi danh sach";
	char ch;
	cout<<"Nhap vao lua chon: ";
	cin>>ch;
	switch(ch){
		case '1':{
			yc1(hanghoa, a, b);
			break;
		}
		case '2':{
			yc2(a, b);
			break;
		}
		case '3':{
			yc3(hanghoa, a, b);
			break;
		}
		case '4':{
			yc4(hanghoa, a, b);
			break;
		}
		case '5':{
			yc5(hanghoa, a, b);
			break;
		}
		case '6':{
			yc6(hanghoa, a, b);
			break;
		}
	}
	return 0;
}
