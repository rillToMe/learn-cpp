#include <iostream>

int main(){
    const float persentasePajak = 0.10;

    int handCream = 50000;
    int jumlahHandCream = 2;

    int gantunganKunci = 30000;
    int jumlahGantunganKunci = 3;

    int diskonFlat = 15000;

    int subTotal = (handCream * jumlahHandCream) + (gantunganKunci * jumlahGantunganKunci);
    int totalSetelahDiskon = subTotal - diskonFlat;

    float besarPajak = totalSetelahDiskon * persentasePajak;

    float totalAkhir = totalSetelahDiskon + besarPajak;

    std::cout << "=== RINGKASAN PEMBAYARAN TOKO SERBA ADA ===" "\n";
    std::cout << "SubTotal             :    " << subTotal << "\n";
    std::cout << "Total Setelah Diskon :    " << totalSetelahDiskon << "\n";
    std::cout << "Pajak 10%            :    " << besarPajak << "\n";
    std::cout << "-------------------------------------------" "\n";
    std::cout << "Total Akhir          :    " << totalAkhir << "\n";
}
 
