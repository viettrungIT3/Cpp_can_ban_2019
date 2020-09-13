#include <iostream>
#include <typeinfo>
using namespace std;

int main()
{
	int array[4] = { 5, 8, 2, 7 };

	cout << typeid(array).name() << '\n';
	cout << sizeof(array) << '\n';

	int *ptr = array;
	cout << typeid(ptr).name() << '\n';
	cout << sizeof(ptr) << '\n';

	system("pause");
	return 0;
}
