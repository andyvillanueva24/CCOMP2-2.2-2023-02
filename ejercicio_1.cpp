#include <iostream>

using namespace std;

int main(){
    int x = 0;
    for(int i=1; i < 1000; i++){
        if (i% 3 ==0 || i % 5==0) {
            x += i;
        }
    }
    cout<<"La suma de los multiplos de 3 o 5 por debajo de 1000 es:"<< x << endl;

    return 0;
}