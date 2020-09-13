#include <iostream>
using namespace std;

int main()
{
	int array[4] = { 5, 8, 2, 7 };

	// in gia tra tri cua bien array
	cout << "The array has value: " << array << '\n';

	// in dia chi cua array
	cout << "The array has address: " << &array << '\n';

	// in dia chi cua array[0]
	cout << "Element 0 has address: " << &array[0] << '\n';

	system("pause");
	return 0;
}
