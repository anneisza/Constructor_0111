#include <iostream>
using namespace std;

class bangunDatar;

class persegiPanjang{
    public:
        void inputData(bangunDatar &BD);
        void outputData(bangunDatar &BD);
};

class bangunDatar{

    private:
        float panjang;
        float lebar;

        float hitungLuas(){
            return panjang * lebar;
        };

        float hitungKeliling(){
            return 2 * (panjang + lebar);
        };
    public:
        //untuk mengakses panjang dan lebar
        friend void persegiPanjang :: inputData (bangunDatar &BD);
         //untuk mengakses fungsi
         friend void persegiPanjang :: outputData (bangunDatar &BD);
    };

    void persegiPanjang ::inputData(bangunDatar &BD){
                cout << " Masukkan panjang :";
                cin >> BD.panjang;
                cout << " Masukkan lebar :";
                cin >> BD.lebar;
    }

    void persegiPanjang ::outputData(bangunDatar &BD){
        cout << " Luas :"<< BD.hitungLuas() << endl;
        cout << " Keliling:"<< BD.hitungKeliling()<<endl;
       
    };

int main (){
    persegiPanjang pP;
    bangunDatar BD;

    pP.inputData(BD);
    pP.outputData(BD);
}

