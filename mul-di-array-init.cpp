s#include <iostream>
#include <iomanip>
using namespace std;

void PrintArray (int [][3]); // The 2nd subscript must be mentioned.

int main()
{
	int Array1[2][3] = { {1 , 2 , 3} , { 4 , 5 , 6 } }; // Each list represents each row.
	int Array2[2][3] = { 1 , 2 , 3 , 4 };
	int Array3[2][3] = { {1} , {2 , 3 } }; // The undefined elements are automatically set to zero.

	PrintArray(Array1);
	PrintArray(Array2);
	PrintArray(Array3);

	return 0;
}

void PrintArray (int ArrayName [][3])
{
	for (int i = 0 ; i < 2 ; i++)
	{
		for (int j = 0 ; j < 3 ; j++)
			cout << setw(4) << setiosflags (ios::left) << ArrayName[i][j];
		cout << endl;
	}
	cout << endl;
}
