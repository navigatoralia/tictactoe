#ifndef JOGODAVELHA_H
#define JOGODAVELHA_H

#include <iostream>
using namespace std;

class JogoDaVelha
{
public:
	void imprimirTabuleiro(char velha_aux[]);
	void imprimirPosicoes(char velha_aux[]);
	bool checarEstadoJogo(char velha_aux[],char jogada, int valida);
	int pedirJogada();
	void iniciarJogo();

};

#endif