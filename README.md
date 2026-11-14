# Campus Food & Drink Finder (Kelompok 2 - KOM A)

Program berbasis console C++ untuk membantu mahasiswa mencari, memfilter, dan menganalisis pilihan makanan/minuman di sekitar kampus berdasarkan harga, kategori, rating, dan budget.

> **Catatan Penting:** File `test.cpp` hanya digunakan untuk pengujian lokal terpisah. Jangan masukkan fungsi `int main()` tambahan saat menggabungkan ke program utama.

---

## Panduan Setup Awal (Wajib Dilakukan Sekali)

### 1. Pastikan Git & Compiler C++ (`g++`) Terpasang
* **Windows:** Install [Git for Windows](https://git-scm.com/downloads) dan MinGW (`g++`). Cek di Command Prompt / Terminal VS Code dengan mengetik:
  ```bash
  git --version
  g++ --version
  ```
* **macOS:** Buka Terminal dan jalankan `xcode-select --install`.

### 2. Atur Identitas Git di Laptop Masing-Masing
Jalankan perintah ini di Terminal (ganti dengan nama dan email akun GitHub kalian):
```bash
git config --global user.name "Nama Lengkap Kamu"
git config --global user.email "email_github_kamu@gmail.com"
```

### 3. Download Proyek dari GitHub (`Clone`)
Buka Terminal di folder tempat kalian biasa menyimpan tugas kuliah, lalu jalankan:
```bash
git clone [https://github.com/ardhan-s/campus-food-and-drink-finder.git](https://github.com/ardhan-s/campus-food-and-drink-finder.git)
cd campus-food-and-drink-finder
```

---

## Cara Compile & Menjalankan Program di Laptop Lokal

Jangan hanya menekan tombol *Run* bawaan editor karena program ini terdiri dari banyak file `.cpp`. Buka Terminal di VS Code (`Ctrl + ~`), lalu ketik:

### Untuk Pengguna macOS / Linux:
```bash
g++ -std=c++17 main.cpp menu.cpp recursion.cpp searching.cpp sorting.cpp -o program
./program
```

### Untuk Pengguna Windows:
```bash
g++ -std=c++17 main.cpp menu.cpp recursion.cpp searching.cpp sorting.cpp -o program.exe
program.exe
```

---

## Alur Kerja Harian di GitHub (Wajib Diikuti!)

Agar kode tidak saling menimpa, **dilarang keras melakukan `git push` langsung ke branch `main`**. Ikuti langkah ini setiap kali mau mulai *ngoding*:

### Langkah 1: Tarik Update Terbaru dari `main`
Sebelum mulai menulis kode, pastikan laptopmu sudah memiliki versi kode terbaru dari teman satu tim:
```bash
git checkout main
git pull origin main
```

### Langkah 2: Pindah / Buat Branch Khusus Fitur Kamu
Buat *branch* baru sesuai bagianmu (contoh: `fitur-sorting`, `fitur-searching`, `fitur-menu`, `fitur-recursion`):
```bash
git checkout -b fitur-nama-bagianmu
```
*(Jika branch sudah pernah dibuat sebelumnya, cukup ketik `git checkout fitur-nama-bagianmu`).*

### Langkah 3: Kerjakan Kode & Tes Compile
1. Buka file `.cpp` (dan `.hpp` jika perlu) yang menjadi tanggung jawabmu.
2. Tulis kodenya, pastikan tidak mengubah `struct Menu` di `struct.hpp` tanpa kesepakatan grup.
3. **Wajib compile dan jalankan program** di terminal untuk memastikan tidak ada error sebelum di-upload.

### Langkah 4: Simpan & Upload ke GitHub (`Add`, `Commit`, `Push`)
Jika kode sudah aman dan berjalan lancar:
```bash
git add .
git commit -m "Menambahkan fitur [sebutkan fitur yang dikerjakan]"
git push origin fitur-nama-bagianmu
```

### Langkah 5: Buat Pull Request (PR) di Browser
1. Buka halaman repository GitHub kelompok (`https://github.com/ardhan-s/campus-food-and-drink-finder`) di browser.
2. Klik tombol hijau **Compare & pull request** yang muncul di bagian atas.
3. Tulis keterangan singkat fitur yang sudah selesai, lalu klik **Create pull request**.
4. Beri tahu di grup chat kelompok agar Coordinator mereview dan melakukan **Merge pull request** ke `main`.

---

## Aturan Penulisan Kode & Ketentuan Tugas
1. **Struktur Data:** Menggunakan `struct Menu` dari `struct.hpp` dengan kapasitas maksimal `MAX_DATA = 100`.
2. **Dilarang Memakai STL:** Implementasi *sorting* (`sortByHarga`, `sortByRating`) dan *searching* (`searchByID`, `searchByNama`, `searchByKategori`) wajib ditulis manual menggunakan *looping* dan percabangan (tidak boleh memakai `std::sort` atau `std::find`).
3. **Dokumentasi Test Case:** Setiap anggota diharapkan menyiapkan minimal 1–2 skenario uji coba (*input* & *output*, termasuk *edge case* seperti data kosong atau budget kurang) untuk bahan laporan PDF.
4. **GUNAKAN KODE SESIMPLE SIMPLENYA!!!**