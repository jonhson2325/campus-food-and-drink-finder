#pragma once

#include <string>
using namespace std;

const int maxData = 100;

struct Menu {
    int id;
    string nama;
    string kategori; // Meal, Snack, Drink, Coffee, Other
    int harga;
    double rating;   // 1.0 - 5.0
};
