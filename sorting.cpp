#include <iostream>
#include "sorting.hpp"
using namespace std;

void sortByHarga(Menu daftar[], int jumlahData, bool ascending) {
        int n = jumlahData;
        for (int i = 0; i < n-1; i++) {
                for (int j = 0; j < n-i-1; j++) {
                        if (ascending) {
                                if (daftar[j].harga > daftar[j+1].harga) {
                                        swap(daftar[j], daftar[j+1]);
                                }
                        } else {
                                if (daftar[j].harga < daftar[j+1].harga) {
                                        swap(daftar[j], daftar[j+1]);
                                }
                        }
                }
        }
}

void sortByRating(Menu daftar[], int jumlahData, bool ascending) {
        int n = jumlahData;
        for (int i = 0; i < n-1; i++) {
                for (int j = 0; j < n-i-1; j++) {
                        if (ascending) {
                                if (daftar[j].rating > daftar[j+1].rating) {
                                        swap(daftar[j], daftar[j+1]);
                                }
                        } else {
                                if (daftar[j].rating < daftar[j+1].rating) {
                                        swap(daftar[j], daftar[j+1]);
                                }
                        }
                }
        }
}