#include <iostream>
using namespace std;

// tham số ptr đang chứa địa chỉ mảng array
void changeArray(int *ptr)
{
	// thay đổi mảng bên trong hàm đồng nghĩa mảng bên ngoài cũng thay đổi
	*ptr = 1;
	ptr[1] = 3;
}

int main()
{
	int array[] = { 5, 8, 2, 7 };
	cout << "Before" << '\n';
	cout << "array[0]: " << array[0] << '\n';
	cout << "array[1]: " << array[1] << '\n';

	changeArray(array);

	cout << "After" << '\n';
	cout << "array[0]: " << array[0] << '\n';
	cout << "array[1]: " << array[1] << '\n';
    cout << "array[2]: " << array[2] << '\n';

	system("pause");
	return 0;
}