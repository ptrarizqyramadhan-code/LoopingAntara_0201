#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int x;

    srand(time(0));
    
    //perulangan dengan DO WHILE ( minimal 1x dikerjakan )
    cout << "Perulangan  DO WHILE" << endl;
    // Nilai awal x = 1
    x = 1 + rand() % 10;

  
    do {
        cout << "Ti, Bilangan Acak = " << x << endl;
        x =  rand() % 10; // pengubah dari nilai x
    } while(x <= 5); // syarat

    cout << "bilangan acak do-while yang terakhir = " << x << endl;
    cout << endl;
    return 0;
}