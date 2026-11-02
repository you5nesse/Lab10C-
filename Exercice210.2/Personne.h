#ifndef PERSONNE_H
#define PERSONNE_H
#include <iostream>
#include <string>
using namespace std;
class Personne
{
    private:
    string nom;
    int age;

    public:
        Personne(string n, int a) {
        nom = n;
        age = a;
    }
    void afficher() {
        cout << "Nom : " << nom << endl;
        cout << "Age : " << age << " ans" << endl;
    }
        virtual ~Personne(){};


};

#endif // PERSONNE_H
