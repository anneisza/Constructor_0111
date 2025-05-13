#include <iostream>
using namespace std;

class buku{
    string judul;
    public:
        string setget(string jdl)
        {
            //nilai parameter 'judul' untuk member variabel 'judul'
            this->judul=jdl;
            //return variabel judul
            return this->judul;
        }
};

int main(){
    buku bukunya;
    cout<<bukunya.setget("Matematika");
    return 0;
}