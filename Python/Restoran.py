from Makanan import Makanan
from Minuman import Minuman

class Restoran:
    def __init__(self, nama_restoran):
        self._nama_restoran = nama_restoran
        self._list_menu = []  # Array of Objects (Composition)

    def tambah_makanan(self, kode, nama, harga, porsi):
        self._list_menu.append(Makanan(kode, nama, harga, porsi))

    def tambah_minuman(self, kode, nama, harga, ukuran, dingin):
        self._list_menu.append(Minuman(kode, nama, harga, ukuran, dingin))

    def get_nama_restoran(self):
        return self._nama_restoran

    def tampilkan_tabel_menu(self):
        if not self._list_menu:
            print("[!] Daftar menu restoran masih kosong.")
            return

        headers = ["Kode", "Nama Menu", "Kategori", "Harga", "Detail Spesifik"]
        col_widths = [len(h) for h in headers]

        for item in self._list_menu:
            col_widths[0] = max(col_widths[0], len(item.get_kode_menu()))
            col_widths[1] = max(col_widths[1], len(item.get_nama()))
            col_widths[2] = max(col_widths[2], len(item.get_kategori()))
            col_widths[3] = max(col_widths[3], len(f"Rp {item.get_harga_base()}"))
            col_widths[4] = max(col_widths[4], len(item.get_detail_spesifik()))

        def cetak_garis():
            print("+" + "+".join(["-" * (w + 2) for w in col_widths]) + "+")

        cetak_garis()
        header_str = "|" + "|".join([f" {headers[i]:<{col_widths[i]}} " for i in range(len(headers))]) + "|"
        print(header_str)
        cetak_garis()

        for item in self._list_menu:
            row_str = (
                f"| {item.get_kode_menu():<{col_widths[0]}} "
                f"| {item.get_nama():<{col_widths[1]}} "
                f"| {item.get_kategori():<{col_widths[2]}} "
                f"| {f'Rp {item.get_harga_base()}':<{col_widths[3]}} "
                f"| {item.get_detail_spesifik():<{col_widths[4]}} |"
            )
            print(row_str)
        cetak_garis()