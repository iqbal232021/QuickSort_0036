#include <iostream>

using namespace std;

// Array untuk menyimpan elemen
int arr[20];

// Menghitung jumlah perbandingan yang dilakukan selama pengurutan
int comparisonCount = 0;

// Menghitung jumlah perpindahan data (swap) yang dilakukan selama pengurutan
int movementCount = 0;
int n;

// Mendapatkan masukan ukuran array yang valid dari pengguna
void getInput() {
    while (true) {
        cout << "Masukkan ukuran array (maksimum 20): ";
        cin >> n;

        if (n <= 20) {
            break;
        }
        else {
            cout << "\nUkuran array maksimum adalah 20.\n" << endl;
        }
    }

    cout << "\n---\n";
    cout << "Masukkan Elemen Array\n";
    cout << "---\n";

    for (int i = 0; i < n; i++) {
        cout << "Elemen " << i + 1 << ": ";
        cin >> arr[i];
    }
}
