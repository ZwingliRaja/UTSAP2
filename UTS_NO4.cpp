#include <iostream>
using namespace std; // sebelumnya "using std;" seharusnya yang benar adalah "namespace std;" supaya dapat menggunakan fungsi

int main () {
    system ("CLS"); // seharusnya dihapus aja karena fungsinya untuk membersihkan layar...yang tidak diperlukan dikode ini

    string a;

    umur: // sebelumnya "umur;" seharusnya "umur:" untuk dideklarasikkan sebagai label goto
    cout << "Tebak Umur Saya : " ; //kurang tanda ";"
    cin >> a; // sebelumnya "<<" seharusnya ">>" karna untuk memasukkan nilai input

    if (a == "20"){ // sebelumnya a=20 seharusnya a=="20" karna operator "=" memberikkan nilai bukan membandingkan, dan "20" karna 'a' adalah string
        cout << "Jawaban Anda Benar" << endl;
    } else { //sebelumnya "else if" seharusnya "else" aja karna kalau mau pake "else if" harus ada kondisi
        cout << "Jawaban Salah, Coba Lagi..." << endl; //kurang tanda ";"
        goto umur;
    }
    
    cout << "Program Selesai";

    return 0;
}
