#include <iostream>

using namespace std;

int main() {

    string cad;
    char car;

    cout <<"Ingrese una palabra: ";
    cin >> cad;

    cout <<"Ingrese el caracter a buscar: ";
    cin >> car;

    int cont = 0;
    for(int i = 0; i < cad.length(); i++) {
        if(car == cad.at(i)) {
            cont++;
        }
    }
    cout << "El caracter " << car << " se repite " << cont << " veces." << endl;

    return 0;

}