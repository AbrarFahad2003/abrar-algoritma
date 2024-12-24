#include <iostream>
#include <string>
using namespace std;

// Struktur data untuk mahasiswa
struct Mahasiswa {
    string npm, nama, kelas;
    Mahasiswa* next;
};

// Kelas Stack
class Stack {
private:
    Mahasiswa* top;

public:
    Stack() : top(nullptr) {}

    // Menambahkan data mahasiswa ke stack
    void push(const Mahasiswa& mhs) {
        Mahasiswa* newNode = new Mahasiswa{mhs};
        newNode->next = top;
        top = newNode;
        cout << "Data mahasiswa " << mhs.nama << " berhasil ditambahkan.\n";
    }

    // Menghapus data mahasiswa dari stack
    void pop() {
        if (!top) {
            cout << "Stack kosong.\n";
            return;
        }
        Mahasiswa* temp = top;
        cout << "Data mahasiswa " << top->nama << " berhasil dihapus.\n";
        top = top->next;
        delete temp;
    }

    // Menampilkan data mahasiswa yang ada di stack
    void tampil() const {
        if (!top) {
            cout << "Stack kosong.\n";
            return;
        }
        Mahasiswa* current = top;
        while (current) {
            cout << "NPM: " << current->npm << " | Nama: " << current->nama << " | Kelas: " << current->kelas << endl;
            current = current->next;
        }
    }

    // Menyisipkan data mahasiswa secara terurut berdasarkan NPM
    void sisipTerurut(const Mahasiswa& mhs) {
        Mahasiswa* newNode = new Mahasiswa{mhs};
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
        cout << "Data mahasiswa " << mhs.nama << " berhasil ditambahkan secara terurut.\n";
    }

    // Menghapus data mahasiswa berdasarkan NPM
    void hapusData(const string& npm) {
        if (!top) {
            cout << "Stack kosong.\n";
            return;
        }
        if (top->npm == npm) {
            Mahasiswa* temp = top;
            top = top->next;
            delete temp;
            cout << "Data mahasiswa dengan NPM " << npm << " berhasil dihapus.\n";
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
            cout << "Data mahasiswa dengan NPM " << npm << " berhasil dihapus.\n";
        } else {
            cout << "Data mahasiswa dengan NPM " << npm << " tidak ditemukan.\n";
        }
    }

    // Memperbarui data mahasiswa berdasarkan NPM
    void updateData(const string& npm, const string& newNama, const string& newKelas) {
        Mahasiswa* current = top;
        while (current && current->npm != npm) {
            current = current->next;
        }
        if (current) {
            current->nama = newNama;
            current->kelas = newKelas;
            cout << "Data mahasiswa dengan NPM " << npm << " berhasil diperbarui.\n";
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
        cout << "4. Tambah Data Mahasiswa Terurut\n";
        cout << "5. Hapus Data Mahasiswa Berdasarkan NPM\n";
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
