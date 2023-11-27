#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int penjumlahan(int a, int b){
  return a + b;
}

int perkalian(int a, int b){
  return a * b;
}

int pembagian(int a, int b){
  return a / b;
}

int pengurangan(int a, int b){
  return a - b;
}

int main(){
  int pilihan;
  cout << "\tKalkulator" << endl;
  cout << "1. Penjumlahan" << endl;
  cout << "2. Perkalian" << endl;
  cout << "3. Pembagian" << endl;
  cout << "4. Pengurangan" << endl;
  cout << "5. Pangkat" << endl;
  cout << "Masukan pilihan: ";
  cin >> pilihan;

  int a, b;
  cout << "Masukkan angka pertama: ";
  cin >> a;
  cout << "Masukkan angka kedua: ";
  cin >> b;

  switch (pilihan) {
    case 1:
      cout << "Hasil penjumlahan: " << penjumlahan(a, b) << endl;
      break;
    case 2:
      cout << "Hasil perkalian: " << perkalian(a, b) << endl;
      break;
    case 3:
      cout << "Hasil pembagian: " << pembagian(a, b) << endl;
      break;
    case 4:
      cout << "Hasil pengurangan: " << pengurangan(a, b) << endl;
      break;
    case 5:
      cout << "Hasil pangkat: " << pow(a, b) << endl;
      break;
    default:
      cout << "Pilihan tidak tersedia" << endl;
      break;
  }

  return 0;
}