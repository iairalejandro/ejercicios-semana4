#include <iostream>

using namespace std;

int main() {

    string cad;

    cout <<"Ingrese los digitos a sumar: ";
    cin >> cad;

    string val = static_cast<string>(cad);

    int sum = 0;

    for(int i = 0; i < cad.length(); i++) {
        sum += (cad.at(i) - '0');
    }
    cout << "La suma es: " << sum << endl;
    return 0;

}