#include <iostream>
using namespace std;

int main() {
    int tinggi;
    cin >> tinggi;
    
    for (int i = 1; i <= tinggi; i++) {
        // 1. Cetak Spasi dulu biar segitiga miring ke tengah
        // Jumlah spasi = tinggi total - nomor baris sekarang
        for (int j = 1; j <= tinggi - i; j++) {
            cout << "  "; // 2 spasi biar rapi
        
        
        // 2. Cetak Bintang
        // Rumus jumlah bintang ganjil: 1, 3, 5, 7... (2*i - 1)
        for (int k = 1; k <= 2 * i - 1; k++) {
            cout << "* ";
        }
        
        cout << endl;
    }
    
    return 0;
}
