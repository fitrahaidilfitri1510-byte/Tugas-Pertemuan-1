#include <stdio.h>

int main(void) {
    printf("Latihan Mandiri\n");
    printf("Topik: Pengantar Pemrograman C\n");
    printf("Semoga lancar!\n");
    printf("Sampai jumpa\n");
    return 0;
}

/*
================================================================================
DAFTAR KESALAHAN DAN CARA MEMPERBAIKINYA:
================================================================================
1. Kurang titik koma (;) pada baris kedua printf.
   - Kesalahan : printf("Topik: Pengantar Pemrograman C\n")
   - Perbaikan : Menambahkan titik koma (;) di akhir baris:
                 printf("Topik: Pengantar Pemrograman C\n");

2. Penulisan fungsi printf menggunakan huruf kapital (PRINTF).
   - Kesalahan : PRINTF("Semoga lancar!\n");
   - Perbaikan : Bahasa C bersifat case-sensitive, ubah menjadi huruf kecil:
                 printf("Semoga lancar!\n");

3. Penggunaan tanda petik tunggal (') untuk string pada baris keempat printf.
   - Kesalahan : printf('Sampai jumpa\n');
   - Perbaikan : Tanda petik tunggal (') digunakan untuk karakter tunggal (char).
                 Untuk teks/string harus memakai tanda petik ganda ("):
                 printf("Sampai jumpa\n");

4. Karakter escape backslash (\) yang salah/terbalik menjadi forward slash (/) pada 'C\n'.
   - Kesalahan : printf("Topik: Pengantar Pemrograman C/n");  (atau tidak ada \)
                 *Catatan: Pada gambar tertulis "C\n", namun jika dianggap slash biasa 
                 atau kesalahan escape character pada string, digunakan \n yang benar.
   - Perbaikan : Memastikan menggunakan karakter newline '\n' dengan backslash.
================================================================================
*/