#include <iostream>
using namespace std;

int main()
{
	char String1[20];   // A string of 19 chars + a null char.

	cout << "Enter a string of maximum 19 chars : ";
	cin >> String1; // Reads characters from the keyboard until the first whitespace character is encountered.
	cout << endl;

	for( int i = 0 ; String1[i] != '\0' ; i++ )  // null char is determined by '\0'
	{
		cout << String1[i] << endl;
	}

	cout << endl;
	return 0;
}
