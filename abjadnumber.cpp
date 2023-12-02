#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <limits>

using namespace std;

void sortAscending(vector<double>& numbers) {
    sort(numbers.begin(), numbers.end());
}

void sortDescending(vector<double>& numbers) {
    sort(numbers.rbegin(), numbers.rend());
}

void sortAscending(vector<string>& words) {
    sort(words.begin(), words.end());
}

void sortDescending(vector<string>& words) {
    sort(words.rbegin(), words.rend());
}

int main() {
    int choice;
	            cout << "Praktikum #5.\n";
    do {
        cout << "1. Urutan angka" << endl;
        cout << "2. Urutan abjad" << endl;
        cout << "Masukan angka yang anda pilih 1/2 : ";

        cin >> choice;

        if (choice == 1) {
            // Mengurutkan angka dari terkecil ke terbesar dan sebaliknya
            vector<double> numbers;

            cout << "Masukkan angka satu per satu :" << endl;

            double num;
            while (cin >> num) {
                numbers.push_back(num);
                
                if (cin.peek() == '\n') {
                    break;
                }
            }

            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');

            cout << "Angka sebelum diurutkan (akhiri dengan karakter non-angka: ";
            for (vector<double>::iterator it = numbers.begin(); it != numbers.end(); ++it) {
                cout << *it << " ";
            }

            // Memilih cara pengurutan
           cout << "\nPilih nomor urutan yang anda inginkan \n 1: ascending (terkecil)\n 2: descending (terbesar) \n: ";
            int sortingChoice;
            cin >> sortingChoice;

            // Mengurutkan
            if (sortingChoice == 1) {
                sortAscending(numbers);
                cout << "Angka setelah diurutkan (ascending): ";
            } else if (sortingChoice == 2) {
                sortDescending(numbers);
                cout << "Angka setelah diurutkan (descending): ";
            } else {
                cout << "Pilihan tidak valid.";
                return 1;
            }

            // Menampilkan hasil pengurutan
            for (vector<double>::iterator it = numbers.begin(); it != numbers.end(); ++it) {
                cout << *it << " ";
            }
        } else if (choice == 2) {
            // Mengurutkan abjad dari beberapa kata
            vector<string> words;

            cout << "Masukkan kata satu per satu (akhiri dengan karakter non-huruf):" << endl;

            string word;
            while (cin >> word) {
                if (!isalpha(word[word.length() - 1])) {
                    break;
                }
                words.push_back(word);
            }

            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');

            cout << "Kata sebelum diurutkan: ";
            for (vector<string>::iterator it = words.begin(); it != words.end(); ++it) {
                cout << *it << " ";
            }

            cout << "\nPilih nomor urutan yang anda inginkan \n 1: ascending (terkecil)\n 2: descending (terbesar) \n: ";
            int sortingChoice;
            cin >> sortingChoice;

            if (sortingChoice == 1) {
                sortAscending(words);
                cout << "Kata setelah diurutkan (ascending): ";
            } else if (sortingChoice == 2) {
                sortDescending(words);
                cout << "Kata setelah diurutkan (descending): ";
            } else {
                cout << "Pilihan tidak valid.";
                return 1;
            }

            for (vector<string>::iterator it = words.begin(); it != words.end(); ++it) {
                cout << *it << " ";
            }
        } else {
            cout << "Pilihan anda tidak valid.";
            return 1;
        }

        // Ulang kode
        cout << "\nApakah anda ingin mengulang codenya? (1: Ya, 0: Tidak): ";
        int repeatChoice;
        cin >> repeatChoice;

        if (repeatChoice != 1) {
            break; // Keluar dari loop jika tidak ingin mengulang
        }

    } while (true);
                cout << "Terima kasih :).";
    return 0;
}
