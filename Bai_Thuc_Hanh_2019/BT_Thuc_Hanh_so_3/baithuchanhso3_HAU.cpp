#include<iostream>
#include<math.h>
using namespace std;
int tong(int n){
	int chan=0, le=0;
	cout<<"nhap n : ";
	cin>>n;
	for(int i=1;i<=n;i++){
		if(i%2==0) chan+=i;
	}
	for(int i=1;i<=n;i++){
		if(i%2!=0) le+=i;
	}
	cout<<"tong cac so chan: "<<chan;
	cout<<"\ntong cac so le : "<<le;
}
bool ktsnt(int n){
	if(n<2){
		return false;
	}
	else if(n>2){
		if(n%2==0){
			return false;
		}
		for(int i=3; i<=sqrt(n);i+=2){
			if(n%i==0){
				return false;
			}
		}
	}
	return true;
}
int tong_snt(int n){
	int tongnt=0, dem=0;
	cout<<"nhap n : ";
	cin>>n;
	for(int i=1;i<=n;i++){
		if(ktsnt(i)==true){
			tongnt+=i;
			dem++;
		}
	}
	cout<<"tong cac so nguyen to la : "<<tongnt;
	cout<<"\nso luong so nguyen to : "<<dem;
}
float F(float x,int n) {
    int a;
    if (n % 2 == 0)
        a = 1;
    else
        a = -1;
    float temp = 1;
    for (int i = 1; i <= 2 * n + 1; i++)
        temp = temp * x / i;
    return a * temp;
}
 float sinx(float x, int n)
{
    float sin =0;
    cout << "Nhap gia tri sin can tinh(radian): ";
    cin >> x;
    int i = 0;
    while (abs(F(x, i)) > 0.00001) {
        sin += F(x, i);
        i++;
    }
    cout << "Gia tri can tinh: " << sin << endl;
}
long long mu(int n, float x){
	if(n==1){
		return x;
	}
	else{
		return mu(n-1,x)*x;
	}
}
void nhap(int a[50], int &n){
	cout<<"nhap so luong : ";
	cin>>n;
	for(int i=1;i<=n;i++){
		cout<<"phan tu thu "<< i <<" la : ";
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		cout<<a[i]<<"\t";
	}
}
void tongso(int a[], int n){
	nhap(a,n);
	int tong_chan=0, tong_le=0, tong_3=0;
	for(int i=1;i<=n;i++){
		if(a[i]%2==0){
			tong_chan=tong_chan + a[i];
		}
	}
	cout<<"tong so chan: "<<tong_chan;
	for(int i=1;i<=n;i++){
		if(a[i]%2!=0){
			tong_le=tong_le + a[i];
		}
	}
	cout<<"\ntong cac so le: "<<tong_le;
	for(int i=1;i<=n;i++){
		if(a[i]%3==0){
			continue;
		}
		tong_3=tong_3+ a[i];
	}
	cout<<"\ntong cac so chia het cho 3: "<<tong_3;
}
int tong_dai(int a[50], int n){
	int sum=0;
	for(int i=1;i<=n;i++){
		sum+=a[i];
	}
	return sum;
}
void menu(){
	int chon, n, a[50];
	float x;
	do{
		cout<<"\nrat han hanh duoc phuc vu quy khach\n";
		cout<<"*******moi chon chuc nang***********\n";
		cout<<"**************MENU******************\n";
		cout<<"0..thoat\n1..tong trong day\n2...tong so nguyen to\n3...tinh sin\n4....tinh x^n\n5...day dao nguoc\n6.....tong chan le chia 3\n7...tong mang\n";
		cout<<"**********ban chon gi***************\n";
		cin>>chon;
		switch(chon){
			case 0:break;
			case 1:{
				tong(n);
				break;
			}
			case 2:{
				tong_snt(n);
				break;
			}
			case 3:{
				sinx(x,n);
				break;
			}
			case 4:{
				cin>>n>>x;
				cout<<"gia tri can tim la: "<<mu(n,x);
				break;
			}
			case 5:{
				cout<<"chua nghi ra: ";
				break;
			}
			case 6:{
				tongso(a,n);
				break;
			}
			case 7:{
				nhap(a,n);
				cout<<"gia tri can tim la: "<<tong_dai(a,n);
				break;
			}
		}
	}while(chon);
}
int main(){
	menu();
	return 0;
}

