class MenuItem:
    def __init__(self, kode_menu="", nama="", harga_base=0):
        self._kode_menu = kode_menu
        self._nama = nama
        self._harga_base = harga_base

    # Getter & Setter
    def get_kode_menu(self): return self._kode_menu
    def set_kode_menu(self, kode): self._kode_menu = kode

    def get_nama(self): return self._nama
    def set_nama(self, n): self._nama = n

    def get_harga_base(self): return self._harga_base
    def set_harga_base(self, h): self._harga_base = h

    def get_kategori(self):
        return "Umum"

    def get_detail_spesifik(self):
        return "-"