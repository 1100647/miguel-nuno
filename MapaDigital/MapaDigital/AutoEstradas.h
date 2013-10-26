#ifndef AutoEstradas_
#define AutoEstradas_

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string>
#include <string.h>

#include "ViasLigacao.h"

class AutoEstradas : public ViasLigacao //classe AutoEstradas
{
	private:                    
		double precoPortagem;
	public:
		AutoEstradas();
		AutoEstradas(const AutoEstradas &ae);
		AutoEstradas(string orig,string dest,string cod,int totalVia,int tempMedio,double preco);
		~AutoEstradas();
		AutoEstradas * clone() const;

		//SET's e GET's
		void setPrecoPortagem(double preco);
		double getPrecoPortagem() const;
	
		
		//Sobrecarga de operadores
		AutoEstradas & operator =(const AutoEstradas &ae);
		bool operator >(const AutoEstradas &ae);
		bool operator <(const AutoEstradas &ae);
		bool operator ==(const AutoEstradas &ae);
		void escrever(ostream &out) const;
		

};
<<<<<<< HEAD


AutoEstradas::AutoEstradas() //AutoEstrada sem portagem
{
	precoPortagem = 0;
}

AutoEstradas::AutoEstradas(string orig,string dest,string cod,int totalVia,int tempMedio,double preco) : ViasLigacao(orig,dest,cod,totalVia,tempMedio) //Construtor AutoEstradas
{
	precoPortagem = preco;
}

AutoEstradas::~AutoEstradas(){} //destrutor


AutoEstradas * AutoEstradas::clone() const{  //função clone de AutoEstradas
	return new AutoEstradas(*this);
}


AutoEstradas::AutoEstradas(const AutoEstradas &ae) : ViasLigacao(ae)  //Construtor
{
	setPrecoPortagem(ae.precoPortagem);
}

void AutoEstradas::setPrecoPortagem(double preco) //Método set
{
	precoPortagem = preco;
}

double AutoEstradas::getPrecoPortagem() const  //Método get
{
	return precoPortagem;
}

void AutoEstradas::escrever(ostream &out)const  //Escrevetipo de via e Preço portagem
{
	cout << "TIPO DE VIA: " << "Auto Estrada" << endl;
	ViasLigacao::escrever(cout);
	cout << "PRECO DA PORTAGEM: " << "EUR "<< precoPortagem << endl << endl;
}



=======
>>>>>>> bdd737cbe3632410015b630d720936effbea5e7e
#endif