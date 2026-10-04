#include <iostream>
#include <algorithm>

#include "Restoran.h"
#include "MenuItem.h"
#include "Makanan.h"
#include "Minuman.h"

using namespace std;


// =============================================================
// Main Program
// =============================================================
int main() {
    // Inisialisasi Objek Restoran
    Restoran resto("Warkop Entahlah");

    // Menambahkan Data Awal
    resto.tambahMakanan("M01", "Nasi Goreng Spesial", 18000, "Jumbo");
    resto.tambahMakanan("M02", "Mie Rebus", 13000, "Reguler");
    resto.tambahMinuman("D01", "Es Teh Manis", 6000, "Medium", true);
    resto.tambahMinuman("D02", "Kopi Hitam Panas", 4000, "Small", false);
    resto.tambahMakanan("M03", "Nasi Telor", 10000, "Reguler");

    cout << "=========================================================\n";
    cout << "             SISTEM MANAJEMEN RESTORAN (CPP)             \n";
    cout << "=========================================================\n";

    cout << "\nNama Restoran: " << resto.getNamaRestoran() << "\n";

    // 1. Tampilkan Data Sebelum Penambahan
    cout << "\n[1] DAFTAR MENU SEBELUM DITAMBAHKAN DATA BARU:\n";
    resto.tampilkanTabelMenu();

    // 2. Proses Penambahan Data Baru
    cout << "\n--> Menambahkan menu baru (Makanan & Minuman)...\n";
    resto.tambahMinuman("D03", "Es Kopi Susu", 8000, "Medium", true);
    resto.tambahMinuman("D04", "Jus Alpukat", 12000, "Large", true);
    resto.tambahMakanan("M04", "Nasi Ayam Bakar", 15000, "Reguler");

    // 3. Tampilkan Data Sesudah Penambahan
    cout << "\n[2] DAFTAR MENU SESUDAH DITAMBAHKAN DATA BARU:\n";
    resto.tampilkanTabelMenu();

    cout << "\nProgram selesai.\n";
    return 0;
}