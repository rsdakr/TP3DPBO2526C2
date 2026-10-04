public class Minuman extends MenuItem {
    private String ukuran;
    private boolean dingin;

    public Minuman(String kodeMenu, String nama, int hargaBase, String ukuran, boolean dingin) {
        super(kodeMenu, nama, hargaBase);
        this.ukuran = ukuran;
        this.dingin = dingin;
    }

    public String getUkuran() { return ukuran; }
    public void setUkuran(String ukuran) { this.ukuran = ukuran; }

    public boolean isDingin() { return dingin; }
    public void setDingin(boolean dingin) { this.dingin = dingin; }

    @Override
    public String getKategori() { return "Minuman"; }

    @Override
    public String getDetailSpesifik() {
        return "Ukuran " + ukuran + ", " + (dingin ? "Dingin" : "Panas");
    }
}