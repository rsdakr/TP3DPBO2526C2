#ifndef MAKANAN
#define MAKANAN

#include "MenuItem.h"

// =============================================================
// Kelas 2: Makanan (Derived Class 1 - Hierarchical Inheritance)
// =============================================================
class Makanan : public MenuItem {
private:
    int levelPedas;
    string porsi;

public:
    Makanan(string kodeMenu, string nama, int hargaBase, string porsi)
        : MenuItem(kodeMenu, nama, hargaBase), porsi(porsi) {}

    string getPorsi() const { return porsi; }

    void setPorsi(string p) { porsi = p; }

    string getKategori() const override { return "Makanan"; }
    string getDetailSpesifik() const override {
        return "Porsi " + porsi;
    }
};

#endif