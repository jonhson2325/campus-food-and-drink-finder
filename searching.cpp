#include <iostream>
#include "searching.hpp"
using namespace std;

void searchByID(const Menu daftar[], int jumlahData, int targetID){
    for ( int i = 0; i < jumlahData; i++ ) {
        if ( daftar[i].id == targetID ) {
            cout << "Menu ditemukan: " << endl;
            cout << "ID: " << daftar[i].id << endl;
            cout << "Nama: " << daftar[i].nama << endl;
            cout << "Kategori: " << daftar[i].kategori << endl;
            cout << "Harga: " << daftar[i].harga << endl;
            cout << "Rating: " << daftar[i].rating << endl;
            return;
        }
    }
    cout << "Menu tidak ditemukan." << endl;
}

void searchByNama(const Menu daftar[], int jumlahData, string keyword){
    bool found = false;
    for ( int i = 0; i < jumlahData; i++ ) {
        if ( daftar[i].nama.find(keyword) != string::npos ) {
            if (!found) {
                cout << "Menu ditemukan: " << endl;
            }
            cout << "ID: " << daftar[i].id << endl;
            cout << "Nama: " << daftar[i].nama << endl;
            cout << "Kategori: " << daftar[i].kategori << endl;
            cout << "Harga: " << daftar[i].harga << endl;
            cout << "Rating: " << daftar[i].rating << endl;
            found = true;
        }
    }
    if (!found) {
        cout << "Menu tidak ditemukan." << endl;
    }
}

void searchByKategori(const Menu daftar[], int jumlahData, string kategori){
    bool found = false;
    for (int i = 0; i < jumlahData; i++) {
        if (daftar[i].kategori == kategori) {
            if (!found) {
                cout << "Menu ditemukan: " << endl;
            }
            cout << "ID: " << daftar[i].id << endl;
            cout << "Nama: " << daftar[i].nama << endl;
            cout << "Kategori: " << daftar[i].kategori << endl;
            cout << "Harga: " << daftar[i].harga << endl;
            cout << "Rating: " << daftar[i].rating << endl;
            found = true;
        }
    }
    if (!found) {
        cout << "Menu tidak ditemukan." << endl;
    }
}

void filterByBudget(const Menu daftar[], int jumlahData, int maxBudget){
    bool found = false;
    for ( int i = 0; i < jumlahData; i++ ) {
        if ( daftar[i].harga <= maxBudget ) {
            if (!found) {
                cout << "Menu ditemukan: " << endl;
            }
            cout << "ID: " << daftar[i].id << endl;
            cout << "Nama: " << daftar[i].nama << endl;
            cout << "Kategori: " << daftar[i].kategori << endl;
            cout << "Harga: " << daftar[i].harga << endl;
            cout << "Rating: " << daftar[i].rating << endl;
            found = true;
        }
    }
    if (!found) {
        cout << "Tidak ada menu yang sesuai dengan budget yang ditentukan." << endl;
    }
}