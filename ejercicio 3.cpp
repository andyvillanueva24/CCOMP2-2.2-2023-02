#include <iostream>
using namespace std;
int main() {
    int n;
    
   
    cout << "Ingrese un numero n: ";
    cin >> n;
    
    int primero = 1;
    int segundo = 1;
    
    cout << "Los primeros " << n << " numeros de la secuencia de Fibonacci son:" <<endl;
    
    if (n >= 1) {
        cout << primero << " ";
    }
    
    if (n >= 2) {
        cout << segundo << " ";
    }
    
    for (int i = 3; i <= n; i++) {
        int siguiente = primero + segundo;
        cout << siguiente << " ";
        primero = segundo;
        segundo = siguiente;
    }
    
    cout << endl;
    
    return 0;
}
