#include <iostream>

//gunakan const supaya variable pi tidak ingin di ubah waktu tidak sengaja membuatnya kembali di line / file lain
int main() {
    double pi = 3.14;
    pi = 1;
    std::cout << pi;
    return 0;
}


// contoh variable yang nilai nya bisa berubah jika di panggil lagi
// double pi = 3.14;
// pi = 1
// std::cout << pi;

// maka hasilnya bukan 3.14 tapi 1
//karena itu kita butuh const untuk hasil yang tetap