#ifndef RESTORAN
#define RESTORAN

#include <iostream>
#include <iomanip>
#include <vector>
#include <string>

#include "MenuItem.h"
#include "Makanan.h"
#include "Minuman.h"

using namespace std;

// =============================================================
// Kelas 4: Restoran (Manager Class - Composition & Array of Objects)
// =============================================================
class Restoran {
private:
    string namaRestoran;
    vector<MenuItem*> listMenu; // Array of Objects via Vector

public:
    Restoran(string nama) : namaRestoran(nama) {}

    // Destruktor mengelola pembersihan memori (Menerapkan Komposisi Murni)
    ~Restoran() {
        for (auto item : listMenu) {
            delete item;
        }
        listMenu.clear();
    }

    // Instansiasi objek MenuItem dilakukan di dalam kelas Restoran (Composition)
    void tambahMakanan(string kode, string nama, int harga, string porsi) {
        listMenu.push_back(new Makanan(kode, nama, harga, porsi));
    }

    void tambahMinuman(string kode, string nama, int harga, string ukuran, bool dingin) {
        listMenu.push_back(new Minuman(kode, nama, harga, ukuran, dingin));
    }

    string getNamaRestoran() const { return namaRestoran; }

    // Menggambar tabel ASCII dinamis
    void tampilkanTabelMenu() const {
        if (listMenu.empty()) {
            cout << "[!] Daftar menu restoran masih kosong.\n";
            return;
        }

        vector<string> headers = {"Kode", "Nama Menu", "Kategori", "Harga", "Detail Spesifik"};
        vector<int> colWidths = {
            (int)headers[0].length(),
            (int)headers[1].length(),
            (int)headers[2].length(),
            (int)headers[3].length(),
            (int)headers[4].length()
        };

        for (const auto& item : listMenu) {
            colWidths[0] = max(colWidths[0], (int)item->getKodeMenu().length());
            colWidths[1] = max(colWidths[1], (int)item->getNama().length());
            colWidths[2] = max(colWidths[2], (int)item->getKategori().length());
            colWidths[3] = max(colWidths[3], (int)("Rp " + to_string(item->getHargaBase())).length());
            colWidths[4] = max(colWidths[4], (int)item->getDetailSpesifik().length());
        }

        auto cetakGaris = [&]() {
            cout << "+";
            for (int w : colWidths) {
                cout << string(w + 2, '-') << "+";
            }
            cout << "\n";
        };

        cetakGaris();
        cout << "|";
        for (size_t i = 0; i < headers.size(); ++i) {
            cout << " " << left << setw(colWidths[i]) << headers[i] << " |";
        }
        cout << "\n";
        cetakGaris();

        for (const auto& item : listMenu) {
            cout << "| " << left << setw(colWidths[0]) << item->getKodeMenu()
                 << " | " << left << setw(colWidths[1]) << item->getNama()
                 << " | " << left << setw(colWidths[2]) << item->getKategori()
                 << " | " << left << setw(colWidths[3]) << ("Rp " + to_string(item->getHargaBase()))
                 << " | " << left << setw(colWidths[4]) << item->getDetailSpesifik()
                 << " |\n";
        }
        cetakGaris();
    }
};

#endif