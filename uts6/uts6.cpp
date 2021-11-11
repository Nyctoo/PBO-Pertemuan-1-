#include <iostream>
#include <conio.h>

using namespace std;

class math{
    public :
    int a, b, hasil;
    int tambah (){
        cout << "masukkan angka 1 : ";
        cin >> a;
        cout << "masukkan angka 2 : ";
        cin >> b;
        hasil = a+b;
        cout << "hasil penjumlahan : "<<hasil<<endl;
        return hasil;
    }
    int kurang (){
        cout << "masukkan angka 1 : ";
        cin >> a;
        cout << "masukkan angka 2 : ";
        cin >> b;
        hasil = a-b;
        cout << "hasil pengurangan : "<<hasil<<endl;
        return hasil;
    }
    int kali (){
        cout << "masukkan angka 1 : ";
        cin >> a;
        cout << "masukkan angka 2 : ";
        cin >> b;
        hasil = a*b;
        cout << "hasil perkalian : "<<hasil<<endl;
        return hasil;
    }
    int bagi (){
        cout << "masukkan angka 1 : ";
        cin >> a;
        cout << "masukkan angka 2 : ";
        cin >> b;
        hasil = a/b;
        cout << "hasil pembagian : "<<hasil<<endl;
        return hasil;
    }
};

int main (){
    math test;
    char pilih, ulang;
    do{
    
    cout << "MENU MATEMATIKA"<<endl;
    cout << " 1. pertambahan"<<endl;
    cout << " 2. pengurangan"<<endl;
    cout << " 3. perkalian"<<endl;
    cout << " 4. pembagian"<<endl;
    cout << " 0. keluar"<<endl;

    cout << "Pilih : "; cin >> pilih;
    cout << endl;

    switch(pilih){
        case '1':
        test.tambah();
        break;

        case '2':
        test.kurang();
        break;

        case '3':
        test.kali();
        break;

        case '4':
        test.bagi();
        break;

        case '0':
        cout << "thanks\n";
        break;

        default :
        cout << "pilihan salah";
        cout << endl;
    }
    cout << "ingin memilih menu lain?(y/t)";
    cin >> ulang;
    }
    while (ulang == 'y'||ulang == 'Y');
    getch();
    return 0;
}