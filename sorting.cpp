#include <iostream>
#include "sorting.hpp"
using namespace std;

void sortByHarga(Menu daftar[], int jumlahData, bool ascending) {
        int n = jumlahData;
        for (int i = 0; i < n-1; i++) {
                for (int j = 0; j < n-i-1; j++) {
                        if (ascending) {
                                if (daftar[j].harga > daftar[j+1].harga) {
                                        Menu temp = daftar[j];
                                        daftar[j] = daftar[j+1];
                                        daftar[j+1] = temp;
                                }
                        } else {
                                if (daftar[j].harga < daftar[j+1].harga) {
                                        Menu temp = daftar[j];
                                        daftar[j] = daftar[j+1];
                                        daftar[j+1] = temp;
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
                                        Menu temp = daftar[j];
                                        daftar[j] = daftar[j+1];
                                        daftar[j+1] = temp;
                                }
                        } else {
                                if (daftar[j].rating < daftar[j+1].rating) {
                                        Menu temp = daftar[j];
                                        daftar[j] = daftar[j+1];
                                        daftar[j+1] = temp;
                                }
                        }
                }
        }
}