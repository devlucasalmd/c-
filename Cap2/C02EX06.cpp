#include <iostream>
using namespace std;

int main(void){

    int A, B, R;

    cout << "Informe valor para a variavel <A>: ";
    cin >> A;
    cin.ignore(80, '\n');

    cout << "Informe valor para a variavel <B>: ";
    cin >> B;
    cin.ignore(80, '\n');

    R = A + B;

    cout << "Resultado = " << R << endl;
    cout << endl;

    cout << "Tecle <Enter> para encerrar... ";
    cin.get();

    return 0;
}
