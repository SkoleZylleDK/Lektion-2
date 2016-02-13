#pragma once

using namespace std;

class Nummerstander
{
public:
	Nummerstander();
	void treakNummer();
	int getNaesteNummerIKoe();
private:
	int senestTrukneNummer_;
	int senestEkspederedeNummer_;
};