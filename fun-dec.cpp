#include <iostream>
using namespace std;

void ShowAge(int); // Function Prototype. It could have been: void ShowAge(int x);
     // Signature (The return type is not a part of signature).
int main()
{
	int Age;
	cout << "How old are you ? ";
	cin >> Age;
    ShowAge(Age);  // Function Call.
	
    return 0;
}

void ShowAge(int n)    // no semicolons.
{
	cout << "You are " << n << " years old." << endl;
}
