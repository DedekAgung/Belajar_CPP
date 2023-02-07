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








