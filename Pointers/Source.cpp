#include <iostream>

using namespace std;

int main()
{
	char myChar = 'a';
	char *myCharPtr = &myChar;

	cout << myChar << endl;				// Udskriver udskriver indholdet af myChar, alts� et 'a'

	cout << &myChar << endl;			// Udskriver addressen til myChar

	cout << myCharPtr << endl;			// Udskriver indholdet af pointeren, alts� addressen p� myChar,

	cout << *myCharPtr << endl;			// Udskriver det som pointeren peger p�, alts� et 'a'
	
}