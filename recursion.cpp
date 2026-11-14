#include <iostream>
#include "recursion.hpp"
using namespace std;

static int readInt(const string& prompt, int minVal, int maxVal){ //Fungsi ngambil input int dari user
    int x;
    while (true){
        cout << prompt;
        if (cin >> x && x >= minVal && x <= maxVal){
            cin.ignore(10000, '\n'); //===> aku ubah dari fungsi clearInput ke cin.ignore
            return x;
        }
        cin.clear(); //===> aku ubah dari fungsi clearInput ke cin.clear dan cin.ignore oke
        cin.ignore(10000, '\n');
        cout << "Input tidak valid (" << minVal << "-" << maxVal << "). Coba lagi\n";
    }
}

int hitungTotalRekursif(const Menu daftar[], int n){
    if (n == 0) return 0;  // Base case
    return daftar[n - 1].harga + hitungTotalRekursif(daftar, n - 1);  // Rekursif untuk menghitung total harga dari array
}

void hitungTotalPilihan(const Menu daftar[], int jumlahData){ //Fungsi buat menu yang udah dipilih
    if (jumlahData == 0){
        cout << "Belum ada data.\n";
        return;
    }

    int n = readInt("Masukkan jumlah menu yang ingin dihitung total harganya: ", 1, jumlahData);
    Menu terpilih[maxData];
    int jumlahTerpilih = 0;  // Counter untuk menu yang terpilih

    while(jumlahTerpilih < n){
        int id = readInt("Masukkan ID menu ke-" + to_string(jumlahTerpilih + 1) + ":", 1, maxData);
        
        int idx = -1;  // Mencari menu bersadarkan ID
        for (int i = 0; i < jumlahData; i++){
            if (daftar[i].id == id){
                idx = i; break;
            }
        }
        if (idx == -1){
            cout << "Menu tidak ditemukan.\n";
            continue;
        }
        terpilih[jumlahTerpilih++] = daftar[idx];  // Menyimpan menu yang dipilih ke listKeranjang
    }

    cout << "\nMenu yang dipilih:\n";
    for (int i = 0; i < n; i++)
        cout << "- " << terpilih[i].nama << " (Rp" << terpilih[i].harga << ")\n";
    cout << "Total Harga: Rp" << hitungTotalRekursif(terpilih, n) << "\n";
}
