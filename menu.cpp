#include <iostream>
#include <string>
#include "menu.hpp"
using namespace std;

// Menentukan label harga dengan IF
string getPriceLabel(int harga) {
    if (harga <= 10000) {
        return "Budget";
    } else if (harga <= 20000) {
        return "Medium";
    } else {
        return "Premium";
    }
}

// Menambah satu menu ke array
void addData(Menu daftar[], int &jumlahData) {
    if (jumlahData >= maxData) {
        cout << "Data penuh.\n";
        return;
    }

    string namaKategori[5] = {"Meal", "Snack", "Drink", "Coffee", "Other"};
    Menu m;
    m.id = jumlahData + 1;

    cout << "Nama menu: ";
    cin.ignore();   // buang Enter sisa dari input pilihan menu
    getline(cin, m.nama);

    cout << "Kategori: 1.Meal 2.Snack 3.Drink 4.Coffee 5.Other\n";
    int pilih;
    cout << "Pilih kategori (1-5): ";
    cin >> pilih;
    while (pilih < 1 || pilih > 5) {
        cout << "Harus 1-5. Ulangi: ";
        cin >> pilih;
    }
    m.kategori = namaKategori[pilih - 1];

    cout << "Harga (Rp): ";
    cin >> m.harga;
    while (m.harga < 0) {
        cout << "Harga tidak boleh negatif. Ulangi: ";
        cin >> m.harga;
    }

    cout << "Rating (1.0 - 5.0): ";
    cin >> m.rating;
    while (m.rating < 1.0 || m.rating > 5.0) {
        cout << "Harus 1.0 - 5.0. Ulangi: ";
        cin >> m.rating;
    }

    daftar[jumlahData] = m;
    jumlahData++;
    cout << "Data ditambahkan dengan ID " << m.id << ".\n";
}

// Menampilkan semua menu
void displayData(const Menu daftar[], int jumlahData) {
    if (jumlahData == 0) {
        cout << "Belum ada data.\n";
        return;
    }

    cout << "ID\tNama\t\tKategori\tHarga\tRating\tLabel\n";
    for (int i = 0; i < jumlahData; i++) {
        cout << daftar[i].id << "\t"
             << daftar[i].nama << "\t"
             << daftar[i].kategori << "\t\t"
             << daftar[i].harga << "\t"
             << daftar[i].rating << "\t"
             << getPriceLabel(daftar[i].harga) << "\n";
    }
}

// Menghitung rata-rata harga dan rating, serta menu termurah dan termahal
void calculateSummary(const Menu daftar[], int jumlahData) {
    if (jumlahData == 0) {
        cout << "Belum ada data.\n";
        return;
    }

    double totalHarga = 0;
    double totalRating = 0;
    int idxMurah = 0;
    int idxMahal = 0;

    for (int i = 0; i < jumlahData; i++) {
        totalHarga = totalHarga + daftar[i].harga;
        totalRating = totalRating + daftar[i].rating;
        if (daftar[i].harga < daftar[idxMurah].harga) {
            idxMurah = i;
        }
        if (daftar[i].harga > daftar[idxMahal].harga) {
            idxMahal = i;
        }
    }

    cout << "Jumlah menu      : " << jumlahData << "\n";
    cout << "Rata-rata harga  : Rp" << totalHarga / jumlahData << "\n";
    cout << "Rata-rata rating : " << totalRating / jumlahData << "\n";
    cout << "Termurah         : " << daftar[idxMurah].nama
         << " (Rp" << daftar[idxMurah].harga << ")\n";
    cout << "Termahal         : " << daftar[idxMahal].nama
         << " (Rp" << daftar[idxMahal].harga << ")\n";
}
