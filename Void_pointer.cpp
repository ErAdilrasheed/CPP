#include <iostream>
using namespace std;

int main ( void )
{
	int n = 5;
	char c = 'c';
	double d = 54.4;
	void * vPtr;

	vPtr = &n;
	cout << *(int *)vPtr << endl;
	vPtr = &c;
	cout << *(char *)vPtr << endl;  // It could have been *(int*)... it's not a syntax error,
									//  but a logic error. Because char is 1B but int is 
									//  normally 4B. so it will use 3 adjacent extra bytes.
	vPtr = &d;
	cout << *(double *)vPtr << endl;

	return 0;
}
