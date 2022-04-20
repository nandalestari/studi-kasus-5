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
  
}
  
