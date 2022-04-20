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
  
