#include <iostream>

using namespace std;

int main(void){

    int X, Y;

    X = 10; Y = ++X;
    cout << "\nX = " << X << " | Y = " << Y << endl;

    X = 10; Y = X++;

    cout << "\nX = " << X << " | Y = " << Y << endl;

    cout << endl;

    return 0;
}
