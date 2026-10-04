public class Makanan extends MenuItem {
    private String porsi;

    public Makanan(String kodeMenu, String nama, int hargaBase, String porsi) {
        super(kodeMenu, nama, hargaBase);
        this.porsi = porsi;
    }

    public String getPorsi() { return porsi; }
    public void setPorsi(String porsi) { this.porsi = porsi; }

    @Override
    public String getKategori() { return "Makanan"; }

    @Override
    public String getDetailSpesifik() {
        return "Porsi " + porsi;
    }
}