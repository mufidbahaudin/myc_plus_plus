// Kalkulator

#include <iostream>

    using namespace std;

    int main() {
    char op;
    double angka1, angka2, hasil;
		cout << "KALKULATOR SEDERHANA\n";
        cout << "Masukkan angka ke-1: " ; cin>> angka1;
        cout << "Pilih operator (+, -, *, /, ): " ; cin>> op;
        cout << "Masukkan angka ke-2: " ; cin>> angka2;

            switch (op) {
            case '+':
            hasil = angka1 + angka2;
            break;
            case '-':
            hasil = angka1 - angka2;
            break;
            case '*':
            hasil = angka1 * angka2;
            break;
            case '/':
            if (angka2 != 0) {
            hasil = angka1 / angka2;
            } else {
            cout << "Tidak bisa dibagi 0." << endl; return 1; } 
			break;
			 default: 
			 cout << "ERROR." << endl; return 1; } 
			 cout << "=======================================\n";
			 cout << "Hasil dari perhitungan : " << angka1 << " " << op << " " << angka2 << " = " << hasil << endl; 
			 return 0; }
