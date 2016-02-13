#pragma once

#include "Display.h"
#include "Nummerstander.h"

using namespace std;

class KasseKnap
{
public:
	KasseKnap(Nummerstander *, Display *);
	void tryk();
private:
	Display *displayPtr_;
	Nummerstander *nummerPtr_;
};