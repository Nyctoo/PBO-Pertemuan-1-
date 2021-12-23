#include<iostream>
#include <cstddef>
#include <vector>
#include <string>

using namespace std;

class plant{
	protected :
		int statustumbuh;
		int jumlahair;
		int jumlahpupuk;
	
	public :
		plant (){
			statustumbuh = 0;
			jumlahair = 0;
			jumlahpupuk = 0;
		}
		void tumbuh(){
			if(statustumbuh < 4){
				jumlahair = jumlahair - 3;
				jumlahpupuk = jumlahpupuk - 1;
				statustumbuh++;
			}
		}
		void beriair(){
			jumlahair++;
			
		}
		void beripupuk(){
			jumlahpupuk++;
			
		}
		void displayplant(){
			cout<<"\nStatus pertumbuhan = "<<pertumbuhan()<<endl;
			cout<<"Jumlah air   = "<<jumlahair<<endl;
			cout<<"Jumlah pupuk = "<<jumlahpupuk<<endl;
		}
		string pertumbuhan(){
			switch (statustumbuh){
				case 0:
					return "Benih";
					break;
				case 1:
					return "Tunas";
					break;
				case 2:
					return "Tanaman Kecil";
					break;
				case 3:
					return "Tanaman Dewasa";
					break;
			}
			return "Berbunga";
		}
		int getstatustumbuh(){
			return statustumbuh;
		}
};

class Anggrek : public plant{
    private :
        string jenis;
    
    public :
        Anggrek (){
            plant();
            jenis = "Anggrek";
        }
    void cekkondisitumbuh(){
        if(jumlahair >= 3 && jumlahpupuk >= 2){
				cout<<"Anggrek tumbuh "<<endl;
				tumbuh();
			}
			else{
				cout<<"jumlah air Anggrek   = "<<jumlahair<<endl;
				cout<<"jumlah pupuk Anggrek = "<<jumlahpupuk<<endl;
			}
    }
    void tumbuh(){
			if(statustumbuh < 4){
				jumlahair   = jumlahair - 3;
				jumlahpupuk = jumlahpupuk - 2;
				statustumbuh++;
			}
		}
    string getjenis(){
        return jenis;
    }
         
};

class Mawar : public plant{
    private :
        string jenis;
    
    public :
        Mawar (){
        	plant();
        	jenis = "Mawar";
        }
    void cekkondisitumbuh(){
        if(jumlahair >= 2 && jumlahpupuk >= 2){
				cout<<"Mawar tumbuh "<<endl;
				tumbuh();
			}
			else{
				cout<<"jumlah air Mawar   = "<<jumlahair<<endl;
				cout<<"jumlah pupuk Mawar = "<<jumlahpupuk<<endl;
			}
    }
    void tumbuh(){ 
			if(statustumbuh < 4){
				jumlahair   = jumlahair - 2;
				jumlahpupuk = jumlahpupuk - 2;
				statustumbuh++;
			}
		}
    string getjenis(){
        return jenis;
    }
         
};

class Melati : public plant{
    private :
        string jenis;
    
    public :
         Melati (){
             plant();
             jenis = "Melati";
         }
    void cekkondisitumbuh(){
        if(jumlahair >= 1 && jumlahpupuk >= 2){
				cout<<"Melati tumbuh "<<endl;
				tumbuh();
			}
			else{
				cout<<"jumlah air Melati   = "<<jumlahair<<endl;
				cout<<"jumlah pupuk Melati = "<<jumlahpupuk<<endl;
			}
    }
    void tumbuh(){
			if(statustumbuh < 4){
				jumlahair   = jumlahair - 1;
				jumlahpupuk = jumlahpupuk - 2;
				statustumbuh++;
			}
		}
    string getjenis(){
        return jenis;
    }
         
};

class Lili : public plant{
    private :
        string jenis;
    
    public :
        Lili (){
            plant();
            jenis = "Lili";
        }
    void cekkondisitumbuh(){
        if(jumlahair >= 1 && jumlahpupuk >= 1){
				cout<<"Lili tumbuh "<<endl;
				tumbuh();
			}
			else{
				cout<<"jumlah air Lili   = "<<jumlahair<<endl;
				cout<<"jumlah pupuk Lili = "<<jumlahpupuk<<endl;
			}
    }
    void tumbuh(){
			if(statustumbuh < 4){
				jumlahair   = jumlahair - 1;
				jumlahpupuk = jumlahpupuk - 1;
				statustumbuh++;
			}
		}
    string getjenis(){
        return jenis;
    }
         
};


