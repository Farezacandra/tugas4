#include <iostream>
#include <iomanip>
#include <string>
#include <conio.h>
#include <windows.h>

using namespace std;

void gotoxy(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

struct mahasiswa {
    char npm[9];
    char nama[30];
    int nMid;
    int nSemester;
    int nAkhir;
    char nHuruf;
} mhs[100];

int main() {
    char lg = 'Y';
    int n = 0;

    while (lg == 'Y' || lg == 'y'){
        system("cls");
        gotoxy(14, 0);
        cout << "--------------------------------------------\n";
        gotoxy(15, 1);
        cout << "Data Nilai Ujian Pemrograman C++\n";
        gotoxy(15, 2);
        cout << "Dosen          : Budiman, S.SI\n";
        gotoxy(14, 3);
        cout << "--------------------------------------------\n";
        n++;
        
        gotoxy(15, 4);
        cout << "NPM            : ";
        cin.ignore();
        cin.getline(mhs[n].npm, 9);
        gotoxy(15, 5);
        cout << "Nama           : ";
        cin.getline(mhs[n].nama, 30);
        gotoxy(15, 6);
        cout << "Nilai Mid      : ";
        cin >> mhs[n].nMid;
        
        gotoxy(15, 7);
        cout << "Nilai Semester : ";
        cin >> mhs[n].nSemester;

        mhs[n].nAkhir = 0.4 * mhs[n].nMid + 0.6 * mhs[n].nSemester;
        gotoxy(15, 8);
        cout << "Nilai Akhir    : " << mhs[n].nAkhir << endl;
        gotoxy(15, 9);
        cout << "Nilai Huruf    : " << mhs[n].nHuruf << endl;
        gotoxy(14, 10);
        cout << "--------------------------------------------\n";
        gotoxy(15, 11);
        cout << "Input Lagi [Y/T] : ";
        lg = getch();
    }

    system("cls");
    

    for (int i = 1; i <= n; i++) {
        cout << left << setw(5) << i 
             << left << setw(15) << mhs[i].npm 
             << left << setw(25) << mhs[i].nama 
             << left << setw(15) << mhs[i].nMid 
             << left << setw(18) << mhs[i].nSemester 
             << left << setw(15) << mhs[i].nAkhir 
             << left << setw(15) << mhs[i].nHuruf << endl;
    }

    cout << "--------------------------------------------------------------------------------------------------------" << endl;

    return 0;
}
