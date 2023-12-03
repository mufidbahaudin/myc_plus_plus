#include <iostream>
#include <limits>  // Diperlukan untuk membersihkan buffer cin
#include <ctime>
#include <cstdlib>

#ifdef _WIN32
#include <windows.h>
#else
#include <unistd.h>
#endif

using namespace std;

int main() {
    int playerChoice, computerChoice;
    char playAgain;

    // Seed untuk menghasilkan angka acak
    srand(time(0));

    do {
        cout << "Selamat datang di permainan Batu Gunting Kertas" << endl;

        // Meminta pemain untuk memilih dan memvalidasi input
        do {
            cout << "Pilih:\n1. Batu\n2. Gunting\n3. Kertas" << endl;
            cout << "Masukkan pilihan nomor Anda (1-3): ";

            cin >> playerChoice;

            // Mengatasi masukan yang bukan angka
            if (cin.fail()) {
                cout << "Input tidak valid. Masukkan angka." << endl;
                cin.clear();  // Mengatur status cin kembali ke normal
                cin.ignore(numeric_limits<streamsize>::max(), '\n');  // Menghapus karakter tambahan dari buffer cin
            } else if (playerChoice < 1 || playerChoice > 3) {
                cout << "Pilihan tidak valid. Masukkan angka antara 1 dan 3." << endl;
            }

        } while (playerChoice < 1 || playerChoice > 3);

        // Menampilkan pilihan pemain
        cout << "Anda memilih ";
        switch (playerChoice) {
            case 1:
                cout << "Batu";
                break;
            case 2:
                cout << "Gunting";
                break;
            case 3:
                cout << "Kertas";
                break;
        }
        cout << endl;

        cout << "Komputer sedang memikirkan pilihannya...";
        cout.flush();

        // Menunggu 5 detik sebelum komputer memilih
        #ifdef _WIN32
        Sleep(5000);  //  Windows
        #else
        sleep(5);      //  Unix/Linux
        #endif
        cout << endl;

        // Generate pilihan komputer secara acak
        computerChoice = rand() % 3 + 1;

        // Menampilkan pilihan komputer
        cout << "Komputer memilih ";
        switch (computerChoice) {
            case 1:
                cout << "Batu";
                break;
            case 2:
                cout << "Gunting";
                break;
            case 3:
                cout << "Kertas";
                break;
        }
        cout << endl;

        // Menentukan pemenang
        if (playerChoice == computerChoice) {
            cout << "Hasil: Seri!" << endl;
        } else if ((playerChoice == 1 && computerChoice == 2) ||
                   (playerChoice == 2 && computerChoice == 3) ||
                   (playerChoice == 3 && computerChoice == 1)) {
            cout << "Hasil: Anda Menang!" << endl;
        } else {
            cout << "Hasil: Komputer Menang!" << endl;
        }

        // Meminta pengguna apakah ingin mengulang permainan
        cout << "Apakah Anda ingin mengulang permainan? (y/n): ";
        cin >> playAgain;

    } while (playAgain == 'y' || playAgain == 'Y');

    cout << "Terima kasih telah bermain! Selamat tinggal." << endl;

    return 0;
}

