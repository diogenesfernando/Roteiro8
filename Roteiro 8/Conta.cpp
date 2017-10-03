#include "Conta.cpp"

Conta::Conta(string nomecl, float salariomen, int numerocon, float sald){
	SetNomeCliente(nomecl);
	SetSalarioMensal(float salariomen);
	SetNumeroConta(int numerocon);
	SetSaldo(float sald);
}

void Conta::DefinirLimite(){
	limite = 2*salarioMensal;
}

void Conta::SetNomeClienta(string nomecl){
	nomeCliente = nomecl;
}

void Conta::SetSalarioMensal(float salariomen){
	salarioMensal = salariomen;
}

void Conta::SetNumeroConta(int numerocon){
	numeroConta = numerocon;
}

void Conta::SetSaldo(float sald){
	saldo = sald;
}

void Conta::SetLimite(float limit){
	limite = limit;
}

string Conta::GetNomeClienta(){return this->nomeCliente;}
float GetSalarioMensal(){return this->salarioMensal;}
int GetNumeroConta(){return this->numeroConta;}
float GetSaldo(){return this->saldo;}
float GetLimite(){return this->limite;}	
