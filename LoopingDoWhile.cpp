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
