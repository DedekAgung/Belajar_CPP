// 07-02-22
#include <iostream>
using namespace std;

int main () {
    // array 1 dimensi
    int angka [10]; // maka terdapat 10 variable angka dengan indeks 0-9
    angka [0] = 1;
    angka [1] = 2;
    
    cout << "Normal" << endl;
    cout << angka [0] + angka [1] << endl;

    int angka1 [10] = {1,2,3,4,5,6,7,8,9,10};
    
    // dengan perulangan
    cout << "Dengan FOR" << endl;
    for (int i = 0; i <= 9; i++) {
        cout << angka1 [i] << endl;
    }

    // array 2 dimensi

    cout << "\n\nArray 2 Dimensi" << endl;

    int angka2 [2] [2] = {{10,20},{30,40}};
    
    for (int i = 0; i <= 1; i++) {
        for (int j = 0; j <= 1; j++) {
            cout << angka2 [i] [j] << endl;
        }
    }

    // array 3 dimensi
    
    cout << "\n\nArray 3 Dimensi" << endl;

    int angka3 [2] [2] [3] = {{{1, 2, 3}, {4, 5, 6}}, {{10, 20, 30}, {40, 50, 60}}};

    for (int i = 0; i <= 1; i++) {
        for (int j = 0; j <= 1; j++) {
            for (int k = 0; k <= 2; k++){
                cout << angka3 [i] [j] [k] << endl;
            }
        }
    } 
    return 0;
}