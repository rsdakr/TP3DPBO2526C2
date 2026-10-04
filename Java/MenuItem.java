public class MenuItem {
    protected String kodeMenu;
    protected String nama;
    protected int hargaBase;

    public MenuItem() {
        this.kodeMenu = "";
        this.nama = "";
        this.hargaBase = 0;
    }

    public MenuItem(String kodeMenu, String nama, int hargaBase) {
        this.kodeMenu = kodeMenu;
        this.nama = nama;
        this.hargaBase = hargaBase;
    }

    public String getKodeMenu() { return kodeMenu; }
    public void setKodeMenu(String kodeMenu) { this.kodeMenu = kodeMenu; }

    public String getNama() { return nama; }
    public void setNama(String nama) { this.nama = nama; }

    public int getHargaBase() { return hargaBase; }
    public void setHargaBase(int hargaBase) { this.hargaBase = hargaBase; }

    public String getKategori() { return "Umum"; }
    public String getDetailSpesifik() { return "-"; }
}