// 08-02-2023
#include <iostream>
using namespace std;

struct Mahasiswa {
    string nama;
    string kelas;
    float ipk;
};

int main () {
    struct Mahasiswa nim1, nim2;

    nim1.nama = "Agung";
    nim1.kelas = "1IE";
    nim1.ipk = 4.00;

    nim2.nama = "Ade";
    nim2.kelas = "1IE";
    nim2.ipk = 3.75;

    cout << "BIODATA MAHASISWA NIM1" << endl;
    cout << "Nama : " << nim1.nama << endl;
    cout << "Kelas : " << nim1.kelas << endl;
    cout << "IPK : " << nim1.ipk << endl;

    cout << endl;

    cout << "BIODATA MAHASISWA NIM2" << endl;
    cout << "Nama : " << nim2.nama << endl;
    cout << "Kelas : " << nim2.kelas << endl;
    cout << "IPK : " << nim2.ipk << endl;

    return 0;
}