#include <iostream>
#include "complejo.h"

int main()
{
    Complejo c1;
    Complejo c2(1, 2.2);
    Complejo c3(2, 3.3);

    std::cout << "C1:" << std::endl;
    c1.toString();
    std::cout << std::endl;
    std::cout << "C2:" << std::endl;
    c2.toString();
    std::cout << std::endl;
    std::cout << "C3:" << std::endl;
    c3.toString();
    std::cout << std::endl;

    std::cout << "SUMA: C1 = C2 + C3" << std::endl;

    c1 = c2 + c3;

    std::cout << std::endl;
    std::cout << "C1:" << std::endl;
    c1.toString();


    return 0;
}


/*
La sobrecarga de operadores en C++ es una característica que permite definir comportamientos personalizados
para operadores específicos cuando se aplican a objetos de una clase. Esto implica proporcionar una implementación específica
para un operador dado en el contexto de una clase particular, lo que permite que los objetos de esa clase se comporten 
de manera personalizada al utilizar operadores estándar, como la suma (+), la resta (-), la multiplicación (*), la división (/), entre otros. 
La sobrecarga de operadores mejora la expresividad y la legibilidad del código al permitir que los objetos de una clase respondan de manera intuitiva a operaciones comunes.
*/