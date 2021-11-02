#include <iostream>

using namespace std;

class waktu{
    private:
    int jam, menit, detik;

    public:
    int getjam(){
        return jam;  
    }
    void setjam(int j){
        jam = j;
        if (j > 0 && j < 24){
            cout << "sekarang jam "<< jam;
        }else{
            cout << "cek kembali";
        }
    }
    int getmenit(){
        return menit;
    }
    void setmenit(int m){
        menit = m;
        if (m > 0 && m < 60){
            cout << " menit "<<menit;
       }else{
           cout << "cek kembali"<<endl;
       }
    }
    int getdetik(){
        return detik;
    }
    void setdetik(int d){
        detik = d;
        if (d > 0 && d < 60){
            cout << " detik " << detik << endl;
        }else{
            cout << "cek kembali" << endl;
        }
    }
    int hitungwaktu(){
        return jam;
        return menit;
        return detik;
    }
};

int main(){
    waktu test;
    test.setjam (12);
    test.setmenit (30);
    test.setdetik (31);
    cout << test.hitungwaktu();
    return 0;
}