class taman : public Anggrek, public Mawar, public Melati, public Lili{
	protected :
		int ukuran;
		int tanaman;
		int panen;
		vector<plant> t;
		vector<Anggrek> a;
		vector<Mawar> m;
		vector<Melati> e;
		vector<Lili> o;
	
	public :
		taman (){
			ukuran = 10;
			tanaman = 0;
			panen = 0;	
		}
	bool addanggrek(Anggrek l){
		if (tanaman < ukuran ){
			a.push_back(l);
			t.push_back(l);
			cout << "menambahkan Anggrek\n";
			tanaman++;
			return true;
		}
		else{
			return false;
		}
	}
	bool addmawar(Mawar l){
		if (tanaman < ukuran ){
			m.push_back(l);
			t.push_back(l);
			cout << "menambahkan Mawar\n";
			tanaman++;
			return true;
		}
		else{
			return false;
		}
	}
	bool addmelati(Melati l){
		if (tanaman < ukuran ){
			e.push_back(l);
			t.push_back(l);
			cout << "menambahkan Melati\n";
			tanaman++;
			return true;
		}
		else{
			return false;
		}
	}
	bool addlili(Lili l){
		if (tanaman < ukuran ){
			o.push_back(l);
			t.push_back(l);
			cout << "menambahkan Lili\n";
			tanaman++;
			return true;
		}
		else{
			return false;
		}
	}
	void airAnggrek(){
		for (int i = 0; i < a.size(); i++){
			a[i].beriair();
			a[i].cekkondisitumbuh();
		}
		
	}
	void airMawar(){
		for (int i = 0; i < m.size(); i++){
			m[i].beriair();
			m[i].cekkondisitumbuh();
		}
		
	}
	void airMelati(){
		for (int i = 0; i < e.size(); i++){
			e[i].beriair();
			e[i].cekkondisitumbuh();
		}
		
	}
	void airLili(){
		for (int i = 0; i < o.size(); i++){
			o[i].beriair();
			o[i].cekkondisitumbuh();
		}
		
	}
	void pupukAnggrek(){
		for (int i = 0; i < a.size(); i++){
			a[i].beripupuk();
			a[i].cekkondisitumbuh();
		}
	}
	void pupukMawar(){
		for (int i = 0; i < m.size(); i++){
			m[i].beripupuk();
			m[i].cekkondisitumbuh();
		}
	}
	void pupukMelati(){
		for (int i = 0; i < e.size(); i++){
			e[i].beripupuk();
			e[i].cekkondisitumbuh();
		}
	}
	void pupukLili(){
		for (int i = 0; i < o.size(); i++){
			o[i].beripupuk();
			o[i].cekkondisitumbuh();
		}
	}
};

int main(){
	taman t;
	Anggrek a;
	Mawar m;
	Melati e;
	Lili o;
	
	int inp = 0;
	do{
		cout<<"\n";
		cout << "---------------------------------------------"<<endl;
		cout << "                 Green Garden                "<<endl;
		cout << "---------------------------------------------"<<endl;
		cout << "Silahkan menambahkan tumbuhan terlebih dahulu"<<endl<<endl;
		cout << "1. menambahkan plant"<<endl;
		cout << "2. beri Anggrek air"<<endl;
		cout << "3. beri Anggrek pupuk"<<endl;
		cout << "4. beri Mawar air"<<endl;
		cout << "5. beri Mawar pupuk"<<endl;
		cout << "6. beri Melati air"<<endl;
		cout << "7. beri Melati pupuk"<<endl;
		cout << "8. beri Lili air"<<endl;
		cout << "9. beri Lili pupuk"<<endl;
		cout << "999.  keluar"<<endl;
		
		cout<<"Masukan pilihan = ";cin>>inp;
		switch(inp){
			case 1:
				int pil;
				cout<<"1. Anggrek"<<endl;
				cout<<"2. Mawar"<<endl;
				cout<<"3. Melati"<<endl;
				cout<<"4. Lili"<<endl;
				cout<<"Masukkan = ";cin>>pil;
				if(pil == 1){
					t.addanggrek(a);
				}
				else if(pil == 2){
					t.addmawar(m);
				}
				else if(pil == 3){
					t.addmelati(e);
				}
				else if(pil == 4){
					t.addlili(o);
				}
				break;
			case 2:
				t.airAnggrek();
			break;
			case 3:
				t.pupukAnggrek();
			break;
			case 4:
				t.airMawar();
			break;
			case 5:
				t.pupukMawar();
			break;
			case 6:
				t.airMelati();
			break;
			case 7:
				t.pupukMelati();
			break;
			case 8:
				t.airLili();
			break;
			case 9:
				t.pupukLili();
			break;
		}
	}while (inp!=999);
	return 0;
}