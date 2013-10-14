#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string>
#include <string.h>
#include <fstream>


#include "Locais.h"
#include "LocaisHistoricosCulturais.h"
#include "LocaisNaturais.h"
#include "ViasLigacao.h"
#include "AutoEstradas.h"
#include "EstradasNacionais.h"
//#include "Ficheiro.h"

int main()
{
	//Locais *loc;//vector de locais
	//Ficheiro f;
	char sel;
 
	cout << "------------------------------------" << endl;
	cout << "------------------------------------" << endl;
    cout << "       M A P A   D I G I T A L       " << endl;
	cout << "------------------------------------" << endl;
	cout << "------------------------------------" << endl;
	cout << "Selecione uma opcao" << endl;
    cout << "1. Inserir locais a partir de um ficheiro de texto" << endl;
    cout << "2. Inserir vias de ligacao a partir do ficheiro" << endl;
	cout << "3. Contabilizar os locais historicos e naturais por ordem alfabetica da sua descricao" << endl;
	cout << "0. Fechar programa\n" << endl;
	cout << "Opcao: ";
	
    cin >> sel;
	

    switch(sel){
        case '1':
			cout << "Opcao 1 " << endl;
			//lerFicheiroLocais(loc);//metodo que carrega os locais para um vector
			break;
 
        case '2':
            cout << "Opcao 2 " << endl;
			break;
                
		case '3':
			cout << "Opcao 3" << endl;
			break;

			case '0':
			cout << "Opcao 0" << endl;
			system("exit");
			break;
 	}



	system("pause");
}
 


/*
int lerFicheiroLocais(Locais *loc)
{
		
    ifstream origem;
	string linha;

	origem.open("Ficheiro1.txt");
	if (!origem){
		cerr << "Erro a abrir ficheiro dos locais\n";
		return -1;
	}


	while (!origem.eof())
	{
		getline(origem, linha, '\n');
	
		if(linha.size() > 0)
		{
			cout << "Linha do ficheiro dos locais" << endl;
		}
	}

	/*---------------------------------------------------------------------------------------*/
	/*string linha;
	string info;

		char *aux;
		string aux1;

		Locais  loc ;
		
		int nrPostos;
		int nlinhas= 0;


	while (!origem.eof()){
		getline(origem, linha, '\n');
	
		if(linha.size() > 0)
		{
	
			//nrPostos
			
			if(nlinhas == 0)
			{
			int inic=0;
			int pos=linha.find(',', inic);	
			aux1 = linha.substr(inic,pos-inic);
			aux = &aux1[0];
			nrPostos = atoi(aux);
			pos++;
			nlinhas++;
			}
			else
			{

			//chave
			int inic=0;
			int pos=linha.find(',', inic);
			a.setChave((linha.substr(inic, pos-inic)));
			pos++;

			//capacidade stock
			inic = pos;
			pos=linha.find(',', inic);
			aux1 = linha.substr(inic,pos-inic);
			aux = &aux1[0];
			a.setCapacidadestock(atof(aux));
			pos++;

			//quantidade seguranca
			inic = pos;
			pos=linha.find(',', inic);
			aux1 = linha.substr(inic,pos-inic);
			aux = &aux1[0];
			a.setQuantidadeseguranca(atof(aux));
			pos++;

			//robot
			inic = pos;
			pos=linha.find(',', inic);
			r.setChave((linha.substr(inic, pos-inic)));
			a.setRobot(r);

			vec_postos.insere((Posto*) a.clone());
			}
		
			
		}

	
	}
	*/
	/*---------------------------------------------------------------------------------------*/

	/*
	origem.close();
	return 0;
}

#include<fstream.h>
#include<iostream.h>
#include <stdlib.h>
void main()
{ char ch;
ifstream f1("file.in");
if (!f1){ // Teste ao estado da fstream input
cout << “Erro a abrir ficheiro de leitura." << endl;
exit(0);
}
ofstream f2("file.out");
if (!f2) { // Teste ao estado da fstream de output 
cout << “Erro a abrir ficheiro de escrita." << endl;
exit(0);
}
while ( f1.get(ch) ) f2.put(ch);
f1.close();
f2.close(); cin.get();
 */
