from MenuItem import MenuItem

class Minuman(MenuItem):
    def __init__(self, kode_menu, nama, harga_base, ukuran, dingin):
        super().__init__(kode_menu, nama, harga_base)
        self._ukuran = ukuran
        self._dingin = dingin

    def get_ukuran(self): return self._ukuran
    def set_ukuran(self, u): self._ukuran = u

    def is_dingin(self): return self._dingin
    def set_dingin(self, d): self._dingin = d

    def get_kategori(self):
        return "Minuman"

    def get_detail_spesifik(self):
        status_suhu = "Dingin" if self._dingin else "Panas"
        return f"Ukuran {self._ukuran}, {status_suhu}"