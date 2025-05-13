#include <iostream>
using namespace std;

class buku{
    string judul;
    public:
        buku setJudul(string Judul){

        }

    string getJudul(){
        return this->judul;
    }
};

int main(){
    buku bukunya;
    //chain function calls
    cout << bukunya.setJudul("Matematika").getJudul();
    return 0;
}