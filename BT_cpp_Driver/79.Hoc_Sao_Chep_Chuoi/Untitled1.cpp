#include <iostream>
#include <string.h>;
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	char str1[25], str2[25];
	cout<<"Nhap chuoi 1:";
	gets(str1);
	cout<<"Chuoi 1 chua sao chep: ";
	puts(str1);
	strcpy(str2, str1);
	cout<<"Chuoi 1 sau khi sao chep: "<<str1;
	cout<<"Chuoi 2 khi ddc sao chep tuwf chuoi 1: "<<str2;
	return 0;
}
