#include <iostream>
#include <string>
#include <map>
using namespace std;

// Struktur data untuk mewakili sepatu
struct Sepatu {
string merek;
map<int, int> harga; // Menggunakan map untuk menyimpan harga berdasarkan ukuran
};
enum KodeSepatu {
NEW_BALANCE = 1,
ADIDAS,
HOKA,
CONVERSE,
NIKE
};
// Fungsi untuk menampilkan daftar sepatu
void tampilkanDaftarSepatu(const Sepatu sepatu[], int jumlahSepatu) {
for (int i = 0; i < jumlahSepatu; ++i) {
cout << i + 1 << ". " << sepatu[i].merek << endl;
for (auto it = sepatu[i].harga.begin(); it != sepatu[i].harga.end(); ++it) {
cout << " Ukuran " << it->first << ": Rp " << it->second << endl;
}
}
}
// Fungsi untuk melakukan penjualan
void lakukanPenjualan(const Sepatu sepatu[], int jumlahSepatu) {
string namaPembeli;
int kodeSepatu, ukuran;
int harga = 0, pembayaran, kembalian;
cout << "Masukkan nama pembeli: ";
getline(cin, namaPembeli);
cout << "Masukkan Kode Sepatu: ";
cin >> kodeSepatu;
cout << "Masukkan Ukuran Sepatu (36-40): ";
cin >> ukuran;
// Validasi input ukuran
if (ukuran < 36 || ukuran > 40) {
cout << "Ukuran sepatu tidak valid." << endl;
return;
}
// Cari sepatu berdasarkan kode
if (kodeSepatu >= 1 && kodeSepatu <= jumlahSepatu) {
int index = kodeSepatu - 1;
if (sepatu[index].harga.count(ukuran) > 0) {
harga = sepatu[index].harga.at(ukuran);
cout << "Harga sepatu: Rp " << harga << endl;
cout << "Masukkan jumlah pembayaran: Rp ";
cin >> pembayaran;
if (pembayaran >= harga) {
kembalian = pembayaran - harga;
cout << "Kembalian: Rp " << kembalian << endl;
cout << "Terima kasih, " << namaPembeli << "! Transaksi selesai." << endl;
} else {
cout << "Uang anda tidak cukup." << endl;
}
} else {
cout << "Ukuran sepatu tidak tersedia untuk merek ini." << endl;
}
} else {
cout << "Kode sepatu tidak ditemukan." << endl;
}
}
int main() {
    std::cout<< "Kelompok 2 INFORMATIKA" <<endl;
    std::cout<< "1.Arif Maulana" <<endl;
    std::cout<< "2.Aulia Tasya" <<endl;
    std::cout<< "3.Rihul Jannah Kalsum" <<endl;
    std::cout<< " " <<endl;
    std::cout<< "Cerita Langkahku   " <<endl;
    std::cout<< "============================" <<endl;
// Daftar sepatu
Sepatu sepatu[5] = {
{"New Balance", {{36, 2000000}, {37, 2800000}, {38, 3000000}, {39, 3300000}, {40,
3900000}}},
{"Adidas", {{36, 2500000}, {37, 2700000}, {38, 3200000}, {40, 3500000}}},
{"Hoka", {{36, 2300000}, {37, 2600000}, {38, 3000000}, {39, 3400000}, {40, 4000000}}},
{"Converse", {{36, 1800000}, {37, 2000000}, {38, 2350000}, {40, 2700000}}},
{"Nike", {{36, 3500000}, {37, 4200000}, {38, 4800000}, {39, 5000000}, {40, 5400000}}}
};
// Tampilkan daftar sepatu
tampilkanDaftarSepatu(sepatu, 5);
// Lakukan penjualan
lakukanPenjualan(sepatu, 5);
return 0;
}
