/*Cálculo de Fatorial: Crie um programa que calcule 
e imprima o fatorial de um número inteiro fornecido pelo usuário.*/ 

#include <iostream>
using namespace std;

int main() {

    cout << "Digite um numero: " << endl;
    int n, fat = 1;
    cin >> n;

    for (int i = n; i > 0; i--) {
        fat *= i;
    }

    cout << "O fatorial eh: " << fat << endl;


    return 0;
}