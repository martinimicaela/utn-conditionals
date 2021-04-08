#include <iostream>
using namespace std;
#include <cstdlib>

int main(){
    int numero1, numero2, diferencia;

    cout << "Ingrese un numero: ";
    cin >> numero1;
    cout << "Ingrese otro numero: ";
    cin >> numero2;

    if (numero1>numero2){
        diferencia = numero1 - numero2;
        cout << "La diferencia absoluta entre los dos numeros es " << diferencia;
    }
    else {
        diferencia = numero2 - numero1;
        cout << "La diferencia absoluta entre los dos numeros es " << diferencia;
    }
 system("pause>nul");
 return 0;
}
