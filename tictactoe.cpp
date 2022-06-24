#include <iostream>
using namespace std;


void imprimirTabuleiro(char velha_aux[])
{
	cout<<" "<<velha_aux[0]<<" | "<<velha_aux[1]<<" | "<<velha_aux[2]<<" "<<endl
		<<"---+---+---"<<endl
		<<" "<<velha_aux[3]<<" | "<<velha_aux[4]<<" | "<<velha_aux[5]<<" "<<endl
		<<"---+---+---"<<endl
		<<" "<<velha_aux[6]<<" | "<<velha_aux[7]<<" | "<<velha_aux[8]<<" "<<endl;
}

int main()
{
	int opcao;
	char p1, p2;
	char velha[9] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
	cout<<"# Jogo da velha #"<<endl
		<<"Para jogar, aperte 1 para X e 2 para O."<<endl
		<<"Para sair, aperte 0"<<endl;
	cin>>opcao;
	switch(opcao)
	{
		case 1:
		p1 = 'X';
		p2 = 'O';
		cout<<"Você escolheu o "<<p1<<". Seu oponente ficará com o "<<p2<<endl;
		break;

		case 2:
		p1 = 'O';
		p2 = 'X';
		cout<<"Você escolheu o "<<p1<<". Seu oponente ficará com o "<<p2<<endl;
		break;

		default:
		cout<<"Saindo"<<endl;
		return(0);
	}

	//Início do jogo
		imprimirTabuleiro(velha);
}
