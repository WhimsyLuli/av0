/*Contagem de Caracteres em uma String: Crie um programa que leia
 uma string e conte quantos caracteres (incluindo espaços) ela possui.
*/

#include <iostream>
using namespace std;

int main() {


    char c;
    int cont = 0;

    cout << "digite uma frase: " << endl;

    while (cin.get(c)) {
        if (c == '\n')
            break;

        cont++;
    }

     cout << "a frase possui " << cont << " caracteres." << endl;


    return 0;
}