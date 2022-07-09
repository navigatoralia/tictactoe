#ifndef GUITABULEIRO_H
#define GUITABULEIRO_H

#include <QMainWindow>
#include <QGridLayout>
#include <QPushButton>


class GUITabuleiro : public QMainWindow
{
    Q_OBJECT

public:
    GUITabuleiro(QWidget *parent = nullptr);
    ~GUITabuleiro();
};

#endif // GUITABULEIRO_H
