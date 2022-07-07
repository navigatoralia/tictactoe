#include <iostream>
#include "classeTeste.cpp"

using namespace std;

int main(int argc, char *argv[])
{
    ClasseTeste* objetoTeste = new ClasseTeste();

    objetoTeste -> metodoCumprimentar();
    objetoTeste -> falaTchau();

    return 0;
}
