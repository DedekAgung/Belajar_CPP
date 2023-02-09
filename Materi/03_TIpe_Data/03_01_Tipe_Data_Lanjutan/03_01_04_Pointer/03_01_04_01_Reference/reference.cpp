// 10-02-23
#include <iostream>
using namespace std;

int main () {
    // Normal
    string var1 = "Agung";
    string var2 = "Agung";

    cout << &var1 << endl;
    cout << &var2 << endl;
    cout << endl;

    // Reference
    string varr1 = "Agung";
    string &varr2 = varr1;

    cout << &varr1 << endl;
    cout << &varr2 << endl;
    
    varr2 = "Ade";
    cout << varr1 << endl;

    return 0;
}