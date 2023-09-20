#include <iostream>
using namespace std;
int main(){
    int x = 4000000;
    int sum = 0;
    int a = 1; 
    int b = 2;

    while (a <= x ){
        if(a % 2 == 0){
            sum += a;
        }

        b= a + b;
        a = b - a;
    }

    cout << "La suma de los terminos pares de la secuencia de fibonacci menores o iguales a 4 millones es:"<< sum<<endl;

    return 0;
}