// 10-02-23
#include <iostream>
using namespace std;

enum nama_Hari {senin, selasa, rabu, kamis, jumat, sabtu, minggu};
// mengubah ini indeks enum
// enum nama_Hari {senin = 10, selasa = 20, rabu = 30, kamis = 40, jumat = 50, sabtu = 60, minggu = 70};

int main () {
    nama_Hari hari;
    
    hari = senin;
    
    cout << hari << endl;
    return 0;
}