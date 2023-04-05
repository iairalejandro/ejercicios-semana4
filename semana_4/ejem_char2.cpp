#include <iostream>

using namespace std;

int main() {

    char n1;
    char n2;

    cout << "Ingrese el primer caracter: ";
    cin >> n1;
    cout << "Ingrese el segundo caracter: ";
    cin >> n2;

    int val1 = static_cast<int>(n1);
    int val2 = static_cast<int>(n2);

    if((val1 <= 48 || val1 >= 57) && (val2 <= 48 || val2 >= 57)) {
        cout << "Uno de los caracteres ingresados NO es un numero" << endl;
    } else {
        cout << "La suma de los caracteres, que si son numeros, es: " << (val1-'9') + (val2-'0')<< endl;
    }
    
    return 0;

}