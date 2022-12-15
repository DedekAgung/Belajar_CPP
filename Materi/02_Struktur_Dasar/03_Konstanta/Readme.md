15/12/22
# Konstanta
Konstanta adalah sebuah tempat atau container dari suatu nilai. Sesuai dengan namanya, nilai dari konstanta bersifat tetap (konstan) dan tidak bisa diubah sepanjang program berjalan. Inilah yang menjadi pembeda antara konstanta dengan variabel.

## Cara membuat Konstanta
Pertama dapat kita gunakan perintah #define. perintah ini ditulis sebelum main (). contoh : 
```
#define test "halo"
```
maka akan ada variabel konstanta dengan nama test dan berisi halo.

Kedua dapat menggunakan const, bedanya const dibuat didalam fungsi main() dan harus ditulis tipe data dari konstanta tersebut. contoh :
```
int main() {
    const string TEST = "halo";
}
```

- Mayoritas programmer membuat nama konstanta dalam huruf besar.