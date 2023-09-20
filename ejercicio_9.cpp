#include <iostream>
using namespace std;
int main() {
    int a, b, c;

    for (a = 1; a < 1000; a++) {
        for (b = a + 1; b < 1000; b++) {
            c = 1000 - a - b;
            if (a * a + b * b == c * c) {
                int producto = a * b * c;
                cout << "El triplete pitagorico es: a=" << a << ", b=" << b << ", c=" << c <<endl;
                cout << "El producto abc es: " << producto <<endl;
                return 0;
            }
        }
    }

    cout << "No se encontro ningun triplete pitagorico con a + b + c = 1000." <<endl;

    return 0;
}
