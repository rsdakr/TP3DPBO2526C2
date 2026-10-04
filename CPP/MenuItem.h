#ifndef MENUITEM
#define MENUITEM

#include <string>

using namespace std;

// =============================================================
// Kelas 1: MenuItem (Base Class)
// =============================================================
class MenuItem {
protected:
    string kodeMenu;
    string nama;
    int hargaBase;

public:
    MenuItem(string kodeMenu = "", string nama = "", int hargaBase = 0)
        : kodeMenu(kodeMenu), nama(nama), hargaBase(hargaBase) {}

    virtual ~MenuItem() {}

    // Getter
    string getKodeMenu() const { return kodeMenu; }
    string getNama() const { return nama; }
    int getHargaBase() const { return hargaBase; }

    // Setter
    void setKodeMenu(string kode) { kodeMenu = kode; }
    void setNama(string n) { nama = n; }
    void setHargaBase(int h) { hargaBase = h; }

    virtual string getKategori() const { return "Umum"; }
    virtual string getDetailSpesifik() const { return "-"; }
};

#endif
