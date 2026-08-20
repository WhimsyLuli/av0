/*Soma de Números em um Array: Faça um programa que leia 5 números inteiros, 
armazene-os em um array e calcule a soma total desses números.
*/

#include <iostream>
using namespace std;

int main() {

    int n, a[5], soma = 0;

    cout << "Digite 5 numeros inteiros: " << endl;

    for (int i = 0; i < 5; i++) {
        cin >> a[i];
        soma += a[i];
    }

    cout << "a soma total eh: " << soma << endl;

    return 0;
}