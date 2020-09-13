#include <iostream>
using namespace std;

int main()
{
	int array[4] = { 5, 8, 2, 7 };

	// toán tử trỏ (*) trả về giá trị phần tử đầu tiên: array[0]
	cout << *array << '\n'; // 5

	// khai báo con trỏ ptr trỏ vào mảng array
	int *ptr = array;
	cout << *(ptr) << '\n'; // 5

	char name[] = "Kteam"; // C-style string (mảng char)
	cout << *name << '\n'; // K

	system("pause");
	return 0;
}