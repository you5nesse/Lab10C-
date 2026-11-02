
#include "Contact.h"

int main() {

    int n;
    cout << "Combien de contacts ? ";
    cin >> n;
    cin.ignore();

    Contact** carnet = new Contact*[n];
    int nb = 0;

    for (int i = 0; i < n; i++) {
        string nom, tel, email;

        cout << "\nNom : ";
        getline(cin, nom);

        cout << "Telephone : ";
        getline(cin, tel);

        cout << "Email : ";
        getline(cin, email);

        carnet[nb] = new Contact(nom, tel, email);
        nb++;
    }

    cout << "\n--- Liste des contacts ---" << endl;

    for (int i = 0; i < nb; i++) {
        carnet[i]->afficher();
    }

    string nomSupprimer;

    cout << "\nNom a supprimer : ";
    getline(cin, nomSupprimer);

    supprimerContact(carnet, nb, nomSupprimer);

    cout << "\n--- Apres suppression ---" << endl;

    for (int i = 0; i < nb; i++) {
        carnet[i]->afficher();
    }

    // Liberation de la memoire
    for (int i = 0; i < nb; i++) {
        delete carnet[i];
    }

    delete[] carnet;

    return 0;
}
