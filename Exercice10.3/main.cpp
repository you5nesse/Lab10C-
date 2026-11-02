#include <iostream>
#include<Livre.h>
using namespace std;

int main()
{
  int n;


    cout << "Combien de livres voulez-vous creer ? ";
    cin >> n;



    Livre* T = new Livre[n];


    for (int i = 0; i < n; i++) {
        cout << "\n--- Livre " << i + 1 << " ---" << endl;
        T[i].saisir();
    }


    cout << "\n===== Liste des livres =====" << endl;

    for (int i = 0; i < n; i++) {
        cout << "\nLivre " << i + 1 << endl;
        T[i].afficher();
    }


    delete[] T;
    T = nullptr;

    return 0;
}
