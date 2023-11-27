#include <iostream>

using std::cin;
using std::cout;
using std::endl;

float hitung_luas_lingkaran(float jari_jari) {
  return 3.14 * jari_jari * jari_jari;
}

int main(){
  float jari_jari;

  cout << "Masukkan jari-jari: ";
  cin >> jari_jari;

  cout << "Luas lingkaran dengan jari-jari " << jari_jari << " adalah " << hitung_luas_lingkaran(jari_jari) << endl;

  return 0;
}