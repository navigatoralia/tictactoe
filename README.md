# tictactoe

Fazer um jogo da velha, que permita duas pessoas jogarem uma contra outra. Elas jogam por turnos, primeiro o computador chama o jogador 1 para fazer uma ação e depois o jogador dois fazer a sua. O jogo termina quando um dos jogadores faz uma sequencia vertical, horizontal ou diagonal com seu símbolo, ou quando não houver mais espaço para jogar no tabuleiro, o que é considerado empate.

Considerando que temos:

```
 1 | 2 | 3 
---+---+---
 4 | 5 | 6 
---+---+---
 7 | 8 | 9
```

Uma sequência do mesmo caractere deve ocorrer em 123, 456, 789, 753, 159, 147, 258 ou 369 para que o jogo possa ser considerado ganho, onde os símbolos para jogar normalmente são X e O. Sendo assim,

```
 X | O | X 
---+---+---
 O | X | O 
---+---+---
 X |   |  
```

Marcaria uma vitória para o X. Os jogadores devem escolher seu símbolo no início da partida e logo depois que iniciar o jogo escolher a posição onde vão colocar seus símbolos.  O jogador elegerá um número de 1 a 9 de acordo com as posições mostradas pelo prompt. Ao final do jogo, é mostrado na tela qual jogador foi o vencedor, ou se aconteceu um empate.

Para compilar o projeto é necessário o compilador gcc, utilizando o comando g++ (para c++). O comando deverá ser assim:

g++ tictactoe.cpp -o velha

Para executar utilize o ./ como qualquer executável

./velha