from Restoran import Restoran

def main():
    resto = Restoran("Warkop Entahlah")

    # Menambahkan Data Awal
    resto.tambah_makanan("M01", "Nasi Goreng Spesial", 18000, "Jumbo")
    resto.tambah_makanan("M02", "Mie Rebus", 13000, "Reguler")
    resto.tambah_minuman("D01", "Es Teh Manis", 6000, "Medium", True)
    resto.tambah_minuman("D02", "Kopi Hitam Panas", 4000, "Small", False)
    resto.tambah_makanan("M03", "Nasi Telor", 10000, "Reguler")

    print("========================================================")
    print("           SISTEM MANAJEMEN RESTORAN (PYTHON)           ")
    print("========================================================")

    print(f"\nNama Restoran: {resto.get_nama_restoran()}\n")

    # 1. Tampilkan Data Sebelum Penambahan
    print("\n[1] DAFTAR MENU SEBELUM DITAMBAHKAN DATA BARU:")
    resto.tampilkan_tabel_menu()

    # 2. Proses Penambahan Data Baru
    print("\n--> Menambahkan menu baru (Makanan & Minuman)...")
    resto.tambah_minuman("D03", "Es Kopi Susu", 8000, "Medium", True)
    resto.tambah_minuman("D04", "Jus Alpukat", 12000, "Large", True)
    resto.tambah_makanan("M04", "Nasi Ayam Bakar", 15000, "Reguler")

    # 3. Tampilkan Data Sesudah Penambahan
    print("\n[2] DAFTAR MENU SESUDAH DITAMBAHKAN DATA BARU:")
    resto.tampilkan_tabel_menu()

    print("\nProgram selesai.")

if __name__ == "__main__":
    main()