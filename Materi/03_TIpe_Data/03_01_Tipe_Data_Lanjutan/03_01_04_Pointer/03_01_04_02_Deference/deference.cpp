// 10-02-23
#include <iostream>
using namespace std;

int main () {
    string nama = "Agung";
    // Deklarasi Pointer dari sebuah Reference
    string* namaP = &nama;

    cout << nama << endl;
    // Pointer 
    cout << namaP << endl;
    // Deference (*)
    cout << *namaP << endl;

    return 0;
}