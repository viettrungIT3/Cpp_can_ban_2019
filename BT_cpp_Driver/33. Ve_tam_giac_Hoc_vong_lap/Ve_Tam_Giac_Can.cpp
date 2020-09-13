#include <iostream>
using namespace std;
 
int main()
{
    int soDong;
    cout << "Nhap so dong: ";
    cin >> soDong;
    for(int i = 1; i <= soDong; i++) { 
        // in ky tu khoang trang
        for(int j = i; j < soDong; j++) {
            cout << "  ";
        }
 
        // in ky tu ngoi sao
        for(int j = 1; j <= (2*i-1); j++) {
            cout << "* ";
        }
 
        // xuong dong ke tiep
        cout << endl;
    }
    return 0;
}
