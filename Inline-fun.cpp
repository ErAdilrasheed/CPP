#include <iostream>
#include <iomanip>
using namespace std;

inline int Cube (int);

int main()
{
	cout << setw(4) << "SIDE" << setw(6) << "CUBE" << endl;
	for (int i=1 ; i <= 10 ; i++)
		cout << setw(4) << i << setw(6) << Cube(i) << endl;
	cout << endl;
	
	return 0;
}

inline int Cube (int Side)
{
	return Side * Side * Side;
}
