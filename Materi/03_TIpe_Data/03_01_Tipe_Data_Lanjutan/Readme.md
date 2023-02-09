12-01-23
# TIPE DATA LANJUTAN

## Array 
Tipe data array adalah tipe data yang terdiri dari kumpulan tipe data lain.  Array juga dikenal dengan istilah larik.   
Array hanya bisa untuk 1 tipe data saja. misalkan terdiri dari kumpulan angka bulat saja (integer), kumpulan karakter saja (char), maupun kumpulan angka pecahan saja (double). Di dalam bahasa C++, kita tidak bisa membuat 1 array dengan berbagai tipe data (harus 1 jenis saja).    

Format : 
[tipe_data nama_variabel][jumlah_element]   
Element adalah sebutan untuk isi atau anggota sebuah array. 
nomor urut atau index array dimulai dari 0, bukan 1.        
Jadi jika ingin mengakses array pertama maka kita akan menggunakan index-0 dan seterusny.   
untuk membuat array kita bisa melakukan deklarasi di akhir dan diawal   
kita juga bisa tidak mengisi jumlah array [] namun harus melakukan deklarasi di awal jika tidak maka akan error.

Contoh : 
```
int nilai[5];   | int nilai[5] = { 25, 50, 75, 100, 0};
nilai[0] = 25;  |
nilai[1] = 50;  | int nilai[] = { 25, 50, 75, 100, 0};
nilai[2] = 75;  |
nilai[3] = 100; |
nilai[4] = 0;   |
```

## Struct
Tipe data struct hampir sama dengan array, namun bedanya dengan array struct dapat menampung lebih dari 1 jenis tipe data.
Tipe data struct cocok dipakai untuk menampung data berkelompok.
Contoh : data siswa yang meliputi nama, asal, dan umur.
```
struct Siswa {
    string nama;
    string asal;
    int umur;
};

int main () {
    struct Siswa siswa01;

    siswa01.nama = "Agung";
    siswa01.asal = "Polsri";
    siswa01.umur = "18";

    cout << siswa01.nama << " Di kampus" << siswa01.asal << " dan berumur "<< siswa01.umur;

    return 0;
}
```
Tipe data struct ditulis sebelum main (). Setelah keyword struct, lalu buat nama untuk tipe datanya. struct terdiri dari berbagai variabel yang ditulis di dalam kurung kurawal, setiap variabel tetap ditulis tipe data aslinya.
untuk menggunakannya kita harus panggil structnya lalu buat nama setelahnya.
contoh : struct Siswa siswa01; 
lalu kita dapat mengisi datanya.

## Enum
Tipe data enum atau tipe data enumerated adalah tipe data khusus yang isinya bisa kita tentukan sendiri. contoh : tipe enum nama_hari yang hanya bisa di isi nama-nama hari seperti senin, selasa, rabu, dst. Sama seperti tipe data struct, tipe data enum adalah tipe data bentukan. Kita harus buat dulu seperti apa isi komponen dari enum, baru kemudian diakses dari function main(). format enum : 
```
enum nama_Hari {minggu, senin, selasa, rabu, kamis, jumat, sabtu};

int main () {
    nama_Hari var1;
    var = minggu; // 0
    cout << minggu << endl; // 0
}
```
Ciri khas dari tipe data enum adalah, kita tidak bisa menginput nilai selain yang sudah didaftarkan.
Secara bawaan tipe data enum berisi nilai angka yang menunjukkan nomor index dari nilai tersebut. Kita juga bisa mengganti nilai ini dengan angka lain.
```
enum nama_hari {
    minggu = 0,
    senin  = 10,
    selasa = 20,
    rabu   = 30,
    kamis  = 40,
    jumat  = 50,
    sabtu  = 60
}; 
```

## Pointer
Sub-materi Pointer yaitu
### Reference 
Sub-materi Sebelum masuk ke pointer. Jadi variabel adalah ‘nama alias’ dari sebuah alamat di memory. Pada saat kita membuat variabel var1, compiler C++ akan ‘membooking’ satu alamat di memory komputer untuk menyimpan data yang akan diinput ke dalam variabel tersebut. Lalu ketika dibuat var2, maka akan di booking satu alamat memory lain, dst. Secara internal, var1 dan var2 berada di lokasi memory yang berbeda. Namun dengan menggunakan reference, kita bisa menginstruksikan compiler C++ agar sebuah variabel terhubung ke alamat memory milik variabel lain. 
```
#include <iostream>
 
using namespace std;
 
int main()
{
  string var1 = "Belajar C++ di Duniailkom";
  string &var2 = var1;
 
  cout << var1 << endl;
  cout << var2 << endl;
 
  return 0;
}
```
Tambahan tanda ‘&‘ di awal penulisan var2 (baris 8). Inilah cara membuat reference di dalam C++. Perintah string &var2 = var1 artinya, alamat memory yang dirujuk oleh var2 akan sama dengan milik var1. Atau dengan kata lain, var1 dan var2 merujuk ke alamat memory yang sama. Inilah alasan kenapa ketika ditampilkan, var2 juga berisi string “Belajar C++ di Duniailkom”, padahal kita tidak menginput teks ini secara langsung ke dalam var2. jadi jika kita mengubah isi var2 maka var1 pun akan berubah karena pada dasarnya baik var1 dan var2 merujuk ke ‘laci’ yang sama di memory komputer.

Agar lebih jelas, kita dapat menampilkan alamat memori dengan menambah tanda  ‘ampersand‘ atau tanda & ketika menampilkan variabel dengan perintah cout. contoh awalnya jika kita membuat 3 variabel saat kita cout dan tambahkan & [cout << &var1 << endl; dst] maka akan muncul alamat memori tersebut, sebagai contoh 
```
0x61fe1c
0x61fe18
0x61fe14
```
namun dengan menggunakan reference maka hasil dari var1, dst akan memiliki alamat memori yang sama.

### POINTER
Pointer adalah sebuah variabel yang menyimpan alamat memory. Dalam bahasa pemrograman C++, pointer dibuat menggunakan tanda bintang *. 
contoh :
```
int main()
{
  string var1 = "Belajar C++ di Duniailkom";
  string* var2 = &var1;
 
  cout << var1 << endl;
  cout << var2 << endl;
 
  return 0;
}
```
dengan perintah string* var2 = &var1. Ini akan menginput alamat memory milik var1 ke dalam var2. Ketika di cout, yang tampil adalah angka alamat memory tadi. Pembuatan tipe data pointer ini bisa dilakukan dengan 3 cara berikut:
```
string* var1;
string *var1;
string * var1;
```
Dari ketiga cara ini, yang banyak dipakai adalah perintah pertama, yakni string* var1.
Tipe data pointer harus di set dengan tipe data yang sama dengan tipe data asal. Maksudnya jika kita ingin menyimpan alamat memory dari sebuah variabel bertipe float, maka tipe data pointernya juga harus float.

### Deference
Deference adalah cara menampilkan nilai dari alamat memory yang tersimpan di dalam sebuah pointer.
Untuk menampilkan nilai yang tersimpan di dalamnya, bisa menggunakan operator * pada saat di cout.
contoh cout << *var2 akan menampilkan nilai yang tersimpan di dalam alamat pointer var2.





