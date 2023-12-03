#include <iostream>
#include <string>

int main() {
    const int ukuranArray = 5; // Ubah ukuranArray sesuai kebutuhan

    while (true) {
        int angkaArr[ukuranArray];
        std::string kataArr[ukuranArray];

        // Input nilai angka ke dalam array
        std::cout << "Masukkan " << ukuranArray << " nilai angka ke dalam array:" << std::endl;
        for (int i = 0; i < ukuranArray; ++i) {
            std::cout << "Nilai angka ke-" << i + 1 << ": ";
            std::cin >> angkaArr[i];
        }

        // Input nilai kata (kalimat) ke dalam array
        std::cin.ignore(); // Membersihkan newline dari buffer sebelum menggunakan std::getline
        std::cout << "Masukkan " << ukuranArray << " nilai kata (kalimat) ke dalam array:" << std::endl;
        for (int i = 0; i < ukuranArray; ++i) {
            std::cout << "Nilai kata ke-" << i + 1 << ": ";
            std::getline(std::cin, kataArr[i]);
        }

        // Pilihan angka atau huruf
        int pilihan;
        std::cout << "Pilih jenis nilai yang ingin dicari:" << std::endl;
        std::cout << "1. Angka" << std::endl;
        std::cout << "2. Huruf" << std::endl;
        std::cout << "Masukkan pilihan (1 atau 2): ";
        std::cin >> pilihan;

        // Input nilai yang akan dicari
        if (pilihan == 1) {
            int nilaiCariAngka;
            std::cout << "Masukkan nilai angka yang akan dicari: ";
            std::cin >> nilaiCariAngka;

            // Mencari nilai angka dalam array
            bool ditemukanAngka = false;
            for (int i = 0; i < ukuranArray; ++i) {
                if (angkaArr[i] == nilaiCariAngka) {
                    ditemukanAngka = true;
                    break;
                }
            }

            // Menampilkan output sesuai dengan hasil pencarian angka
            if (ditemukanAngka) {
                std::cout << "Nilai angka yang anda masukan ditemukan dalam array." << std::endl;
            } else {
                std::cout << "Data angka yang anda masukan tidak ditemukan dalam array." << std::endl;
            }
        } else if (pilihan == 2) {
            std::string nilaiCariKata;
            std::cin.ignore(); // Membersihkan newline dari buffer sebelum menggunakan std::getline
            std::cout << "Masukkan nilai kata yang akan dicari: ";
            std::getline(std::cin, nilaiCariKata);

            // Mencari nilai kata dalam array
            bool ditemukanKata = false;
            for (int i = 0; i < ukuranArray; ++i) {
                if (kataArr[i] == nilaiCariKata) {
                    ditemukanKata = true;
                    break;
                }
            }

            // Menampilkan output sesuai dengan hasil pencarian kata
            if (ditemukanKata) {
                std::cout << "Nilai kata yang anda masukan ditemukan dalam array." << std::endl;
            } else {
                std::cout << "Data kata yang anda masukan tidak ditemukan dalam array." << std::endl;
            }
        } else {
            std::cout << "Pilihan anda invalid." << std::endl;
        }

        // Meminta pengguna untuk mengulang atau mengakhiri program
        char ulangi;
        std::cout << "Apakah Anda ingin mengulang? (y/n): ";
        std::cin >> ulangi;

        if (ulangi != 'y' && ulangi != 'Y') {
            break; // Keluar dari loop jika tidak ingin mengulang
        }
    }

    return 0;
}

