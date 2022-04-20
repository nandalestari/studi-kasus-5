#include <iostream>
#include <string.h>
using namespace std;

class mahasiswa {
  public:
    void mhs(int a);
  private :
  string b;
};
void mahasiswa::mhs(int a){
  // a= untuk jumlah matkul yang diambil
  if(a>=1){
    mhs(a-1);
    cout << "Masukkan MatKul : ";
    cin >> b;
    }
    cout << endl;
};
int main() {
  string nama, nim;
  int sks, diskon1, bayar, jumlah, total, diskon2;
  cout << "Masukkan Nama Mahasiswa : ";
  cin >> nama;
  cout << "Masukkan NIM Mahasiswa  : ";
  cin >> nim;
  cout << " Jumlah sks permatkul = 2 sks" << endl;
  mahasiswa Sarah;
  Sarah.mhs(3);
  sks = 3 * 2;
  cout << "Jumlah sks yang diambil : " << sks << endl;
  bayar = sks * 120000;
  cout << "Jumlah bayar sks : " << bayar << endl;
  diskon1 = 10 / 100 * bayar;
  bayar = bayar - diskon1;
  cout << "Jumlah bayar setelah diskon 10% = " << bayar << endl;
  diskon2 = 5 / 100 * bayar;
  total = bayar - diskon2;
  cout << "Total pembayaran keseluruhan (setelah tambah diskon 5%) = " << total
       << endl;
  return 0;
}
  
