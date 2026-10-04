public class Main {
    public static void main(String[] args) {
        Restoran resto = new Restoran("Warkop Entahlah");

        // Menambahkan Data Awal
        resto.tambahMakanan("M01", "Nasi Goreng Spesial", 18000, "Jumbo");
        resto.tambahMakanan("M02", "Mie Rebus", 13000, "Reguler");
        resto.tambahMinuman("D01", "Es Teh Manis", 6000, "Medium", true);
        resto.tambahMinuman("D02", "Kopi Hitam Panas", 4000, "Small", false);
        resto.tambahMakanan("M03", "Nasi Telor", 10000, "Reguler");

        System.out.println("========================================================");
        System.out.println("            SISTEM MANAJEMEN RESTORAN (JAVA)            ");
        System.out.println("========================================================");

        System.out.println("\nNama Restoran: " + resto.getNamaRestoran() + "\n");

        // 1. Tampilkan Data Sebelum Penambahan
        System.out.println("\n[1] DAFTAR MENU SEBELUM DITAMBAHKAN DATA BARU:");
        resto.tampilkanTabelMenu();

        // 2. Proses Penambahan Data Baru
        System.out.println("\n--> Menambahkan menu baru (Makanan & Minuman)...");
        resto.tambahMinuman("D03", "Es Kopi Susu", 8000, "Medium", true);
        resto.tambahMinuman("D04", "Jus Alpukat", 12000, "Large", true);
        resto.tambahMakanan("M04", "Nasi Ayam Bakar", 15000, "Reguler");

        // 3. Tampilkan Data Sesudah Penambahan
        System.out.println("\n[2] DAFTAR MENU SESUDAH DITAMBAHKAN DATA BARU:");
        resto.tampilkanTabelMenu();

        System.out.println("\nProgram selesai.");
    }
}