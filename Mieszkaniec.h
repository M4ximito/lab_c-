#pragma once
#include <iostream>
#include "zlab02.h"
#include "zlab03.h"
#include "ustawienia.h"

class Sasiedztwo;


class ZamiarMieszkanca
{
public:
	const AkcjaMieszkanca akcja;
	const Polozenie gdzie;

	ZamiarMieszkanca(AkcjaMieszkanca _akcja = NIC, Polozenie _gdzie = NIGDZIE) :akcja(_akcja), gdzie(_gdzie) {}
};


class Mieszkaniec
{
protected:
	char symbol;

public:
	Mieszkaniec(char _symbol = UstawieniaSymulacji::pobierzUstawienia().znakNieokreslony);
	Mieszkaniec(const Mieszkaniec& mieszkaniec);

	virtual char jakiSymbol() const final;
	virtual ~Mieszkaniec();
	virtual RodzajMieszkanca kimJestes() = 0;
	virtual ZamiarMieszkanca

		wybierzAkcje(Sasiedztwo sasiedztwo) = 0;

	virtual Mieszkaniec* dajPotomka() = 0;
	virtual void przyjmijZdobycz(Mieszkaniec* mieszkaniec) = 0;
};