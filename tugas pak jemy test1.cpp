#include <iostream>
#include <string>
using namespace std;

struct Mahasiswa {
    string npm, nama, kelas;
    Mahasiswa* next;
};

class Stack {
    Mahasiswa* top = NULL;

public:
    void push(const Mahasiswa& mhs) {
        Mahasiswa* newNode = new Mahasiswa;
        newNode->next = top;
        top = newNode;
    }

    void pop() {
        if (top) {
            Mahasiswa* temp = top;
            top = top->next;
            delete temp;
        }
    }

    void tampil() {
        if (!top) {
            cout << "Stack kosong.\n";
            return;
        }
        Mahasiswa* current = top;
        while (current) {
            cout << current->npm << " | " << current->nama << " | " << current->kelas << endl;
            current = current->next;
        }
    }

    void sisipTerurut(const Mahasiswa& mhs) {
        Mahasiswa* newNode = new Mahasiswa;
        if (!top || top->npm > mhs.npm) {
            newNode->next = top;
            top = newNode;
            return;
        }
        Mahasiswa* current = top;
        while (current->next && current->next->npm < mhs.npm) {
            current = current->next;
        }
        newNode->next = current->next;
        current->next = newNode;
    }

    void hapusData(const string& npm) {
        if (top && top->npm == npm) {
            Mahasiswa* temp = top;
            top = top->next;
            delete temp;
            return;
        }
        Mahasiswa* current = top;
        while (current->next && current->next->npm != npm) {
            current = current->next;
        }
        if (current->next) {
            Mahasiswa* temp = current->next;
            current->next = current->next->next;
            delete temp;
        } else {
            cout << "Data mahasiswa dengan NPM " << npm << " tidak ditemukan.\n";
        }
    }

    void updateData(const string& npm, const string& newNama, const string& newKelas) {
        Mahasiswa* current = top;
        while (current && current->npm != npm) {
            current = current->next;
        }
        if (current) {
            current->nama = newNama;
            current->kelas = newKelas;
        } else {
            cout << "Data mahasiswa dengan NPM " << npm << " tidak ditemukan.\n";
        }
    }
};

int main() {
    Stack stack;
    int pilihan;
    Mahasiswa mhs;

    while (true) {
        cout << "\nMenu:\n";
        cout << "1. Tambah Data Mahasiswa\n";
        cout << "2. Hapus Data Mahasiswa\n";
        cout << "3. Tampilkan Data Mahasiswa\n";
        cout << "4. Sisip Terurut\n";
        cout << "5. Hapus Data Berdasarkan NPM\n";
        cout << "6. Update Data Mahasiswa\n";
        cout << "7. Keluar\n";
        cout << "Pilih (1-7): ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                cout << "Masukkan NPM: "; cin >> mhs.npm;
                cout << "Masukkan Nama: "; cin >> mhs.nama;
                cout << "Masukkan Kelas: "; cin >> mhs.kelas;
                stack.push(mhs);
                break;
            case 2:
                stack.pop();
                break;
            case 3:
                stack.tampil();
                break;
            case 4:
                cout << "Masukkan NPM: "; cin >> mhs.npm;
                cout << "Masukkan Nama: "; cin >> mhs.nama;
                cout << "Masukkan Kelas: "; cin >> mhs.kelas;
                stack.sisipTerurut(mhs);
                break;
            case 5:
                cout << "Masukkan NPM mahasiswa yang ingin dihapus: "; cin >> mhs.npm;
                stack.hapusData(mhs.npm);
                break;
            case 6:
                cout << "Masukkan NPM mahasiswa yang ingin diupdate: "; cin >> mhs.npm;
                cout << "Masukkan Nama Baru: "; cin >> mhs.nama;
                cout << "Masukkan Kelas Baru: "; cin >> mhs.kelas;
                stack.updateData(mhs.npm, mhs.nama, mhs.kelas);
                break;
            case 7:
                return 0;
            default:
                cout << "Pilihan tidak valid, coba lagi.\n";
        }
    }
    return 0;
}
