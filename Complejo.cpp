#include <iostream>
#include "Complejo.h"

//Constructores
Complejo::Complejo() {
	_entero = 0;
	_flotante = 0;
}
Complejo::Complejo(int entero, double flotante) {
	_entero = entero;
	_flotante = flotante;
}

//Metodo sobrecargado para el operador +
Complejo Complejo::operator+ (const Complejo& c) const {
	Complejo auxSuma;
	 
	auxSuma._entero = _entero + c._entero;
	auxSuma._flotante = _flotante + c._flotante;

	return auxSuma;
}
/*
Este metodo sobrecargado del operador +, permite sumar dos objetos de la clase Complejo (Decalrado como constante ya que no va a modificar los objetor operandos):

1-Recibe por parametro una referencia de un objeto que va a sumarse (C3) a otro(C2)(c declarado como constante para evitar modificaciones, ya que no se desea modificar).
2-Accede a cada atributo del objeto que recibe (C3) y lo suma al objeto que se desea sumar para asignarlo luego a una variable auxiliar de la clase Complejo (auxSuma).
3-Retorna el objeto auxiliar con la suma de ambos objetos Complejo a sumar(auxSuma).
4-El objeto auxiliar retornado, se asigna a la variable C1 del main. ( C1 = auxSuma ).

*/


//ToString
void Complejo::toString() {
	std::cout<< "Entero: " << _entero << std::endl;
	std::cout<< "Flotante: " << _flotante << std::endl;
}