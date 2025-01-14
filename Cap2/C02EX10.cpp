#include <iostream>
#include <iomanip>

using namespace std;

int main(void){

    int QUOCIENTE, DIVIDENDO, DIVISOR, RESTO;

    cout << "Entre o valor do dividendo...: ";
    cin >> DIVIDENDO;
    cin.ignore(80, '\n');

    cout << "Entre o valor do divisor...: ";
    cin >> DIVISOR;
    cin.ignore(80, '\n');

    QUOCIENTE = DIVIDENDO / DIVISOR;
    RESTO = DIVIDENDO % DIVISOR;

    cout << endl;
    cout << "QUOCIENTE = " << setw(8) << QUOCIENTE << endl;
    cout << "RESTO = " << setw(8) << RESTO << endl;

    return 0;
}
