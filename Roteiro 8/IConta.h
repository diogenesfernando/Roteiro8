#ifndef ICONTA_H	
#define ICONTA_H
#include <iostream>
#include <string>

class IConta{
	public:
		virtual void Sacar(double valor) = 0;
		virtual void Depositar(double valor) = 0;
	

};
#endif;
