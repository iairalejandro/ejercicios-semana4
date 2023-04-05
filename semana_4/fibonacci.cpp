#include <iostream>

using namespace std;

int main() {

    int n;

    cout << "Ingrese el numero: ";
    cin >> n;

    int num1, num2, fib;
    num1 = num2 = 1;
    if ( n==0 || n==1){
        cout << "El fib de " << n << " es " << 1 << endl;
    } else {
        for(int i = 1; i < n; i++) {
            fib = num1 + num2;
            num1 = num2;
            num2 = fib;
        }
        cout << "El fib de " << n << " es " << fib << endl;
    }

    return 0;

}