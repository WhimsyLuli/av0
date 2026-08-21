/*Verificação de Número Primo: Desenvolva um programa que leia um número inteiro
 e determine se ele é um número primo ou não.
*/

#include <iostream> 
#include <cmath>
using namespace std;

int main() {

    cout << "digite um numero: " << endl;

    int n;
    cin >> n;

    bool primo = true;

    if (n < 2) {
        primo = false;
    }
    else {
        for (int i = 2; i <= sqrt(n); i++) {

            if (n % i == 0) {
                primo = false;
                break;
            }
        }
    }

    if (primo) {
        cout << "O numero eh primo." << endl;
    }
    else {
        cout << "O numero nao eh primo." << endl;
    }


    return 0;
}