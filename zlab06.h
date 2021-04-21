#include <iostream>
#include "zlab02.h"
#include "zlab03.h"

class Kwadrat : public Prostokat
{
public:
	Kwadrat(string nazwa = "?", double bok = 0) :Prostokat(nazwa, bok, bok) {}

	~Kwadrat() {
		cout << "Kwadrat: " << nazwa << " kończy działanie" << endl;
	}


	string doTekstu();
};