#include <iostream>
using namespace std;

int main()
{
	int MyArray[5] = {1};  // Only initializes MyArray[0] to 1 and others to 0.

	cout << MyArray[4] << endl;

	cout << "&MyArray[0] = " << &MyArray[0] << endl; // Address of MyArray[0] in memory.
	cout << "MyArray = " << MyArray << endl;  // MyArray itself. (without subscript)
	// You see that  MyArray  is equivalent to address of its 1st element (element number 0).

	return 0;
}
