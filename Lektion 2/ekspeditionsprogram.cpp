#include <iostream>
#include <conio.h>
#include "Display.h"
#include "KasseKnap.h"
#include "Nummerstander.h"


using namespace std;


int main()
{
	cout << "Tast 'n' for at trække et nummer." << endl;
	cout << "Tast '1' for ny kunde ved kasse 1." << endl;
	cout << "Tast '2' for ny kunde ved kasse 2." << endl;
	cout << "Tast '3' for ny kunde ved kasse 3." << endl;
	cout << "Tast 'q' for lukke programmet.\n\n\n\n\n";
	cout << "   Kasse1    Kasse2    Kasse3" << endl;

	// erklæring af objekter og variable
	
	Nummerstander Stander;
	Display		Display1(1), Display2(2), Display3(3);
	KasseKnap	knap1(&Stander, &Display1), 
				knap2(&Stander, &Display2), 
				knap3(&Stander, &Display3);

	char tast;

	do
	{
		tast = _getch();

		switch( tast )
		{
		case 'n':
		case 'N':
			Stander.treakNummer();
			break;
		case '1':
			knap1.tryk();
			break;
		case '2':
			knap2.tryk();
			break;
		case '3':
			knap3.tryk();
			break;	
			
		}

	}while( tast != 'q' && tast != 'Q' );

	return 0;
}