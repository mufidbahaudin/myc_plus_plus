//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <string>
//
//int main() {
//    bool repeat = true;
//
//    while (repeat) {
//        std::vector<double> numbers; // Menggunakan double untuk angka desimal
//        int n;
//
//        std::cout << "Masukkan jumlah angka yang anda pilih: ";
//        std::cin >> n;
//
//        std::cout << "Masukkan " << n << " angka:\n";
//
//        for (int i = 0; i < n; i++) {
//            double num; // Menggunakan double untuk angka desimal
//            std::cin >> num;
//            numbers.push_back(num);
//        }
//
//        double max = *std::max_element(numbers.begin(), numbers.end());
//        double min = *std::min_element(numbers.begin(), numbers.end());
//
//        std::cout << "Nilai minimum: " << min << std::endl;
//        std::cout << "Nilai maksimum: " << max << std::endl;
//
//        std::string choice;
//        std::cout << "Ingin mengulang program? (ya/tidak): ";
//        std::cin >> choice;
//
//        if (choice != "ya") {
//            repeat = false;
//        }
//    }
//
//    return 0;
//}

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <limits>

int main() {
    bool repeat = true;

    while (repeat) {
        std::vector<double> numbers; // Menggunakan double untuk angka desimal
        double num; // Menggunakan double untuk angka desimal
        std::string input;

        std::cout << "Masukkan angka (henti dengan karakter non-angka / string): ";

        while (std::cin >> num) {
            numbers.push_back(num);
            std::cout << "Masukkan angka (henti dengan karakter non-angka / string): ";
        }

        if (numbers.empty()) {
            std::cout << "Tidak ada angka yang dimasukkan." << std::endl;
        } else {
            double max = *std::max_element(numbers.begin(), numbers.end());
            double min = *std::min_element(numbers.begin(), numbers.end());

            std::cout << "Nilai minimum: " << min << std::endl;
            std::cout << "Nilai maksimum: " << max << std::endl;
        }

        std::cin.clear(); // Menghapus status kesalahan input
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Menghapus karakter tersisa dalam buffer input

        std::string choice;
        std::cout << "Ingin mengulang program? (ya/tidak): ";
        std::cin >> choice;

        if (choice != "ya") {
            repeat = false;
        }
    }

    return 0;
}



