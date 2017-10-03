#ifndef CONTA_H	
#define CONTA_H
#include "IConta.h"
#include <iostream>
#include <string>

class Conta{
	private:
		string nomeCliente;
		float salarioMensal;
		int numeroConta;
		float saldo; 
		float limite;

	public:
		Conta(string, float, int, float);
		void SetNomeClienta(string);
		void SetSalarioMensal(float);
		void SetNumeroConta(int);
		void SetSaldo(float);
		void SetLimite(float);
		string GetNomeClienta();
		float GetSalarioMensal();
		int GetNumeroConta();
		float GetSaldo();
		float GetLimite();
		virtual void DefinirLimite();		

};
#endif;
