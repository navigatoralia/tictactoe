#include <iostream>
#include <QApplication>
#include "jogoDaVelha.h"
#include "GUITabuleiro.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    GUITabuleiro tabuleiro;
    tabuleiro.show();
    return app.exec();
}
