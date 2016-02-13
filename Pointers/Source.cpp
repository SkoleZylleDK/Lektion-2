#include <iostream>

using namespace std;

int main()
{
	char myChar = 'a';
	char *myCharPtr = &myChar;

	cout << myChar << endl;				// Udskriver udskriver indholdet af myChar, altså et 'a'

	cout << &myChar << endl;			// Udskriver addressen til myChar

	cout << myCharPtr << endl;			// Udskriver indholdet af pointeren, altså addressen på myChar,

	cout << *myCharPtr << endl;			// Udskriver det som pointeren peger på, altså et 'a'
	
}