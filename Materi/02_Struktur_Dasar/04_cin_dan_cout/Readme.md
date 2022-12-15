16/12/22
# cout 
cout dipakai untuk menampilkan teks ke layar, yakni salah satu bentuk output. Perintah cout sendiri merupakan singkatan dari console out. cout berasal dari library iostream. dengan format : 
```
cout << "halo";
cout << namavariabel;
```

# escape character
escape character, yakni kode khusus untuk mewakili karakter yang tidak bisa ditulis. 
Daftar escape character di dalam C++ : 
| Escape Char | Character |
| ----------- | --------- |
| \b          | Backspace |
| \f          | Form Feed |
| \n          | Newline   |
| \r          | Return    |
| \t          | Horizontal tab|
| \v          | Vertical tab|
| \\          | \          |
| \'          | '          |
| \"          | "          |
| \?          | ?          |
| \0          | NULL       |

# endl
endl singkatan dari end of line. perintah endl adalah salah satu manipulator dalam bahasa C++, yakni perintah bantu untuk mengontrol input / output stream. Cara penggunaannya harus ditulis setelah tanda << milik cout.
# cin 
Perintah cin adalah perintah dasar C++ untuk proses input atau menerima data masukan dari user.

Dengan menggunakan perintah cin (di eja sebagai “see-in”), kita bisa membuat program yang lebih interaktif, yakni meminta data dari user / pengguna. Data ini bisa disimpan ke dalam variabel dan diolah lebih lanjut untuk kemudian ditampilkan kembali. Kata cin sendiri merupakan singkatan dari console in.
Format dasar perintah cin : 
```
cin >> namavariabel;
```
cin menggunakan kurung siku kanan dua kali (>>) lalu baru namavariabel.
Namun perintah cin tidak dapat menginput spasi.

# getline()
getline berfungsi untuk memproses nilai inputan yang mengandung spasi. dengan format 
```
getline(cin,namavariabel);
```

