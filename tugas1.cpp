#include <string>
#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

string modul(int angka) {
  if (angka % 2 == 0) {
    return "genap";
  } else {
    return "ganjil";
  }
}

int main(){
  int angka;

  cout << "Masukkan angka: ";
  cin >> angka;

  cout << "Angka " << angka << " adalah " << modul(angka) << endl;

  return 0;
}