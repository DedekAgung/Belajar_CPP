// 10-02-23
#include <iostream>
using namespace std;

int main () {
    string nama = "Agung";
    string* namaP = &nama;

    cout << nama << endl;
    cout << namaP << endl;

    return 0;
}