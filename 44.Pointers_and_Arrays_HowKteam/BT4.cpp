#include <iostream>
using namespace std;

void printSize(int *array)
{
	// tham số array là con trỏ int*
	cout << sizeof(array) << '\n'; // kích thước con trỏ int*, không phải kích thước mảng
}

int main()
{
	int array[4] = { 5, 8, 2, 7 };
	cout << sizeof(array) << '\n'; // kích thước mảng: sizeof(int) * array length

	printSize(array); // đối số array được chuyển thành con trỏ int* tại đây

	system("pause");
	return 0;
}