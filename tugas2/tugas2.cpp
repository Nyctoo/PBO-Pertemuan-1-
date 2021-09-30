#include <iostream>
using namespace std;

int main(){
    float umur, tahun_lahir, tahun_ini;
    cout << "masukkan tahun lahir : ";
    cin >> tahun_lahir;
    cout << "masukkan tahun sekarang : ";
    cin >> tahun_ini;

    umur = tahun_ini - tahun_lahir;
    cout << "berarti usia anda sekarang adalah "<<umur<<" tahun";
    
    return 0;
}