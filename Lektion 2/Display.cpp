#include "Display.h"
#include "Cursor.h"
#include "Nummerstander.h"


Display::Display( int idNummer )
{
	idNummer_ = ( idNummer>0 && idNummer<4 ? idNummer : 0 );
	opdater(00);
}


void Display::opdater( int nummer ) const
{
	Cursor cursor;

	cursor.cursorToXY( 10*idNummer_-5, 11 );

	cout << ( nummer < 10 ? "0" : "" ) << nummer << endl << endl;
}