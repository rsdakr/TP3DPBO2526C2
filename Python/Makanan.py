from MenuItem import MenuItem

class Makanan(MenuItem):
    def __init__(self, kode_menu, nama, harga_base, porsi):
        super().__init__(kode_menu, nama, harga_base)
        self._porsi = porsi

    def get_porsi(self): return self._porsi
    def set_porsi(self, p): self._porsi = p

    def get_kategori(self):
        return "Makanan"

    def get_detail_spesifik(self):
        return f"Porsi {self._porsi}"