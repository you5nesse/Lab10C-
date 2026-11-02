
#ifndef CONTACT_H
#define CONTACT_H

#include <iostream>
#include <string>
using namespace std;

class Contact {
private:
    string nom;
    string telephone;
    string email;

public:
    Contact(string n, string t, string e) {
        nom = n;
        telephone = t;
        email = e;
    }

    string getNom() {
        return nom;
    }

    void afficher() {
        cout << "Nom : " << nom << endl;
        cout << "Telephone : " << telephone << endl;
        cout << "Email : " << email << endl;
    }
};

inline void supprimerContact(Contact** carnet, int& nb, string nom) {

    for (int i = 0; i < nb; i++) {

        if (carnet[i]->getNom() == nom) {

            delete carnet[i];


            nb--;
            carnet[nb] = nullptr;

            cout << "Contact supprime !" << endl;
            return;
        }
    }

    cout << "Contact introuvable !" << endl;
}

#endif
