#include <iostream>
using namespace std;

int main() {
    char tpRmh, jnsPembayaran;
    char namaPembeli[30];
    long long hrgRmh, angsuran;
    long long total = 0;

    cout << "Nama Pembeli : ";
    cin >> namaPembeli;
    cout << "Tipe Rumah (A-D): ";
    cin >> tpRmh;
    cout << "Jenis Pembayaran (K/T): ";
    cin >> jnsPembayaran;

    switch (tpRmh) {
        case 'a':
        case 'A':
            if (jnsPembayaran == 'K' || jnsPembayaran == 'k') {
                hrgRmh = 50000000;
                angsuran = 500000;
                total = hrgRmh * 12 * 10;
            } else {
                hrgRmh = 50000000;
            }
            break;
        case 'b':
        case 'B':
            if (jnsPembayaran == 'K' || jnsPembayaran == 'k') {
                hrgRmh = 75000000;
                angsuran = 750000;
                total = hrgRmh * 12 * 10;
            } else {
                hrgRmh = 75000000;
            }
            break;
        case 'c':
        case 'C':
            if (jnsPembayaran == 'K' || jnsPembayaran == 'k') {
                hrgRmh = 85000000;
                angsuran = 1000000;
                total = hrgRmh * 12 * 10;
            } else {
                hrgRmh = 85000000;
            }
            break;
        case 'd':
        case 'D':
            if (jnsPembayaran == 'K' || jnsPembayaran == 'k') {
                hrgRmh = 1000000;
                angsuran = 1000000;
                total = hrgRmh * 12 * 10;
            } else {
                hrgRmh = 1000000;
            }
            break;
        default:
            cout << "Salah, Ulangi Lagi!" << endl;
            return 0;
    }

    if (jnsPembayaran == 'K' || jnsPembayaran == 'k') {
        cout << "Angsuran Perbulan: Rp " << angsuran << endl;
        cout << "Total Harga Rumah: Rp " << total << endl;
    } else if (jnsPembayaran == 'T' || jnsPembayaran == 't') {
        cout << "Harga Rumah: Rp " << hrgRmh << endl;
    } else {
        cout << "Salah, Ulangi Lagi!" << endl;
    }

    return 0;
}
