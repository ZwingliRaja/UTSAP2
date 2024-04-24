#include <iostream>

using namespace std;

int main() {
    int pilihan;

    cout << "Daftar Calon Presiden Wakanda:" << endl;
    cout << "1. Jokowi" << endl;
    cout << "2. Eriko Lim" << endl;
    cout << "3. Bobon Santoso" << endl;

    cout << "Masukkan Pilihan Presiden anda: ";
    cin >> pilihan;

    switch (pilihan) {
        case 1:
            cout << "Pilihan anda telah disimpan, pilihan anda adalah 1. Jokowi" << endl;
            break;
        case 2:
            cout << "Pilihan anda telah disimpan, pilihan anda adalah 2. Eriko Lim" << endl;
            break;
        case 3:
            cout << "Pilihan anda telah disimpan, pilihan anda adalah 3. Bobon Santoso" << endl;
            break;
        default:
            cout << "Pilihan tidak valid...must a nice...must a nice." << endl;
    }

    return 0;
}
