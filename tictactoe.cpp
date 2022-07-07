#include <iostream>
#include <limits>
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

bool checarEstadoJogo(char velha_aux[],char jogada, int valida)
{
	if(velha_aux[0] == jogada and velha_aux[1] == jogada and velha_aux[2] == jogada)
	{
		cout<<"O vencedor é o jogador "<<jogada;
		return true;
	}
	else if (velha_aux[3] == jogada and velha_aux[4] == jogada and velha_aux[5] == jogada)
	{
		cout<<"O vencedor é o jogador "<<jogada;
		return true;
	}
	else if (velha_aux[6] == jogada and velha_aux[7] == jogada and velha_aux[8] == jogada)
	{
		cout<<"O vencedor é o jogador "<<jogada;
		return true;
	}
	else if (velha_aux[0] == jogada and velha_aux[4] == jogada and velha_aux[8] == jogada)
	{
		cout<<"O vencedor é o jogador "<<jogada;
		return true;
	}
	else if (velha_aux[6] == jogada and velha_aux[4] == jogada and velha_aux[2] == jogada)
	{
		cout<<"O vencedor é o jogador "<<jogada;
		return true;
	}
	else if (velha_aux[0] == jogada and velha_aux[3] == jogada and velha_aux[6] == jogada)
	{
		cout<<"O vencedor é o jogador "<<jogada;
		return true;
	}
	else if (velha_aux[1] == jogada and velha_aux[4] == jogada and velha_aux[7] == jogada)
	{
		cout<<"O vencedor é o jogador "<<jogada;
		return true;
	}
	else if (velha_aux[2] == jogada and velha_aux[5] == jogada and velha_aux[8] == jogada)
	{
		cout<<"O vencedor é o jogador "<<jogada;
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

int pedirJogada()
{
    int posicao;
    cout<<"Em que posição deseja jogar?"<<endl;
    cin>>posicao;

    // Garante que a entrada seja um número
    while (cin.fail())
    {
        //Estas duas linhas limpam o cin para receber um dado novo.
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        // Pede a jogada de novo
        cout<<"Jogada inválida. Tente novamente"<<endl;
        cin>>posicao;
    }

    return posicao;
}

int jogar()
{
	int opcao, posicao, posValida;
	char j1, j2, vezJogador;
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
		j1 = 'X';
		j2 = 'O';
		cout<<"Você escolheu o "<<j1<<". Seu oponente ficará com o "<<j2<<endl;
		break;

		case 2:
		j1 = 'O';
		j2 = 'X';
		cout<<"Você escolheu o "<<j1<<". Seu oponente ficará com o "<<j2<<endl;
		break;

		default:
		cout<<"Saindo"<<endl;
		return(0);
	}

	//Início do jogo
	vezJogador = j1;
	imprimirTabuleiro(velha);
	while(fimJogo == false)
	{

        cout<<"É a vez do jogador "<<vezJogador<<endl;
        cout<<"As posições válidas para jogar são: ";
        imprimirPosicoes(velha);
        posicao = pedirJogada();
	    velha[posicao-1] = vezJogador;
	    posValida--;
	    imprimirTabuleiro(velha);
	    fimJogo = checarEstadoJogo(velha, vezJogador, posValida);

	    if(vezJogador == j1) 
	        vezJogador = j2;
	    else 
	        vezJogador = j1;
	}
}
