#include <iostream>
#include <string.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	char ho[10], tendem[10], ten[10], hovaten[10];
	cout<<"Nhap Ho: ";
	gets(ho);
	cout<<"Nhap Ten dem: ";
	cin.getline(ten,10);
	cout<<"Nhap Ten: ";
	gets(ten);
	strcpy(hovaten,"");
	strcat(hovaten, ho);
	strcat(hovaten, " ");
	strcat(hovaten, tendem);
	strcat(hovaten, " ");
	strcat(hovaten, ten);
	cout<<"\nHo va ten: ";
	puts(hovaten);
	return 0;
}
