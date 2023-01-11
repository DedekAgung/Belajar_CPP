16-12-22
# TIPE DATA
“Tipe data atau kadang disingkat dengan ‘tipe’ saja adalah sebuah pengelompokan data untuk memberitahu compiler atau interpreter bagaimana programmer ingin mengolah data tersebut”     
Jadi tipe data adalah cara kita memberitahu komputer untuk mengelompokkan data berdasarkan apa yang dipahami oleh komputer.         
Bahasa pemrograman C++ termasuk kelompok strongly typed programming language, yang artinya untuk setiap variabel harus ditulis akan berisi tipe data apa. Apakah itu angka bulat (integer), angka pecahan (float), huruf (char), atau yang lain.

## Jenis-Jenis Tipe Data
Terdapat 2 Jenis tipe data dalam bahasa C++, yaitu Tipe data sederhana (Primitive data types) dan tipe data kompleks (Non-primitive data types).

### Primitive data type
- Integer, Tipe data untuk angka bulat seperti 5, 7, atau 48.
- Float/Double, Tipe data untuk angka pecahan seperti 3.14, 5.55, atau 0.00024.
- Boolean: Tipe data yang berisi nilai true atau false.
- Char, Tipe data untuk 1 karakter, seperti ‘a’, ‘Z’ atau ‘%’.
- Void, Tipe data khusus yang menyatakan tidak ada data.

### Non-primitive data type
- String, Tipe data untuk kumpulan karakter, seperti “Agung”, "Halo Dunia".
- Array, Tipe data untuk kumpulan tipe data lain yang sejenis.
- Structure (struct), Tipe data yang terdiri dari kumpulan tipe data dasar. Tipe data tersebut bisa lebih dari 1 jenis.
- Enum, Tipe data bentukan yang dibuat sendiri oleh kita (programmer).
- Pointer, Tipe data untuk mengakses alamat memory secara langsung.

## Char
Char hanya menampung 1 karakter,Variabel yang didefinisikan untuk menampung tipe data char butuh 1 byte memory. 
char ini dikodekan dari charset ASCII. Format : 
```
char = 'a';
```

## Integer 
Tipe data integer adalah tipe data yang dipakai untuk menampung angka bulat positif maupun negatif.             
Terdapat 4 tipe data integer yang dibedakan berdasarkan jangkauan angka yang bisa ditampung.
| Jenis |  byte  |      Jangkauan  |
|-------|--------|-----------------|
| char  | 1 byte | -128 hingga 127 |
| short | 2 bytes| -32,768 hingga 32,767|
| int   | 2 bytes| -32,768 hingga 32,767|
| int   | 4 bytes| -2,147,483,648 hingga 2,147,483,647|
| long  | 4 bytes| -2,147,483,648 hingga 2,147,483,647|

Secara internal, char sebenarnya bertipe integer. Untuk membedakan apakah char ini berisi karakter atau huruf dilakukan pada saat menampilkannya.       
Ukuran Memory Penyimpanan (bytes) adalah jumlah memory yang dibutuhkan untuk menyimpan angka tersebut. Semakin besar jangkauan, semakin banyak juga ruang memory yang dibutuhkan.   
Khusus untuk tipe data int, bisa terdiri dari 2 byte maupun 4 byte. Ini tergantung sistem komputer dan compiler bahasa C++ yang dipakai.

Tipe data diatas adalah tipe data bertanda (signed),artinya setiap tipe data bisa menampung angka positif dan negatif.kita bisa menghilangkan nilai negatif untuk memperbesar jangkauan angka positif dengan menambah keyword unsigned (tak bertanda).
tipe data unsigned akan membuat jangkauan nilai positif menjadi 2 kali lipat. 

| Jenis          |  byte  |      Jangkauan  |
|----------------|--------|-----------------|
| unsigned char  | 1 byte | 0 hingga 255 |
| unsigned short | 2 bytes| 0 hingga 65,535|
| unsigned int   | 2 bytes| 0 hingga 65,535|
| unsigned int   | 4 bytes| 0 hingga 4,294,967,295|
| unsigned long  | 4 bytes| 0 hingga 4,294,967,295|
Jangkauan nilai lebih besar namun tidak bisa menampuing angka negatif.

Jika menggunakan fungsi cout dengan tipe data char, jika isi char tersebut tidak menggunakan ' ' maka yang tampil adalah karakter sesuai ASCII. contoh :
```
test = 65; 
cout << test; 
```
maka yang tampil di output adalah karakter A. karena sesuai table ASCII.        
jika kita menggunakan fungsi printf, dan menggunakan ' ' maka yang muncul di output adalah angka 65. artinya char akan menjadi variabel int bukan karakter. sedangkan jika kita tidak menggunakan ' ' maka akan muncul nomor untuk karakter tersebut berdasarkan table ASCII.

## Float dan Double
Tipe data float dan double adalah tipe data angka pecahan.      
Perbedaan antara float dan double terletak dari jangkauan angka serta tingkat ketelitian. 
|Jenis | Byte | Jangkauan |
|------|------|-----------|
|Float |4 byte(32-bit)|3.4*10-38 hingga 3.4 * 1038|
|double|8 byte(64-bit)|1.7 * 10-308 hingga 1.7 * 10308|

Terdapat 1 lagi yakni long double dengan jangkauan yang lebih besar dari double. Namun tidak semua compiler bahasa C++ mendukung tipe data ini.

Penulisan angka pada float dan double bisa menggunakan notasi ilmiah. seperti 3.12e2 atau 4E-3. Tanda e atau E mewakili pangkat 10, sehingga 3.12e2 = 3.12 x 102 = 312. Sedangkan 4E-3 = 4 x 10-3 = 0.004.

max 6 digit angka yg keluar namun bisa menggunakan setprecision agar keluar lebih dari 6

Ketelitian float adalah 6 dan double 15

## Boolean
Tipe data boolean adalah tipe data yang hanya bisa diisi salah satu dari 2 nilai: true atau false. Tipe data boolean banyak dipakai untuk percabangan kode program atau untuk memutuskan apa yang mesti dijalankan ketika sebuah kondisi terjadi.

keyword untuk tipe datanya adalah bool.

0 adalah false.
1 adalah true.

## String
String adalah tipe data yang menampung kata/kalimat yang harus berada di dalam tanda kutip dua ("contoh").
inisialiasi menggunakan keyword string.

Kita bisa menambahkan 2 variable bertipe string secara langsung dengan +.
untuk melihat panjang string kita bisa menggunakan method [namavariable].length(); atau [namavariable].size();