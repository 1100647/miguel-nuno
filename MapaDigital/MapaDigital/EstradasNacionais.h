#ifndef EstradasNacionais_
#define EstradasNacionais_

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string>
#include <string.h>

#include "ViasLigacao.h"

class EstradasNacionais : public ViasLigacao
{
	private:
		string tipoPavimento;//asfalto, paralelo, terra batida, etc.
	public:
		EstradasNacionais();
		EstradasNacionais(const EstradasNacionais &en);
		EstradasNacionais(string orig,string dest,string cod,int totalVia,int tempMedio,string tipoPav);
		~EstradasNacionais();
		EstradasNacionais * clone() const;

		//SET's e GET's
		void setTipoPavimento(string tipoPav);
		string getTipoPavimento()const;
	
		//Sobrecarga de operadores
		EstradasNacionais & operator =(const EstradasNacionais &en);
		bool operator >(const EstradasNacionais &en);
		bool operator <(const EstradasNacionais &en);
		bool operator ==(const EstradasNacionais &en);
		void escrever(ostream &out)const;
		

};
<<<<<<< HEAD


EstradasNacionais::EstradasNacionais() //Construtor vazio
{
	tipoPavimento = "vazio";
}

EstradasNacionais::EstradasNacionais(string orig,string dest,string cod,int totalVia,int tempMedio,string tipoPav) : ViasLigacao(orig,dest,cod,totalVia,tempMedio) //Construtor Estradas Nacionais
{
	tipoPavimento = tipoPav;
}

EstradasNacionais::~EstradasNacionais(){}


EstradasNacionais * EstradasNacionais::clone() const{
	return new EstradasNacionais(*this);
}



EstradasNacionais::EstradasNacionais(const EstradasNacionais &en) : ViasLigacao(en)
{
	setTipoPavimento(en.tipoPavimento);
}

void EstradasNacionais::setTipoPavimento(string tipoPav)
{
	tipoPavimento = tipoPav;
}

string EstradasNacionais::getTipoPavimento() const 
{
	return tipoPavimento;
}

void EstradasNacionais::escrever(ostream &out)const  //escreve Tipo de via e Tipo de Pavimento
{
	cout << "TIPO DE VIA: " << "Estrada Nacional" << endl;
	ViasLigacao::escrever(cout);
	cout << "TIPO DE PAVIMENTO: " << tipoPavimento << endl << endl;
}



=======
>>>>>>> bdd737cbe3632410015b630d720936effbea5e7e
#endif