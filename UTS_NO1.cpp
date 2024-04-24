#include <iostream>
#include <string>

using namespace std;

char calculateGrade(float score) {
    if (score >= 85)
        return 'A';
    else if (score >= 70)
        return 'B';
    else if (score >= 55)
        return 'C';
    else if (score >= 40)
        return 'D';
    else
        return 'E';
}

int main() {
    string nama, nim, kom, matkul, nama_dosen_pa;
    float nilai_tugas, nilai_quis, nilai_uts, nilai_uas;

    cout << "Masukkan nama: ";
    getline(cin, nama);
    cout << "Masukkan NIM: ";
    getline(cin, nim);
    cout << "Masukkan kom: ";
    getline(cin, kom);
    cout << "Masukkan Mata Kuliah: ";
    getline(cin, matkul);
    cout << "Masukkan Nilai Tugas: ";
    cin >> nilai_tugas;
    cout << "Masukkan Nilai Quis: ";
    cin >> nilai_quis;
    cout << "Masukkan Nilai UTS: ";
    cin >> nilai_uts;
    cout << "Masukkan Nilai UAS: ";
    cin >> nilai_uas;
    cout << "Masukkan Nama Dosen PA: ";
    cin.ignore();
    getline(cin, nama_dosen_pa);

    float nilai_rata = (nilai_tugas + nilai_quis + nilai_uts + nilai_uas) / 4;

    char nilai_huruf = calculateGrade(nilai_rata);

    cout << "\nData Mahasiswa:\n";
    cout << "Nama: " << nama << endl;
    cout << "NIM: " << nim << endl;
    cout << "KOM: " << kom << endl;
    cout << "Nama Dosen PA: " << nama_dosen_pa << endl;
    cout << "Mata Kuliah: " << matkul << endl;
    cout << "Nilai : " << nilai_huruf << endl;

    return 0;
}
