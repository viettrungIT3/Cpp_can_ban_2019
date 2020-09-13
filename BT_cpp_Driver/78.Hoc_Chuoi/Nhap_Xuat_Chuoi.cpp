#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	char str1[25];
	cout<<"Moi ban nhap chuoi 1:";
	gets(str1);
	cout<<"Chuoi 1 sau khi nhap:";
	puts(str1);
	
	char *str2=new char[25];
	cout<<"Moi ban nhap chuoi 2:";
	cin.getline(str2, 25);
	cout<<"Chuoi 2 ban vua nhap:"<<str2<<endl;
	return 0;
}
