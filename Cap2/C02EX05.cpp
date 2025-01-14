#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(void){

    char NOME[40], SOBRENOME[20];

    cout << "Informe seu nome...: ";
    cin.getline(NOME, sizeof(NOME));

    cout << "Informe sobrenome...: ";
    cin >> SOBRENOME;
    cin.ignore(80, '\n');

    cout << "Ola, " << NOME << " " << SOBRENOME << endl;

    cout << "Tecle <Enter> para encerrar... ";

    return 0;
}
