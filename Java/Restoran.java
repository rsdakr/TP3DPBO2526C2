import java.util.ArrayList;
import java.util.List;

public class Restoran {
    private String namaRestoran;
    private List<MenuItem> listMenu;

    public Restoran(String namaRestoran) {
        this.namaRestoran = namaRestoran;
        this.listMenu = new ArrayList<>();
    }

    public void tambahMakanan(String kode, String nama, int harga, String porsi) {
        listMenu.add(new Makanan(kode, nama, harga, porsi));
    }

    public void tambahMinuman(String kode, String nama, int harga, String ukuran, boolean dingin) {
        listMenu.add(new Minuman(kode, nama, harga, ukuran, dingin));
    }

    public String getNamaRestoran() {
        return namaRestoran;
    }

    public void tampilkanTabelMenu() {
        if (listMenu.isEmpty()) {
            System.out.println("[!] Daftar menu restoran masih kosong.");
            return;
        }

        String[] headers = {"Kode", "Nama Menu", "Kategori", "Harga", "Detail Spesifik"};
        int[] colWidths = new int[headers.length];

        for (int i = 0; i < headers.length; i++) {
            colWidths[i] = headers[i].length();
        }

        for (MenuItem item : listMenu) {
            colWidths[0] = Math.max(colWidths[0], item.getKodeMenu().length());
            colWidths[1] = Math.max(colWidths[1], item.getNama().length());
            colWidths[2] = Math.max(colWidths[2], item.getKategori().length());
            colWidths[3] = Math.max(colWidths[3], ("Rp " + item.getHargaBase()).length());
            colWidths[4] = Math.max(colWidths[4], item.getDetailSpesifik().length());
        }

        Runnable cetakGaris = () -> {
            System.out.print("+");
            for (int w : colWidths) {
                System.out.print("-".repeat(w + 2) + "+");
            }
            System.out.println();
        };

        cetakGaris.run();
        System.out.print("|");
        for (int i = 0; i < headers.length; i++) {
            System.out.printf(" %-" + colWidths[i] + "s |", headers[i]);
        }
        System.out.println();
        cetakGaris.run();

        for (MenuItem item : listMenu) {
            System.out.printf("| %-" + colWidths[0] + "s | %-" + colWidths[1] + "s | %-" + colWidths[2] + "s | %-" + colWidths[3] + "s | %-" + colWidths[4] + "s |\n",
                    item.getKodeMenu(),
                    item.getNama(),
                    item.getKategori(),
                    "Rp " + item.getHargaBase(),
                    item.getDetailSpesifik()
            );
        }
        cetakGaris.run();
    }
}