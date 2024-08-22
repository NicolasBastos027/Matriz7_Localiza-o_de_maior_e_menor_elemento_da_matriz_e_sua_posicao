#include <iostream>

using namespace std;

int main() {

  int matriz[6][3];
  int maior_elemento = -999;
  int menor_elemento = 999;
  int maior_linha, maior_coluna, menor_linha, menor_coluna;

  for (int i = 0; i < 6; ++i) {
    cout << "\n";
    for (int j = 0; j < 3; ++j) {
      cout << "Digite o valor da posição [" << i + 1 << "][" << j + 1 << "]:";
      cin >> matriz[i][j];
    }
  }
  for (int i = 0; i < 6; ++i) {
    for (int j = 0; j < 3; ++j) {
      if (matriz[i][j] > maior_elemento) {
        maior_elemento = matriz[i][j];
        maior_linha = i;
        maior_coluna = j;
      }
    }
  }
  for (int i = 0; i < 6; ++i) {
    for (int j = 0; j < 3; ++j) {
      if (matriz[i][j] < menor_elemento) {
        menor_elemento = matriz[i][j];
        menor_linha = i;
        menor_coluna = j;
      }
    }
  }
  cout << "Matriz: " << endl;
  for (int i = 0; i < 6; ++i) {
    cout << "\n";
    for (int j = 0; j < 3; ++j) {
      cout << matriz[i][j] << " ";
    }
  }
  cout << "\n\nMaior elemento: " << maior_elemento << endl;
  cout << "Linha do maior elemento: " << maior_linha + 1 << endl;
  cout << "Colouna do maior elemento: " << maior_coluna + 1 << endl << endl;
  cout << "Menor elemento: " << menor_elemento << endl;
  cout << "Linha do menor elemento: " << menor_linha + 1 << endl;
  cout << "Colouna do menor elemento: " << menor_coluna + 1 << endl;
  return 0;
}