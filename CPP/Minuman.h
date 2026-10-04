#ifndef MINUMAN
#define MINUMAN

#include "MenuItem.h"

// =============================================================
// Kelas 3: Minuman (Derived Class 2 - Hierarchical Inheritance)
// =============================================================
class Minuman : public MenuItem {
private:
    string ukuran;
    bool dingin;

public:
    Minuman(string kodeMenu, string nama, int hargaBase, string ukuran, bool dingin)
        : MenuItem(kodeMenu, nama, hargaBase), ukuran(ukuran), dingin(dingin) {}

    string getUkuran() const { return ukuran; }
    bool getDingin() const { return dingin; }

    void setUkuran(string u) { ukuran = u; }
    void setDingin(bool es) { dingin = es; }

    string getKategori() const override { return "Minuman"; }
    string getDetailSpesifik() const override {
        return "Ukuran " + ukuran + ", " + (dingin ? "Dingin" : "Panas");
    }
};

#endif