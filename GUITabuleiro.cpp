#include "GUITabuleiro.h"

GUITabuleiro::GUITabuleiro(QWidget *parent) : QMainWindow(parent)
{
	//QGridLayout* grid = new QGridLayout();
	//this->setLayout(grid);
	QPushButton* botao1 = new QPushButton("Eu sou um botao");
	QPushButton* botao2 = new QPushButton("AAAAAA");
	QPushButton* botao3 = new QPushButton("porra");
	this->addWidget(botao1,0,0); 
	this->addWidget(botao2,10,10); 
	this->addWidget(botao3,20,20);
	show();
}

GUITabuleiro::~GUITabuleiro()
{
}
