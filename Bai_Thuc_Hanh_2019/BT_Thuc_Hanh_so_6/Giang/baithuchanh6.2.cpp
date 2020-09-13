#include<iostream>
#include<string.h>
#include<iomanip>
using namespace std;

void nhap(int &n){
	do{
		cout<<"Nhap so ho dan su dung dien:";
		cin>>n;
	} while(n <= 0);
}

float m(float a){
	float b = 0;
	if(a > 400)
			b = a*2.927;
		else {if(a > 300)
				b = a*2.834;
			else {if(a > 200)
					b = a*2.536;
				else {if(a >100)
						b = a*2.014;
					else {if(a >50)
							b = a*1.734;
						else 
							b = a*1.678;
					}
				}
			}
		}
		return b;
}

void nhap_DS(char s1[][50], char s2[][50], float a[], float b[], int n){
	cout<<"Nhap danh sach:"<<endl;
	for(int i = 0; i < n; i++){
		cout<<i+1<<":";
		cout<<"Nhap ho dem:";
		fflush(stdin);
		gets(s1[i]);
		cout<<"Nhap ten:";
		fflush(stdin);
		gets(s2[i]);
		cout<<"Nhap so dien su dung:";
		cin>>a[i];
		b[i] = m(a[i]);
	}
}



void yc1(float a[],float b[], int n){
	for(int i = 0; i < n; i++){	
		b[i] = m(a[i]);
		cout<<"So tien ho GD "<<i+1<<" tra la:"<<b[i];
	}
}

void hienthi(char s1[][50], char s2[][50], float a[], float b[], int n){
	cout<<"Danh sach vua nhap la:"<<endl;
	for(int i = 0; i < n; i++){
		b[i] = m(a[i]);
		cout<<setw(20)<<s1[i]<<setw(20)<<s2[i]<<setw(20)<<a[i]<<setw(20)<<b[i];
		cout<<endl;
	}
}

void tong_TT(float b[], int n){
	long sum = 0;
	for(int i = 0; i < n; i++){
		sum += b[i];
	}
	cout<<"Tong tien cua tat ca cac ho GD la:"<<sum;
}

char t(char s2[][50], int i){
	char s[50], c;
	strcpy(s, s2[i]);
	c = s[0];
	return c;
}

void hoanvi(float &m, float &n){
	float tmp = m;
	m = n;
	n = tmp;
}

void sapxep(char s1[][50], char s2[][50], float a[], float b[], int n){
	for(int i = 0; i < n-1; i++){
		for(int j = i+1; j < n; j++){
			if(t(s2, i) > t(s2, j) ){
				char tg[50];
				strcpy(tg, s1[i]);
				strcpy(s1[i], s1[j]);
				strcpy(s1[j], tg);
				hoanvi(a[i], a[j]);
				strcpy(tg, s2[i]);
				strcpy(s2[i], s2[j]);
				strcpy(s2[j], tg);
				hoanvi(a[i], a[j]);
				hoanvi(b[i], b[j]);
			}
		}
	}
	hienthi(s1,s2,a,b,n);
}

void SD_max(char s1[][50], char s2[][50], float a[], float b[], int n){
	for(int i = 0; i < n; i++){
		b[i] = m(a[i]);
	}
	float max = b[0];
	cout<<"Danh sach nhung ho GD su dung nhieu dien nhat:"<<endl;
	for(int i = 1; i < n; i++){
		if(max < b[i])
		max = b[i];
	}
	for(int i = 0; i < n; i++){
		if(b[i] != max)
		continue;
		cout<<i+1<<":";
		cout<<setw(20)<<s1[i]<<setw(20)<<s2[i]<<setw(20)<<a[i]<<setw(20)<<b[i];
		cout<<endl;
	}
}
void yc2(char s1[][50], char s2[][50], float a[], float b[], int n){
	cout<<"Danh sach nhung ho GD co ten bat dau bang chu 'L':";
	for(int i = 0; i < n; i++){
		if(t(s2, i) != 'L')
		continue;
		cout<<i+1<<":";
		cout<<setw(20)<<s1[i]<<setw(20)<<s2[i]<<setw(20)<<a[i]<<setw(20)<<b[i];
		cout<<endl;
	}
}

void nhap_them(char s1[][50], char s2[][50], float a[], float b[], int &n){
	char str1[50], str2[50];
	int k, TT;
	cout<<"Nhap ho gia dinh moi:"<<endl;
		cout<<"Nhap ho dem:";
			fflush(stdin);
			gets(str1);
			cout<<"Nhap ten:";
			fflush(stdin);
			gets(str2);
			cout<<"Nhap so dien su dung:";
			cin>>k;
	for(int i = n ; i >= 1; i--){
		strcpy(s1[i], s1[i-1]);
		strcpy(s2[i], s2[i-1]);
		a[i] = a[i-1];
		b[i] = m(a[i-1]);
		cout<<s2[i]<<endl;
	}
	strcpy(s1[1], str1);
	strcpy(s2[1], str2);
	a[1] = k;
	b[1] = m(a[1]);	
	n++;
	hienthi(s1, s2, a, b, n);
}

int main(){
	char s1[50][50], s2[50][50];
	int n;
	float a[50], b[50];
	nhap(n);
	nhap_DS(s1, s2, a, b, n);
	cout<<"MENU:"<<endl;
	cout<<"\t1.Hien thi danh sach"<<endl;
	cout<<"\t2.Tinh tien dien"<<endl;
	cout<<"\t3.Tong tien phai tra cua tat ca ca ho GD"<<endl;
	cout<<"\t4.Sap xep danh sach theo ten"<<endl;
	cout<<"\t5.Hien thi danh sach nhung ho SD nhieu dien nhat"<<endl;
	cout<<"\t6.Nhung ho gia dinh co ten bat dau bang 'L'"<<endl;
	cout<<"\t7.Chen them ho GD moi vao vi tri thu 2 trong DS"<<endl;
	char ch;
	cout<<"\nNhap vao lua chon:"; cin>>ch;
	switch(ch){
		case '1':{
			hienthi(s1, s2, a, b, n);
			break;
		}
		case '2':{
			yc1(a, b, n);
			break;
		}
		case '3':{
			tong_TT(b, n);
			break;
		}
		case '4':{
			sapxep(s1, s2, a, b, n);
			break;
		}
		case '5':{
			SD_max(s1, s2, a, b, n);
			break;
		}
		case '6':{
			yc2(s1, s2, a, b, n);
			break;
		}
		case '7':{
			nhap_them(s1, s2, a, b, n);
			break;
		}
	}
	return 0;
}
