#include <iostream>
#include <string.h>
using namespace std;

int main(int argc, char** argv) {
	char str[25];
	cout<<"Moi ban nhap chuoi:";
	gets(str);
	cout<<"Chuoi sau khi nhap:";
	puts(str);
	int k;
	cout<<"Nhap vi tri can xoa: ";
	cin>>k;
	k-=1;
	for (int i=k; i< strlen(str); i++)
		str[i]=str[i+1];
	cout<<"Chuoi sau khi xoa: "<<str;
	return 0;
}
