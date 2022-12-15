15/12/22
# Variable
Variabel adalah penanda identitas yang digunakan untuk menampung suatu nilai.

Secara teknis, variabel merujuk ke sebuah alamat di memory komputer (RAM). Ketika kita membuat sebuah variabel, satu ‘slot’ memory akan disiapkan untuk menampung nilai tersebut. Setiap variabel memiliki nama yang dipakai sebagai identitas variabel.

## Aturan Penamaan Variabel dalam Bahasa C++
- Variabel bisa terdiri dari huruf, angka dan karakter underscore / garis bawah ( _ ).
- Karakter pertama dari variabel hanya boleh berupa huruf dan underscore ( _ ), tidak bisa berupa angka. Meskipun dibolehkan, sebaiknya tidak menggunakan karakter underscore sebagai awal dari variabel karena bisa bentrok dengan beberapa variabel settingan program.
- Variabel harus selain dari keyword. Sebagai contoh, kita tidak bisa memakai kata int sebagai nama variabel, karena int merupakan keyword untuk menandakan tipe data integer.
- Beberapa compiler bahasa C++ ada yang membatasi panjang variabel maksimal 31 karakter. Agar lebih aman, sebaiknya tidak menulis nama variabel yang lebih dari 31 karakter.

## Cara Penulisan Variabel
Untuk menulis variabel, dalam hampir semua bahasa pemrograman terdapat 2 langkah: deklarasi dan inisialisasi.

Deklarasi adalah proses untuk memberitahu compiler C++ bahwa kita akan membuat sebuah variabel. Bahasa C++ termasuk bahasa pemrograman yang menggunakan konsep strongly typed programming language, yang artinya untuk setiap variabel harus ditulis akan berisi tipe data apa.
Setelah sebuah variabel di deklarasikan, kita bisa menginput atau memberikan nilai awal ke dalam variabel tersebut. Proses pemberian nilai awal ini dikenal dengan istilah inisialisasi.

- Tipe data integer, yakni tipe data angka bulat seperti 1, 5 atau 1000. Tipe data integer ditulis dengan keyword int.
- Tipe data double, yakni tipe data angka pecahan seperti 1.33,  5.90 atau 1000.99. Tipe data double ditulis dengan keyword double.
- Tipe data character, yakni tipe data huruf seperti ‘A’, ‘a’, atau ‘Z’. Tipe data character ditulis dengan keyword char.
- Tipe data string, yakni tipe data untuk menampung kumpulan karakter, seperti “Belajar”, “Duniailkom” atau “Belajar bahasa C++ di Duniailkom”. Tipe data string ditulis dengan keyword string.