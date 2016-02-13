#include "Nummerstander.h"

Nummerstander::Nummerstander()
{
	senestEkspederedeNummer_ = 99;
	senestTrukneNummer_ = 99;
}

void Nummerstander::treakNummer()
{
	++senestTrukneNummer_;
	if (senestTrukneNummer_ == 100)
	{
		senestTrukneNummer_ = 0;
	}
}

int Nummerstander::getNaesteNummerIKoe()
{
	if (senestEkspederedeNummer_ == senestTrukneNummer_)
	{
		return -1;
	}
	else
	{
		++senestEkspederedeNummer_;
		if (senestEkspederedeNummer_ == 100)
		{
			senestEkspederedeNummer_ = 0;
		}
		return senestEkspederedeNummer_;
	}
}