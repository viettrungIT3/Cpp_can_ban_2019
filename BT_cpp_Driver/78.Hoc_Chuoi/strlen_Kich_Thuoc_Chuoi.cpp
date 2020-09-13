#include <iostream>
#include <string.h>
using namespace std;

int main(int argc, char** argv) {
	char str[25];
	cout<<"Moi ban nhap chuoi:";
	gets(str);
	cout<<"Chuoi sau khi nhap:";
	puts(str);
	cout<<"Kich thuoc thuc su ban nhap: "<<strlen(str);
	return 0;
}
