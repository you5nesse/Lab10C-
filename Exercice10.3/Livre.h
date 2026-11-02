#ifndef LIVRE_H
#define LIVRE_H
#include <string>
using namespace std;
#include<iostream>
class Livre {
private:
    string titre;
    double prix;

public:
    Livre() {
    titre = "";
    prix = 0;
    }
    Livre(string t, double p) {
        titre = t;
        prix = p;
    }


    void saisir() {
        cout << "Donner le titre : ";
        getline(cin, titre);

        cout << "Donner le prix : ";
        cin >> prix;

    }

    // Affichage
    void afficher() {
        cout << "Titre : " << titre << endl;
        cout << "Prix : " << prix << " DH" << endl;
    }
};
#endif // LIVRE_H
