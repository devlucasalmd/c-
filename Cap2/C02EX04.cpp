#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(void){

    char NOME[40];

    cout << "Informe seu nome...: ";
    cin.ignore(80, '\n');

    cout << "Ola, " << NOME <<  endl;

    cout << "Tecle <Enter> para encerrar... ";

    return 0;
}
