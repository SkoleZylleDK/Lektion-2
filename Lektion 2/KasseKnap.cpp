#include "Display.h"
#include "KasseKnap.h"
#include "Nummerstander.h"

KasseKnap::KasseKnap(Nummerstander *nr, Display *display)
{
	nummerPtr_ = nr;
	displayPtr_ = display;
}

void KasseKnap::tryk()
{
	int nummer = nummerPtr_->getNaesteNummerIKoe();

	if (nummer != -1)
	{
		displayPtr_->opdater(nummer);
	}
}