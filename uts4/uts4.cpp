#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main(){
    int full;
    char ulang, pilih, first[20], middle[20], last[20];
    do{
    
    cout << "MENU"<<endl;
    cout << "1. Input"<<endl;
    cout << "0. Keluar"<<endl;

    cout << "pilih : "; cin >> pilih;
    cout << endl;

    switch(pilih){
        case '1':
    cout << "masukkan nama depan : ";
    cin >> first;
    cout << "masukkan nama tengah : ";
    cin >> middle;
    cout << "masukkan nama akhir : ";
    cin >> last;
    cout << "nama lengkap : "<<first<<middle<<last<<endl;
    break;

        case '0':
    cout << "thanks\n";
    break;

    default :
    cout << "pilihan anda tidak dapat diproses";
    }
    cout << "ingin memilih menu lain ?(y/t)";
    cin >> ulang;
    }
    while (ulang == 'y'||ulang == 'Y');
    getch();
    return 0;
}