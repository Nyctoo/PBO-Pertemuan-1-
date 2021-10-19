#include <iostream>

using namespace std;

class umur{
    private:
    int tl, ts;

    public:
    void assign (int tahunlahir, int tahunsekarang){
        tl = tahunlahir;
        ts = tahunsekarang;
    }
    int usia(){
        return ts-tl;
    }

};

int main(){
    umur obj;
    obj.assign(2002, 2021);
    cout << "Berarti usia kalian adalah "<<obj.usia() << "tahun" << endl;
    return 0;
}