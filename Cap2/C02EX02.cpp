#include <iostream>
using namespace std;

int main(void){

    char NOME[40];

    cout << "Informe seu nome: ";
    cin >> NOME;
    cin.ignore(80, '\n');

    cout << "Ola, " << NOME << endl;

    cout << "Pressione <Enter> para encerrar...";

    cin.get();

    return 0;
}
