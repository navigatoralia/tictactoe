#include <iostream>
using namespace std;
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
	return(0);
}