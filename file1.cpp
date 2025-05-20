#include <iostream>
#include <string>
using namespace std;

class Barang {
    public:
    string namaBarang;
    int kodeBarang;
    
    Barang(string namaBarang, int kodeBarang);
};

Barang :: Barang (string namaBarang, int kodeBarang){
    cout<<"==Informasi Barang=="<<endl;
    cout<<"Nama Barang = "<< namaBarang<<endl;
    cout<<"Kode Barang = "<< kodeBarang<<endl;

}

int main(){
    Barang brg("Buku", 1234);
    return 0;
}


//Buatlah program C++ dengan class Barang yang memiliki atribut: namaBarang, kodeBarang
//Program memiliki Constructor berparameter untuk mengisi nilai namaBarang dan kodeBarang
//Serta memiliki fungsi untuk menampilkan informasi barang