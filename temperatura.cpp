/*Conversão de Temperatura: Escreva um programa que converta uma temperatura
 fornecida em graus Celsius para Fahrenheit e vice-versa.*/

 #include <iostream>
 using namespace std;

 int main() {

    cout << "Digite '1' para Celsius -> Fahrenheit ou '0' para Fahrenheit -> Celsius" << endl;
    int n, fah, cel;

    cin >> n; 

    if (n == 1) {
        cout << "digite a temperatura em celsius: " << endl;
        cin >> cel;
        fah = (cel * 1.8) + 32;
        cout << "a temperatura em fahrenheit eh: " << fah << endl;
    }
    else {
        cout << "digite a temperatura em fahrenheit: " << endl;
        cin >> fah;
        cel = (fah - 32) * 5/9;
        cout << "a temperatura em celsius eh: " << cel << endl;
    }


    
    
    
    return 0;
 }