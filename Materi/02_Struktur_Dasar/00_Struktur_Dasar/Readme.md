15/12/22
# Struktur Dasar
Struktur Dalam C++.
Contoh  : 

```
#include <iostream>
using namespace std;

int main () {   
    cout << "Hello World" << endl;
    return 0;
}
```

## #include
Terdapat pada baris awal, dan mendefinisikan library (pustaka) apa saja yang akan kita gunakan di dalam program.
Library bisa kita anggap sebagai program lain yang ingin kita gunakan di dalam program kita.
contoh iostream, library ini berisi fungsi cin dan cout.
Terdapat beberapa extension untuk file library dengan keterangan    : 
- .h artinya header file dari C atau C++
- .cpp artinya source code dari C++
- .hpp artinya header file dari C++ 
- .cc dan .c artinya header file dari C.

Jika menggunakan kurung siku <...> maka program akan mencari library ke dalam sistem komputer, dan jika menggunakan tanda petik akan mencari ke lokasi yang ditentukan. contoh : #include "/home/agung/hello.h".

## Namespace
Opsional, bisa ditulis bisa juga tidak.
contoh karena kita ingin menggunakan fungsi pada library iostream, karena untuk menggunakan fungsi cin dan cout kita harus menggunakan std:: pada awal. namun dengan menggunakan using namespace std maka kita tidak perlu menggunakan std:: pada awal fungsi.

## Fungsi (function)
seperti contoh int main() { }. main() adalah fungsi yang akan dieksekusi pertamakali saat program dibuka.
Jika hanya membuat program yang berfungsi sebagai library saja, fungsi main() boleh tidak dibuat.
Perintah “int” sebelum main() menandakan nilai kembalian atau hasil akhir dari function main(). Kode int merupakan singkatan dari integer, yakni tipe data angka bulat.

## Statement dan Ekspresi
Statemen dan ekspresi adalah perintah-perintah yang ditulis di dalam fungsi.
Penulisan statement dan ekspresi wajib diakhiri dengan titik-koma (;).  
contoh 
```    
cout << "Hello World" << endl;
```

## Blok Kode
Blok kode adalah kumpulan dari beberapa statemen yang dibungkus dengan tanda kurung kurawal {...}.

## Komentar
Komentar adalah bagian kode yang akan diabaikan oleh komputer. Ada dua cara penulisan komentar pada C++:

1. Menggunakan garis miring ganda //;
2. dan menggunakan garis miring bintang /**/.

Komentar biasanya digunakan untuk memberikan informasi tambahan pada kode program dan juga menonaktifkan statement maupun blok kode.

## String dan Karakter
karakter hanya 1 dan string adalah kumpulan karakter.       
String dalam program C++ ditulis dengan diapit tanda ptik ganda ("...") dan untuk karakter ditulis dengan tanda petik tunggal ('...').

## return 0;
Perintah return 0; berhubungan dengan kode int main(). Disinilah kita menutup function main() yang sekaligus mengakhiri kode program bahasa C++.

Return 0 artinya kembalikan nilai 0 (nol) ke sistem operasi yang menjalankan kode program ini