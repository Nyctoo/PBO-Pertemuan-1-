#include <iostream>

using namespace std;

int main(){
    int n, j, i, s; //fungsi j,i,s untuk melakukan perulangan
    cout << "masukkan jumlah baris : ";
    cin >> n; //fungsi n untuk menentukan jumlah baris
    for(i=1; i<=n; i++){ //proses perulangan dimana i tidak lebih dari baris
        for(s=1; s<n; s++) //proses perulangan pada angka sesuai dengan input yang diminta
        cout << "5";    //input angka tidak sama dengan jumlah baris
        for(j=1; j<=1; j++) //proses perulangan pada input * sesuai dengan baris yang diminta
        cout << "*";
        cout << "\n"; //penambahan line baru
    }
    return 0;
}