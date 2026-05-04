#include <iostream>
#include <string>
using namespace std;

class Produk
{
private:
    int id_Produk; // menambahkan variabel id produk, nama produk
    string nama_Produk;

    public:
    Produk()
    { // membuat construction tanpa parameter
        id_Produk = 0;
        nama_Produk = "tidak ada";
    }

