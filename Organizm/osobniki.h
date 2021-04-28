#include "Organizm.h"
#include "Mieszkaniec.h"
#include "ustawienia.h"
#include "generatorlosowy.h"
#include "sasiedztwo.h"


class Glon : protected Organizm, public Mieszkaniec {
public:
	Glon();

	virtual RodzajMieszkanca kimJestes() final;
	virtual ZamiarMieszkanca wybierzAkcje(sasiedztwo sasiedztwo);
	virtual Mieszkaniec* dajPotomka();
	virtual void przyjmijZdobycz(Mieszkaniec* mieszkaniec);
};


class Grzyb : protected Organizm, public Mieszkaniec {
public:
	Grzyb();

	virtual RodzajMieszkanca kimJestes() final;
	virtual ZamiarMieszkanca wybierzAkcje(sasiedztwo sasiedztwo);
	virtual Mieszkaniec* dajPotomka();
	virtual void przyjmijZdobycz(Mieszkaniec* mieszkaniec);
};


class Bakteria : protected Organizm, public Mieszkaniec {
public:
	Bakteria();

	virtual RodzajMieszkanca kimJestes() final;
	virtual ZamiarMieszkanca wybierzAkcje(sasiedztwo sasiedztwo);
	virtual Mieszkaniec* dajPotomka();
	virtual void przyjmijZdobycz(Mieszkaniec* mieszkaniec);
};


static const UstawieniaSymulacji& UST = UstawieniaSymulacji::pobierzUstawienia();