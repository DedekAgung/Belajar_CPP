// 16-12-22
#include <iostream>
#include <iomanip> // karena kita menggunakan fungsi setprecision dan fixed.
using namespace std;

int main () {
    { // TIPE DATA CHAR
        cout << "========================================\n\n";
        cout << "Tipe Data Char" << endl;
        char char3 = 'A';
        cout << "Char = " << char3 << endl;
    }
    { // TIPE DATA INTEGER
        cout << "========================================\n\n";
        cout << "SELURUH JENIS TIPE DATA INTEGER\n" << endl;
        char char1 = 65, char2 = 'A'; // Tipe data char yang memiliki isi 65 dan 'A'. akan memiliki output yang berbeda sesuai menggunakan fungsi apa saat mengelaurkan nya.
        short nilai1 = 32767; 
        int nilai2 = 2147483647;
        long nilai3 = 2147483647;
        cout << "Tipe data char 65 dengan fungsi cout   = " << char1 << endl;
        printf ("Tipe data char 65 dengan fungsi printf = %d\n", char1); 
        cout << "Tipe data char 'Z' dengan fungsi cout   = " << char2 << endl;
        printf ("Tipe data char 'Z' dengan fungsi printf   = %d\n\n", char2);

        cout << "Short Integer = " << nilai1 << endl;
        cout << "Integer = " << nilai2 << endl;
        cout << "Long Integer = " << nilai3 << endl << endl;

        unsigned char nilai_1 = 'A';
        unsigned short nilai_2 = 65535;
        unsigned int nilai_3 = 4294967295;
        unsigned long nilai_4 = 4294967295;

        printf ("Unsigned char printf = %d\n", nilai_1);
        cout << "Unsigned char = " << nilai_1 << endl;
        cout << "Unsigned short = " << nilai_2 << endl;
        cout << "Unsigned integer = " << nilai_3 << endl;
        cout << "Unsigned long integer = " << nilai_4 << endl;
    }
    { // TIPE DATA FLOAT DAN DOUBLE
        
        cout << "========================================\n\n";

        cout << "Tipe Data Float dan Double" << endl;
        cout << "Float dan Double dengan notasi normal" << endl;
        float float1 = 3.122;
        double double1 = 0.012;

        cout << "Float 1 normal = " << float1 << endl;
        cout << "Double 1 normal= " << double1 << endl;
        
        cout << "\nFloat dan Double dengan notasi ilmiah" << endl;
        float float2 = 9.11e22;
        double double2 = 0.12e-2;

        cout << "Float 2 Ilmiah = " << float2 << endl;
        cout << "Double 2 Ilmiah= " << double2 << endl;

        cout << "\nFloat dan Double dengan modifier" << endl;
        
        float float3 = 3.1415926;
        double double3 = 0.00123456789;
        // cout << fixed; // agar cout setelah ini pasti akan fix menggunakan 2 desimal setelah koma
        // cout << setprecision(10); // bisa juga menggunakan 

        cout << "Float3 = " << float3 << endl;
        cout << "Double3= " << double3 << endl;
    }
    { // TIPE DATA BOOLEAN
        cout << "========================================\n\n";

        cout << "TIPE DATA BOOLEAN" << endl;
        bool bol1 = true;
        bool bol2 = false;
        
        cout << "Boolean dengan isi true dan false" << endl;

        cout << "True = " <<  bol1 << endl;
        cout << "False= " << bol2 << endl;

        cout << "\nBoolean dengan isi perbandingan" << endl;
        bool bol3 = 9 < 10;
        bool bol4 = 'A' == 'a';

        cout << "Apakah (12 < 10)? " << bol3 << endl;
        cout << "Apakah ('A' == 'a')? " << bol4 << endl;
    }
    { // Tipe data String
        cout << "========================================\n\n";

        cout << "TIPE DATA STRING\n" << endl;
        string nama1 = "Agung";
        string nama2 = "Ade";
        string gabung = nama1 + nama2;

        cout << "String yang digabung menggunakan + = " << gabung << endl;
        cout << "Panjang string nama1 mengunakan .size() = " <<  nama1.size() << endl;
        cout << "Panjang string nama2 menggunakan .length() = " << nama2.length() << endl; 

        cout << "\nisis String juga bisa ditampil 1 per satu menggunakan array : " << endl;
        cout << nama2[0] << nama2[1] << nama2[2] << endl;
    }
    return 0;  
}