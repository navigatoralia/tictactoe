#include <iostream>
using namespace std;


void tabuleiro()
{
	char velha[9];
	cout<<"  "<<velha[0]<<" | "<<velha[1]<<" | "<<velha[2]<<" "<<endl
		<<"---+---+---"<<endl
		<<"  "<<velha[3]<<" | "<<velha[4]<<" | "<<velha[5]<<" "<<endl
		<<"---+---+---"<<endl
		<<"  "<<velha[6]<<" | "<<velha[7]<<" | "<<velha[8]<<" "<<endl;
}

int main()
{
	int opcao;
	char p1, p2;
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
	tabuleiro();
	return(0);
}
