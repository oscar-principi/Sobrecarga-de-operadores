#pragma once
class Complejo
{
private:
	int _entero;
	double _flotante;

public:
	Complejo();
	Complejo(int entero, double flotante);

	Complejo operator+ (const Complejo& c) const;
	

	void toString();

};

