#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int x;

    srand(time(0));
    
    cout << "Perulangan  WHILE" << endl;
    x = 1 + rand() % 10;

    while(x <= 5) {
        cout << "Ti, Bilangan Acak = " << x << endl;
        x =  rand() % 10;
    }
    cout << "bilangan acak while yang terakhir = " << x << endl;
    cout << endl;

    return 0;
}