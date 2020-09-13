#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int (*p);
	p = new int; 	// cap phat bo nho cho con tro p
	*p = 105; 	// gan gia tri 100 tai o ma con tro toi
	cout<<"Dia chi tai con tro p = "<<p<<endl;
	cout<<"Gia tri tai con tro p tro toi: "<<*p<<endl;
	delete p; 
	return 0;
}
