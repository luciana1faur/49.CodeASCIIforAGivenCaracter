#include <iostream>
using namespace std;

int main() {
  char caracter;
  cout << "Introduceti caracterul dumneavoastra: ";
  cin >> caracter;

  cout << "Codul ASCII pentru caracterul " << caracter << " este " << (int)caracter << endl;
  
  cout << "Caracterul pentru codul Ascii " << (int)caracter << " este " << caracter << endl;

  return 0;
}