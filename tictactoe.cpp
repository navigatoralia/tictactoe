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

void imprimirPosicoes(char velha_aux[])
{
	//Imprimindo as posições válidas por comparação
	for (int i=0; i<9; i++)
	{
		if (velha_aux[i] == ' ')
		{
			cout<<i+1<<" ";
		}
	}
	cout<<endl;
}

bool checarEstadoJogo(char velha_aux[],char play, int valida)
{
	if(velha_aux[0] == play and velha_aux[1] == play and velha_aux[2] == play)
	{
		cout<<"O vencedor é o jogador "<<play;
		return true;
	}
	else if (velha_aux[3] == play and velha_aux[4] == play and velha_aux[5] == play)
	{
		cout<<"O vencedor é o jogador "<<play;
		return true;
	}
	else if (velha_aux[6] == play and velha_aux[7] == play and velha_aux[8] == play)
	{
		cout<<"O vencedor é o jogador "<<play;
		return true;
	}
	else if (velha_aux[0] == play and velha_aux[4] == play and velha_aux[8] == play)
	{
		cout<<"O vencedor é o jogador "<<play;
		return true;
	}
	else if (velha_aux[6] == play and velha_aux[4] == play and velha_aux[2] == play)
	{
		cout<<"O vencedor é o jogador "<<play;
		return true;
	}
	else if (velha_aux[0] == play and velha_aux[3] == play and velha_aux[6] == play)
	{
		cout<<"O vencedor é o jogador "<<play;
		return true;
	}
	else if (velha_aux[1] == play and velha_aux[4] == play and velha_aux[7] == play)
	{
		cout<<"O vencedor é o jogador "<<play;
		return true;
	}
	else if (velha_aux[2] == play and velha_aux[5] == play and velha_aux[8] == play)
	{
		cout<<"O vencedor é o jogador "<<play;
		return true;
	}
	else if (valida == 0)
	{
		cout<<"Empate";
		return true;
	}
	else
	{
		cout<<"Segue o jogo"<<endl;
		return false;
	}

}

int main()
{
	int opcao, posicao, posValida;
	char p1, p2, playing;
	char velha[9] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
	bool fimJogo = false;
	posValida = 9;
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
	playing = p1;
	imprimirTabuleiro(velha);
	while(fimJogo == false)
	{

	    cout<<"É a vez do jogador "<<playing<<endl;
	    cout<<"As posições válidas para jogar são: ";

	    imprimirPosicoes(velha);

	    cout<<"Em que posição deseja jogar?"<<endl;
	    cin>>posicao;

	    velha[posicao-1] = playing;
	    posValida--;
	    imprimirTabuleiro(velha);
	    fimJogo = checarEstadoJogo(velha, playing, posValida);

	    if(playing == p1) 
	        playing = p2;
	    else 
	        playing = p1;
	}
}
