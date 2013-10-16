#ifndef Ficheiro_
#define Ficheiro_

#include<iostream>
#include <string>
#include <fstream>

using namespace std;


#include "Locais.h"
#include "LocaisHistoricosCulturais.h"
#include "LocaisNaturais.h"
#include "ViasLigacao.h"
#include "AutoEstradas.h"
#include "EstradasNacionais.h"


class Ficheiro
{

	private:
		int cont; // Contador para Locais
		char linha[1024]; // Linha com um maximo de 1024 chars
		char *token; // Recebe o valor do split da linha	
		string nomeFicheiro;


		

	public:
		Ficheiro();
		Ficheiro(const Ficheiro &fx);
		Ficheiro(string nome);
		~Ficheiro();


		void setNomeFicheiro(string nome);
		string getNomeFicheiro()const;
		
		void FicheiroLocais();
		/*void Contruirmatriz();
		void ListarLista();
		void Criargrafo();
		void CaminhosGrafo();
		void ArvoreBinaria();*/


};


Ficheiro::Ficheiro()
{
	nomeFicheiro = "";
}

Ficheiro::Ficheiro(string nome)
{
	nomeFicheiro = nome;
}

Ficheiro::Ficheiro(const Ficheiro &fx)
{

	setNomeFicheiro(fx.nomeFicheiro);
}

/*
void Ficheiro::FicheiroLocais()
{
		/*
			FICHEIRO LOCAIS

			DESCRIÇÃO	TEMP.MEDIO.VISITA		HORARIO_ABERTURA					HORARIO_ENCERRAMENTO
			Serralves	130 minutos				15h25m = 15*60+25 = 925 minutos		18h40m = 18*60+40 = 1120 minutos

			PORTANTO FICA: Serralves,130,925,1120

		*/
	
	/*
	string nomefich1="Ficheiro1.txt";	
	ifstream ler(nomefich1.c_str()); // Verifica se o Ficheiro existe
	if (!ler) 
		cout << "Erro na leitura do Ficheiro do Locais!" << endl << endl;			
	while (ler.getline(linha,1024)!=NULL){	// Fazer o Split de cada linha pela ',' para criação do objecto 	
		cont++;
		token=strtok(linha,",");
		string chave2= token;
		token=strtok(NULL,",");
		string designa2= token;
		token=strtok(NULL,",");
		while(token!=NULL) // Verifica se o ficheiro tem camiões
		{	
			int chave3=atoi(token);
			token = strtok (NULL, ",");
			int capa= atoi(token);	
			Locais* loc = new Locais(chave3,capa); // Cria um Camiao (chave,capacidade)
			ncamioes++; // Incrementa o numero de camiões			
			if(n==tam){ //verifica se o tamanho do vector é igual ao tamanho maximo 
				Camiao* *aux=new Camiao*[2*tam]; // Cria um Vector auxiliar para fazer copia do vector original
				for(int j=0;j<n;j++){
					aux[j]=cm[j];
				}
			tam=2*tam; // Duplicação do tamanho máximo
			delete[]cm;
			cm=aux;
			}
			cm[n]=c->clone(); // Chamar clone do Objecto
			n++; // Incrementar as posicoes vector
			token= strtok(NULL,","); // Lê o próximo para verificar se contêm mais camiões
		}
		//	Edificio* e= new Armazem(chave2,designa2,cm,ncamioes); // Criar Edificio Armazém
		edificio.insere(cont,new Armazem(chave2,designa2,cm,ncamioes)); // Inserir na lista ligada
		ncamioes=0; 
		n=0;	
	}	

	ler2.close();
}*/

ndef Ficheiro_
#define Ficheiro_

#include<iostream>
#include <string>
#include <fstream>

using namespace std;


#include "Locais.h"
#include "LocaisHistoricosCulturais.h"
#include "LocaisNaturais.h"
#include "ViasLigacao.h"
#include "AutoEstradas.h"
#include "EstradasNacionais.h"


class Ficheiro
{

	private:
		int cont; // Contador para Locais
		char linha[1024]; // Linha com um maximo de 1024 chars
		char *token; // Recebe o valor do split da linha	
		string nomeFicheiro;


		

	public:
		Ficheiro();
		Ficheiro(const Ficheiro &fx);
		Ficheiro(string nome);
		~Ficheiro();


		void setNomeFicheiro(string nome);
		string getNomeFicheiro()const;
		
		void FicheiroLocais();
		/*void Contruirmatriz();
		void ListarLista();
		void Criargrafo();
		void CaminhosGrafo();
		void ArvoreBinaria();*/


};


Ficheiro::Ficheiro()
{
	nomeFicheiro = "";
}

Ficheiro::Ficheiro(string nome)
{
	nomeFicheiro = nome;
}

Ficheiro::Ficheiro(const Ficheiro &fx)
{

	setNomeFicheiro(fx.nomeFicheiro);
}

/*
void Ficheiro::FicheiroLocais()
{
		/*
			FICHEIRO LOCAIS

			DESCRIÇÃO	TEMP.MEDIO.VISITA		HORARIO_ABERTURA					HORARIO_ENCERRAMENTO
			Serralves	130 minutos				15h25m = 15*60+25 = 925 minutos		18h40m = 18*60+40 = 1120 minutos

			PORTANTO FICA: Serralves,130,925,1120

		*/
	
	/*
	string nomefich1="Ficheiro1.txt";	
	ifstream ler(nomefich1.c_str()); // Verifica se o Ficheiro existe
	if (!ler) 
		cout << "Erro na leitura do Ficheiro do Locais!" << endl << endl;			
	while (ler.getline(linha,1024)!=NULL){	// Fazer o Split de cada linha pela ',' para criação do objecto 	
		cont++;
		token=strtok(linha,",");
		string chave2= token;
		token=strtok(NULL,",");
		string designa2= token;
		token=strtok(NULL,",");
		while(token!=NULL) // Verifica se o ficheiro tem camiões
		{	
			int chave3=atoi(token);
			token = strtok (NULL, ",");
			int capa= atoi(token);	
			Locais* loc = new Locais(chave3,capa); // Cria um Camiao (chave,capacidade)
			ncamioes++; // Incrementa o numero de camiões			
			if(n==tam){ //verifica se o tamanho do vector é igual ao tamanho maximo 
				Camiao* *aux=new Camiao*[2*tam]; // Cria um Vector auxiliar para fazer copia do vector original
				for(int j=0;j<n;j++){
					aux[j]=cm[j];
				}
			tam=2*tam; // Duplicação do tamanho máximo
			delete[]cm;
			cm=aux;
			}
			cm[n]=c->clone(); // Chamar clone do Objecto
			n++; // Incrementar as posicoes vector
			token= strtok(NULL,","); // Lê o próximo para verificar se contêm mais camiões
		}
		//	Edificio* e= new Armazem(chave2,designa2,cm,ncamioes); // Criar Edificio Armazém
		edificio.insere(cont,new Armazem(chave2,designa2,cm,ncamioes)); // Inserir na lista ligada
		ncamioes=0; 
		n=0;	
	}	

	ler2.close();
}*/


#endif




