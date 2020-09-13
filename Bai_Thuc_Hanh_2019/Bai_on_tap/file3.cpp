#include<iostream>
#include<fstream>

using namespace std;

int nhap_n(int &n){
	cout<<"Nhap n:";
	cin>>n;
}

void yc1(int *a, int n){
	int sum = 0;
	for(int i = 0; i < n; i++){
		if(*(a+i) % 3 == 0 && *(a+i) % 5 == 0){
			sum += *(a+i);
		}
	}
	cout<<"Tong ca phan tu chia het cho 3 va 5:"<<sum<<endl;
}

void yc2(int *a, int n){
	int k = 0;
	for(int i = 0; i < n-2; i++){
		if(*(a+i) < 0 && *(a+i+1) < 0 && *(a+i+2) < 0 && *(a+i) + *(a+i+1) + *(a+i+2) == -100)
			k++;
	}
	if(k == n - 2)
		cout<<"Day A hop le!"<<endl;
	else cout<<"Day A khong hop le!";
}

int main(){
	int *a, n;
	nhap_n(n);
	a = new int[n];
	fstream ifs("D:/EXAM/ABC2030.TXT", ios::out);
	for(int i = 0; i < n; i++){
		cin>>*(a+i);
		ifs << *(a+i)<<" ";
	}
	ifs.close();
	ifs.open("D:/EXAM/ABC2030.TXT", ios::app);
	for(int i = 0; i < n; i++){
		for(int j = i+1; j < n; j++){
			if(*(a+i) < *(a+j)){
				int tmp = *(a+i);
				*(a+i) = *(a+j);
				*(a+j) = tmp;
			}
		}
	}
	for(int i = 0; i < n; i++){
		ifs << *(a+i)<<" ";
	}
	ifs.close();
	yc1(a, n);
	yc2(a, n);
	return 0;
}
